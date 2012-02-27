//jtrinh_Lab_1
//Jeannie Trinh
//U86350918
//Lab 1, Q2
//Program: Compute conversions

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double initial, final;
	int operation;

	//Prompts user for type of conversion (two cout lines here for readability)
	cout << "Pints to Liters (enter 0)\nPints to Cups (enter 1)\nCups to Pints (enter 2)\n";
	cout << "Cups to Liters (enter 3)\nLiters to Pints (enter 4)\nLiters to Cups (enter 5)\n?: ";
	cin >> operation;

	//Error check if values entered are not within range
	while (operation > 5 || operation < 0){
		cout << "Invalid value. Please select desired conversion (number from 0 to 5): " ;
		cin >> operation;
	}

	//Calculate conversion and prints results
	switch (operation)
	{
	//Pints to Liters: 1 pint = 0.473176473 liters
	case 0: cout << "Enter the amount in Pints: ";
		cin >> initial;
		final = initial * 0.473176473;
		cout << initial << " Pints is " << final << " Liters." << endl;
		break;
	//Pints to Cups: 1 pint = 2 cups
	case 1: cout << "Enter the amount in Pints: ";
		cin >> initial;
		final = initial * 2;
		cout << initial << " Pints is " << final << " Cups." << endl;
		break;
	//Cups to Pints: 1 cup = .5 pints
	case 2: cout << "Enter the amount in Cups: ";
		cin >> initial;
		final = initial / 2;
		cout << initial << " Cups is " << final << " Pints." << endl;
		break;
	//Cups to Liters: 1 cup = 0.236588236 liters
	case 3: cout << "Enter the amount in Cups: ";
		cin >> initial;
		final = initial * 0.236588236;
		cout << initial << " Cups is " << final << " Liters." << endl;
		break;
	//Liters to Pints: 1 liters = 2.11337642 pints
	case 4: cout << "Enter the amount in Liters: ";
		cin >> initial;
		final = initial * 2.11337642;
		cout << initial << " Liters is " << final << " Pints." << endl;
		break;
	//Liters to Cups: 1 liters = 4.22675284 cups
	case 5: cout << "Enter the amount in Liters: ";
		cin >> initial;
		final = initial * 4.22675284;
		cout << initial << " Liters is " << final << " Cups." << endl;
		break;
	//Error
	default: cout << "Cannot be calculated.";
	}

	return 0;
}