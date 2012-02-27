// John Glynn
// U97051125

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {

	// declare variables
	int input;
	double pints;
	double cups;
	double liters;

	// prompt user to determine operation to perform
	cout << "Pints to Liters (enter 0)" << endl;
	cout << "Pints to Cups (enter 1)" << endl;
	cout << "Cups to Pints (enter 2)" << endl;
	cout << "Cups to Liters (enter 3)" << endl;
	cout << "Liters to Pints (enter 4)" << endl;
	cout << "Liters to Cups (enter 5)" << endl;

	// input and error check
	cout << "?: ";
	cin >> input;
	if (input < 0 || input > 5)
		do {
			cout << "Please enter an integer 0 - 5!: ";
			cin >> input;
		} while (input < 0 || input > 5);

	// case 0
	if (input == 0)
	{
		cout << "Enter the amount in Pints: ";
		cin >> pints;

		liters = 0.47318 * pints;

		cout << pints << " Pints is " << liters << " Liters." << endl;
	}

	// case 1
	if (input == 1)
	{
		cout << "Enter the amount in Pints: ";
		cin >> pints;

		cups = 2.0 * pints;

		cout << pints << " Pints is " << cups << " Cups." << endl;
	}

	// case 2
	if (input == 2)
	{
		cout << "Enter the amount in Cups: ";
		cin >> cups;

		pints = cups / 2.0;

		cout << cups << " Cups is " << pints << " Pints." << endl;
	}

	// case 3
	if (input == 3)
	{
		cout << "Enter the amount in Cups: ";
		cin >> cups;

		liters = 0.23549 * cups;

		cout << cups << " Cups is " << liters << " Liters." << endl;
	}

	// case 4
	if (input == 4)
	{
		cout << "Enter the amount in Liters: ";
		cin >> liters;

		pints = 2.11338 * liters;

		cout << liters << " Liters is " << pints << " Pints." << endl;
	}

	// case 5
	if (input == 5)
	{
		cout << "Enter the amount in Liters: ";
		cin >> liters;

		cups = 4.2268 * liters;

		cout << liters << " Liters is " << cups << " Cups." << endl;
	}




	return 0;
}



