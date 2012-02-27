// John Glynn
// U97051125


//#include <StdAfx.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	// TRIANGLE 1
	// declare
	double base1;
	double height1;
	double area1;

	// input variables and error check
	cout << "Enter the information for the first triangle:" << endl;

	cout << "Base: ";
	cin >> base1;
	if (base1 <= 0)
		do 
		{
			cout << "Error! Please enter a positive integer: ";
			cin >> base1;
		} while (base1 <= 0);
	cout << "Height: ";
	cin >> height1;
	if (height1 <= 0)
		do 
		{
			cout << "Error! Please enter a positive integer: ";
			cin >> height1;
		} while (height1 <= 0);

	// TRIANGLE 2
	// declare
	double base2;
	double height2;
	double area2;

	// input variables and error check
	cout << "Second Triangle:" << endl;

	cout << "Base: ";
	cin >> base2;
	if (base2 <= 0)
		do 
		{
			cout << "Error! Please enter a positive integer: ";
			cin >> base2;
		} while (base2 <= 0);

	cout << "Height: ";
	cin >> height2;
	if (height2 <= 0)
		do 
		{
			cout << "Error! Please enter a positive integer: ";
			cin >> height2;
		} while (height2 <= 0);

	// calculate areas
	area1 = 0.5 * base1 * height1;
	area2 = 0.5 * base2 * height2;

	// get the difference
	//double diffa = area1 - area2; 
	//double diffb = area2 - area1;

	// compare and display the larger triangle and whichever difference was positive
	if (area1 > area2)
		cout << "Triangle 1 is bigger by " << showpoint << setprecision (2) << area1 - area2 << " units." << endl;
	else if (area2 > area1)
		cout << "Triangle 2 is bigger by " << showpoint << setprecision (2) << area2 - area1  << " units." << endl;
	else
		cout << "Triangle 1 and Triangle 2 are the same size!" << endl;

	return 0;

}

