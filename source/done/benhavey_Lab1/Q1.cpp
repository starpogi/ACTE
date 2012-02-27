#include <iostream>
#include <string>
using namespace std;
//This program takes in four integer inputs, error checks them, then returns the area of two triangles.
//Note: Area = 1/2 Base * Height

int main () {
	double area1=0, area2=0, diff=0;
	int errorvar=0, trian=1, base, height;
	string triname;
	//This loops through the triangle prompt twice.
	while (trian != 3) {
		errorvar=0;
		//This loops through the main part of the code until the user inputs everything in the correct format.
		while (errorvar != 2) {
			if (trian == 1)
				triname="First Triangle";
			else
				triname="Second Triangle";
			//Prompts the user for the triangle.
			if (errorvar == 0) {
				cout << "Enter the information for the " << triname << ".\nBase: ";
				cin >> base;
				cout << "Height: ";
				cin >> height;
				errorvar=1;
			}
			else {
				cout << "Error! Incorrect Format. Please use a positive integer for the " << triname << ".\nBase: ";
				cin >> base;
				cout << "Height: ";
				cin >> height;
			}
			//This checks for error, making sure the input is a positive integer.
			if ((base == (int)base) && (base > 0) && (height == (int)height) && (height > 0)) {
				trian++;
				errorvar++;
			}
		}
		//This sets the areas
		if (trian == 2)
			area1=.50*base*height;
		else
			area2=.50*base*height;
	}
	//This part checks which triangle is bigger and displays the result.
	if (area1>area2) {
		diff=area1-area2;
		cout << "Triangle 1 is bigger by " << diff << " units.\n";
	}
	else if (area1<area2) {
		diff=area2-area1;
		cout << "Triangle 2 is bigger by " << diff << " units.\n";
	}
	else
		cout << "Both Triangles are the same size.\n";
}
