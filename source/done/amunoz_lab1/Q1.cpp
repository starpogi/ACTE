/* This program reads in the information on two triangles, 
   computes their area, and prints out which is bigger and by 
   how much on the screen. */
   
#include <iostream>
using namespace std;
int main()
{ 
  // Declare the variables for the base and height of each triangle 
  double base1, height1, base2, height2;
  // Prompt the user for the dimensions
  cout << "Enter the dimensions for the first triangle:\nBase: "; 
  cin >> base1;
  // Error check to make sure the user has entered a positive value
  while (base1 <= 0)
  {
	cout << "Error! Please enter a positive value!\nBase: ";
	cin >> base1;
  }
  cout << "Height: "; 
  cin >> height1;
  while (height1 <= 0)
  {
	cout << "Error! Please enter a positive value!\nHeight: ";
	cin >> height1;
  }  
  // For the following lines involving the prompt for second 
  // values, implement some sort of nested loop with the first 
  // set of values if time permits 
  cout << "Second triangle: \nBase: ";
  cin >> base2;
  while (base2 <= 0)
  {
	cout << "Error! Please enter a positive value!\nBase: ";
	cin >> base2;
  }
  cout << "Height: "; 
  cin >> height2;
  while (height2 <= 0)
  {
	cout << "Error! Please enter a positive value!\nHeight: ";
	cin >> height2;
  }  
 
  // Now that all the dimensions have been gathered, calculate
  // and compare the values 

  double area1, area2;
  // COULD create a function to compute area... but I won't
  area1 = (0.5) * base1 * height1;
  area2 = (0.5) * base2 * height2;  

if (area1 <= area2)
	{
	cout << "The second triangle is larger in area by " << abs (area2 - area1) << " units.";
	}	
else 			
	cout << "The first triangle is larger in area by " << abs (area1 - area2) << " units.";
	
}