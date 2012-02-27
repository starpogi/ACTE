/* Peter Rock U29252343 LAB1_Q1*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Enter the information for the first triangle" << endl ;
	
	cout << "Base: " ;
	int base1;
	cin >> base1;

// Error checks to make sure that the user enters a base value that is greater than 0.
// Prompts user until a proper value is entered.
	while (base1 <= 0)
	{
		cout << "Please enter an integer greater than 0!" << endl;
		cout << "Base: ";
		cin >> base1;
	}
	
	cout << "Height: " ;
	int height1;
	cin >> height1;

// Error checks to make sure that the user enters a height value that is greater than 0.
// Prompts user until a proper value is entered.
	while (height1 <= 0)
	{
		cout << "Please enter an integer greater than 0!" << endl;
		cout << "Height: ";
		cin >> height1;
	}

	double area1 = 0.5 * base1 * height1 ;

	cout << "Second Triangle:" << endl ;

	cout << "Base: " ;
	int base2;
	cin >> base2;

// Error checks to make sure that the user enters a base value that is greater than 0.
// Prompts user until a proper value is entered.
	while (base2 <= 0)
	{
		cout << "Please enter an integer greater than 0!" << endl;
		cout << "Base: ";
		cin >> base2;
	}

	cout << "Height: " ;
	int height2;
	cin >> height2;

// Error checks to make sure that the user enters a height value that is greater than 0.
// Prompts user until a proper value is entered.
	while (height2 <= 0)
	{
		cout << "Please enter an integer greater than 0!" << endl;
		cout << "Height: ";
		cin >> height2;
	}

	double area2 = 0.5 * base2 * height2 ;

// Compares triangle size and outputs which triangle is bigger than the other

		if (area1 > area2)
		{
			cout << fixed << setprecision(1) << "Triangle 1 is bigger by " << (area1 - area2) << endl;
		}
		else if (area2 > area1)
		{
			cout << fixed << setprecision(1) << "Triange 2 is bigger by " << (area2 - area1) << endl;
		}
		else
			cout << "Triangle 1 and Triangle 2 have the same area." << endl ;


	return 0;
}