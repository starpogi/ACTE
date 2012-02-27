/* LeShane - EC327 - Lab_1 - Q1 */

#include <iostream>
using namespace std;

int main()
{
  double tribase1;
  double trihgt1;
  double tribase2;
  double trihgt2;

  cout << "Enter the information for the first triangle:" << endl;
  cout << "Base: ";
  cin >> tribase1;
  while(tribase1<=0)
    {
      cout << "Error! Please enter a number greater than zero: ";
      cin >> tribase1;
    }
 
  cout << "Height: ";
  cin >> trihgt1;
  while(trihgt1<=0)
    {
      cout << "Error! Please enter a number greater than zero: ";
      cin >> trihgt1;
    }

  cout << "Second Triangle: "<< endl;
  cout << "Base: ";
  cin >> tribase2;
  while(tribase2<=0)
    {
      cout << "Error! Please enter a number greater than zero: ";
      cin >> tribase2;
    }

  cout << "Height: ";
  cin >> trihgt2;
  while(trihgt2<=0)
    {
      cout << "Error! Please enter a number greater than zero: ";
      cin >> trihgt2;
    }

  double ta1 = (tribase1 / 2) * trihgt1;
  double ta2 = (tribase2 / 2) * trihgt2;

  if(ta1>ta2)
    {
      double biggerby = ta1-ta2;
      printf("Triangle 1 is bigger by %.2f units.\n",biggerby);
    }
  
  if(ta1<ta2)
    {
      double biggerby = ta2-ta1;
      printf("Triangle 2 is bigger by %.2f units.\n",biggerby);
    }

  if(ta1==ta2)
    {
      cout << "Triangle 1 and Triangle 2 are equal in size!" << endl;
    }

  return 0;

}
      
    
