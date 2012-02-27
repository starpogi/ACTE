#include <iostream>
using namespace std;

int main ()
{
	// Prints out conversion choices and allows user to choose a conversion method.
	int select;
	double in;

	cout << "Pints to Liters (enter 0)" << endl;
	cout << "Pints to Cups (enter 1)" << endl;
	cout << "Cups to Pints (enter 2)" << endl;
	cout << "Cups to Liters (enter 3)" << endl;
	cout << "Liters to Pints (enter 4)" << endl;
	cout << "Liters to Cups (enter 5)" << endl;
	cout << "?: ";

	cin >> select;

	// Error checks for choice that is not between 0 and 6.
	while ((select < 0) || (select > 6))
	{
		cout << "Please enter an integer between 0 and 5." << endl;
		cout << "?: ";
		cin >> select;
	}

	// Performs operation of user inputted value based on conversion choice
	// and prints out values.
	switch (select) 
	{
		case 0:
			cout << "Enter the amount in Pints: ";
			cin >> in;
			cout << in << " Pints is " << 0.4731 * in << " Liters." << endl;
			break;

		case 1:
			cout << "Enter the amount in Pints: ";
			cin >> in;
			cout << in << " Pints is " << 2 * in << " Cups." << endl;
			break;

		case 2:
			cout << "Enter the amount in Cups: ";
			cin >> in;
			cout << in << " Cups is " << 0.5 * in << " Pints." << endl;
			break;

		case 3:
			cout << "Enter the amount in Cups: ";
			cin >> in;
			cout << in << " Cups is " << 0.2366 * in << " Liters." << endl;
			break;

		case 4:
			cout << "Enter the amount in Liters: ";
			cin >> in;
			cout << in << " Liters is " << 2.1112 * in << " Pints." << endl;
			break;

		case 5:
			cout << "Enter the amount in Liters: ";
			cin >> in;
			cout << in << " Liters is " << 4.22244 * in << " Cups." << endl;
			break;
	}

	//For visual studio
	//system("pause");

	return 0;
}