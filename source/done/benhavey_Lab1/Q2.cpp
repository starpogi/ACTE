#include <iostream>
#include <string>
using namespace std;
//This program converts between cups, pints, and liters.

int main () {
	double unitip, unitop, choice;
	int errorvar=0;
	string string1, string2;
	//This loop makes sure that the user input is error-free, the output choice determines the operation after the loop.
	while (errorvar != 2) {
		if (errorvar == 1)
			cout << "Error! Please select an integer between 0 and 5.\n";
		cout << "Pints to Liters (enter 0)\nPints to Cups (enter 1)\nCups to Pints (enter 2)\nCups to Liters (enter 3)\n";
		cout << "Liters to Pints (enter 4)\nLiters to Cups (enter 5)\n?: ";
		cin >> choice;
		//Error checks to make sure that the correct type of input was selected, if not runs again with error message
		if ((choice == (int)choice) && (choice >= 0) && (choice <=5))
			errorvar=2;
		else
			errorvar=1;
	}
	//This sets the strings depending on the choice:
	switch ((int)choice) {
		case 0:
			string1="Pints";
			string2="Liters";
			break;
		case 1:
			string1="Pints";
			string2="Cups";
			break;
		case 2:
			string1="Cups";
			string2="Pints";
			break;
		case 3:
			string1="Cups";
			string2="Liters";
			break;
		case 4:
			string1="Liters";
			string2="Pints";
			break;
		case 5:
			string1="Liters";
			string2="Cups";
			break;
	}
	errorvar=0;
	//Asks and error checks for the unit amount
	while (errorvar != 2) {
		if (errorvar == 1)
			cout << "Error! Please give a positive number.\n";
		cout << "Enter the amount in " << string1 << ": ";
		cin >> unitip;
		if (unitip >= 0)
			errorvar=2;
		else
			errorvar=1;
	}
	//Converts units based on the users choice
	switch ((int)choice) {
		case 0:
			unitop=.473176473*unitip;
			break;
		case 1:
			unitop=2*unitip;
			break;
		case 2:
			unitop=.5*unitip;
			break;
		case 3:
			unitop=.236588236*unitip;
			break;
		case 4:
			unitop=2.11337642*unitip;
			break;
		case 5:
			unitop=4.22675284*unitip;
			break;
	}
	//These six lines give 2 decimal places to the unitip and unitop variables for display purposes.
	unitip=unitip*100+.5; //the +.5 allows the number to be properly rounded when cast to the integer
	unitop=unitop*100+.5;
	unitip=(int)unitip;
	unitop=(int)unitop;
	unitip=unitip/100;
	unitop=unitop/100;
	cout << unitip << " " << string1 << " is " << unitop << " " << string2 << ".\n";
}
