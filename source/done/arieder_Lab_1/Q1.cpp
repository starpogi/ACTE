// #include "StdAfx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double base1;
	double height1;
	double base2;
	double height2;
	// Initiate all the variables
	cout << "Enter the information for the first triangle: \n" << "Base: ";
	cin >> base1;
	cout << "Height: ";
	cin >> height1;
	cout << "Second Triangle: \n" << "Base: ";
	cin >> base2;
	cout << "Height: ";
	cin >> height2;
	// Ask for user inputs
	double area1 = (base1*height1)/2;
	double area2 = (base2*height2)/2;
	// Calculate areas of both triangles
	if (area1 > area2)
	{
		int num1 = 1;
		double diff = area1-area2;
		cout << "Triangle " << num1 << " is bigger by " << showpoint << setprecision(2) << diff << " units." << endl;
	}
	else if (area2 > area1)
		{
			int num1 = 2;
			double diff = area2-area1;
			cout << "Triangle " << num1 << " is bigger by " << showpoint << setprecision(2) << diff << " units." << endl;
	}
	else
		cout << "Triangles 1 and 2 have the same area."<< endl;
	// Determine which triangle is bigger and by how many units
	return 0;
}