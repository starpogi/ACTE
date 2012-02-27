#include <iostream>

using namespace std;

int main()
{
// Enter the information for each of the tirangles and check to see that each of the numbers entered are positive

 cout << "Enter the Information for the first triangle:" << endl << "Base: ";
 double base1;
 cin >> base1;
 if(base1 < 0)
 cout << "Error: Positive numberical values only";

 cout << "Height: ";
 double height1;
 cin >> height1;
 if(height1 < 0)
 cout << "Error: Positive numberical values only";
 
 cout << "Second Triangle:" << endl << "Base: ";
 double base2;
 cin >> base2;
  if(base2 < 0)
 cout << "Error: Positive numberical values only";
 
 cout << "Height: ";
 double height2;
 cin >> height2;
  if(height2 < 0)
 cout << "Error: Positive numberical values only";
	
 double area1, area2;
 area1 = .5*base1*height1;
 area2 = .5*base2*height2;

//Check to see which area is larger, then compute the difference and display the result

if(area1 > area2)
	{
	double difference1;
	difference1 = area1 - area2;
	cout << "Triangle 1 is bigger by " << difference1 << " " << "units.";
	}
else if(area2 > area1)
	{
	double difference2;
	difference2 = area2 - area1;
	cout << "Triangle 2 is bigger by " << difference2 << " " << "units.";
	}
else
	cout << "Both triangles have equal area";
	
return 0;
}