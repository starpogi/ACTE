// #include "stdafx.h"
#include <iostream>
using namespace std;

int main ()
{
	double liters;
	double pints;
	double cups;
	int choice;
	cout << "Pints to Liters (enter 0) \n" << "Pints to Cups (enter 1) \n" << "Cups to Pints (enter 2) \n" << "Cups to Liters (enter 3) \n"
		<< "Liters to Pints (enter 4) \n" << "Liters to Cups (enter 5) \n";
	cout << "?: ";
	cin >> choice;
	while (choice < 0 || choice > 5)
	{
		cout << "Error!\n" << "Pints to Liters (enter 0) \n" << "Pints to Cups (enter 1) \n" << "Cups to Pints (enter 2) \n" << "Cups to Liters (enter 3) \n"
		<< "Liters to Pints (enter 4) \n" << "Liters to Cups (enter 5) \n";
	cout << "?: ";
	cin >> choice;
	}
	// make sure the user inputs a choice that can be read
	switch (choice)
	{
	case 0: 
		{
			cout << "Enter the amount of pints: ";
				cin >> pints;
				liters = .473176473*pints;
				cout << pints << " Pints is " << liters << " liters."<< endl;
				break;
		}
	case 1:
		{
			cout << "Enter the amount of pints: ";
				cin >> pints;
				cups = 2*pints;
				cout << pints << " Pints is " << cups << " cups."<< endl;
				break;
		}
	case 2:
		{
			cout << "Enter the amount of cups: ";
				cin >> cups;
				pints = cups/2;
				cout << cups << " Cups is " << pints << " pints." << endl;
				break;
		}
	case 3:
		{
			cout << "Enter the amount of cups: ";
				cin >> cups;
				liters = .236588236*cups;
				cout << cups << " Cups is " << liters << " liters." << endl;
				break;
		}
	case 4:
		{
			cout << "Enter the amount of liters: ";
				cin >> liters;
				pints = 2.11337642*liters;
				cout << liters << " Liters is " << pints << " pints." << endl;
				break;
		}
	case 5:
		{
			cout << "Enter the amount of liters: ";
				cin >> liters;
				cups = 4.22675284*liters;
				cout << liters << " Liters is " << cups << " cups." << endl;
				break;
		}
		// a simple switch statement determines what to do if one of the inputs is called
	}
	return 0;
}