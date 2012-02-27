/*
EC327 - Lab 1 - Question 2: Prompts the users to choose a conversion choice from a menu.
*/

#include <iostream>
using namespace std;


int main()
{
	int quit = 0, sel;
	double input, output;

	while (quit == 0)
	{
		cout << "Pints to Liters (enter 0)" << endl;
		cout << "Pints to Cups (enter 1)" << endl;
		cout << "Cups to Pints (enter 2)" << endl;
		cout << "Cups to Liters (enter 3)" << endl;
		cout << "Liters to Pints (enter 4)" << endl;
		cout << "Liters to Cups (enter 5)" << endl;
		cout << "Quit the program (enter 6)" << endl << endl;
		cout << "?: ";
		cin >> sel;

		while (sel < 0 || sel > 6)
		{
			cout << endl << "ERROR: input must be between 0 and 6." << endl;
			cout << "Pints to Liters (enter 0)" << endl;
			cout << "Pints to Cups (enter 1)" << endl;
			cout << "Cups to Pints (enter 2)" << endl;
			cout << "Cups to Liters (enter 3)" << endl;
			cout << "Liters to Pints (enter 4)" << endl;
			cout << "Liters to Cups (enter 5)" << endl;
			cout << "Quit the program (enter 6)" << endl << endl;
			cout << "?: ";
			cin >> sel;
		}

		switch (sel)
		{
		case 0: // Pints to Liters
			cout << "Enter the amount in pints: ";
			cin >> input;
			output = input * 0.473176473;
			cout << input << " pints is " << output << " liters." << endl << endl;
			break;

		case 1: // Pints to Cups
			cout << "Enter the amount in pints: ";
			cin >> input;
			output = input * 2;
			cout << input << " pints is " << output << " cups." << endl << endl;
			break;

		case 2: // Cups to Pints
			cout << "Enter the amount in cups: ";
			cin >> input;
			output = input * 0.5;
			cout << input << " cups is " << output << " pints." << endl << endl;
			break;

		case 3: // Cups to Liters
			cout << "Enter the amount in cups: ";
			cin >> input;
			output = input * 0.236588236;
			cout << input << " cups is " << output << " liters." << endl << endl;
			break;

		case 4: // Liters to Pints
			cout << "Enter the amount in liters: ";
			cin >> input;
			output = input * 2.11337642;
			cout << input << " liters is " << output << " pints." << endl << endl;
			break;

		case 5: // Liters to Cups
			cout << "Enter the amount in liters: ";
			cin >> input;
			output = input * 4.22675284;
			cout << input << " liters is " << output << " cups." << endl << endl;
			break;

		case 6: // Quit
			quit = 1;
			break;
		}
	}

	return 0;
}

