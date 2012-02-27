/* This program converts numbers among cups, pints, and liters. The program converts from
   any of these to the other.

1 liter = 2.11337642 pints
1 pint = 
1 pint = 2 cups */

#include <iostream>
using namespace std; 

int main()
{
	// Prompt the user for conversion type
	int intype;
	cout << "Pints to Liters (enter 0)\nPints to Cups (enter 1)\nCups to Pints (enter 2)\nCups to Liters (enter 3)\nLiters to Pints (enter 4)\nLiters to Cups (enter 5)\n?: ";
	cin >> intype; 
	// Error check for a valdi selection number
	while (intype < 0 || intype > 5) 
	{
		cout << "Choice does not exist. Number must be between 0 and 5.\n?: ";
		cin >> intype; 
	}
	int inpints, incups, inliters;
	switch (intype)
	{
	case 0: cout << "Enter the amount in pints: ";
			cin >> inpints; 
			// Convert from pints to liters 
			cout << inpints << " pints is " << inpints / 2.1134 << " liters.";
			break;
	case 1: cout << "Enter the amount in pints: ";
			cin >> inpints; 
			// Convert from pints to cups 
			cout << inpints << " pints is " << inpints * 2 << " cups.";
			break;
	case 2: cout << "Enter the amount in cups: ";
			cin >> incups; 
			// Convert from cups to pints
			cout << incups << " cups is " << incups / 2 << " pints.";
			break;
	case 3: cout << "Enter the amount in cups: ";
			cin >> incups;
			// Convert from cups to liters 
			cout << incups << " cups is " << incups / 4.2268 << " liters.";
			break;
	case 4: cout << "Enter the amount in liters: ";
			cin >> inliters; 
			// Convert from liters to pints
			cout << inliters << " liters is " << inliters * 2.1134 << " pints.";
			break;
	case 5: cout << "Enter the amount in liters: ";
			cin >> inliters; 
			// Convert from liters to cups 
			cout << inliters << " liters is " << inliters * 4.2268 << " cups.";
			break;
	}	
}



