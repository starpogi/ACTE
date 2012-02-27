#include <iostream>
using namespace std;

int main()
{
  // Declare all the variables
  int baseone;
  int heightone;
  int basetwo;
  int heighttwo;

  cout << "Enter the information for the first triangle (reprompt until an dimension > 0 are entered):" << endl;

  // Prompt the user for the base and height for the first triangle
  // Reprompt the user if a negative value 
  do
    {
      cout << "Base: ";
      cin >> baseone;

      cout << "Height: ";
      cin >> heightone;
    }
  while(baseone <= 0 || heightone <= 0);

  // Prompt the user for the base and height for the second triangle
  do
    {
      cout << "Second Triangle (reprompt until a dimension > 0 are entered):" << endl;

      cout << "Base: ";
      cin >> basetwo;

      cout << "Height: ";
      cin >> heighttwo;
    }
  while(basetwo <= 0 || heighttwo <= 0);

  // Compute the area for both triangles and the difference
  double areaone =(double) 0.5 * baseone * heightone;
  double areatwo =(double) 0.5 * basetwo * heighttwo;

  double diffone = areaone - areatwo;
  double difftwo = areatwo - areaone;

  // If statement that compares areaone and areatwo and print results based on that
  if (areaone > areatwo)
    cout << "Triangle 1 is bigger by " << diffone << " units." << endl;
  else if (areaone == areatwo)
    cout << "Triangle 1 and Triangle 2 are the same area." << endl;
  else
    cout << "Triangle 2 is bigger by " << difftwo << " units." << endl;
}
