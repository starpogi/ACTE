//Alex Handin EC 327 Lab 1 Question 1

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	//Declare variables for inputing the dimensions of the triangles
	int base1;
	int height1;
	int base2;
	int height2;
	
	//Enter the height and width of the first triangle and error check the input
	cout << "Enter the information for the first triangle:" << endl;
	
	do
    {cout << "Base: ";
		cin  >> base1;
		if (base1 <= 0)
			cout << "Error, please try again: " << endl;}
	while (base1 <= 0);
    
    do
    {cout << "Height: ";
		cin  >> height1;
		if (height1 <= 0)
			cout << "Error, please try again: " << endl;}
	while (height1 <= 0);
	
	//Enter the height and width of the second triangle and error check the input
	cout << "Second triangle:" << endl;
	
	do
    {cout << "Base: ";
		cin  >> base2;
		if (base2 <= 0)
			cout << "Error, please try again: " << endl;}
	while (base2 <= 0);
	
	do
    {cout << "Height: ";
		cin  >> height2;
		if (height2 <= 0)
			cout << "Error, please try again: " << endl;}
	while (height2 <= 0);
	
	//Declare variables for the results of calculations
	double area1;
	double area2;
	double differenceAreas;
	double twoDigitDifArea;
    
    
	//Calculate the area of each triange
	area1 = 0.5*base1*height1;
	area2 = 0.5*base2*height2;
	differenceAreas = abs(area1-area2);
	twoDigitDifArea = static_cast<int>(differenceAreas*100)/100.0;
    
    
	//Apply logic statements to determine which area is bigger
	if (area1 > area2)
	  cout << "Triangle 1 is bigger by " << differenceAreas << " units." << endl;
	else if (area1 == area2)
	  cout << "Triangle 1 and triangle 2 each have the same area of " << area1 << " units." << endl;
	else
	  cout << "Triangle 2 is bigger by " << differenceAreas << " units." << endl;
	
	return 0;
}
