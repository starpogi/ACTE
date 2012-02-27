/*
This program converts numbers among Cups, Pints and Liters. The program will start by asking the user to select the conversion type.
It will return an erro message if the incorrect type is entered
*/
#include <iostream>
using namespace std;

char wc[] = "What would you like to convert? ";
char op1[] = "Pints to Liters (enter 0) \n";
char op2[] = "Pints to Cups (enter 1) \n";
char op3[] = "Cups to Pints (enter 2) \n";
char op4[] = "Cups to Liters (enter 3) \n";
char op5[] = "Liters to Pints (enter 4) \n";
char op6[] = "Liters to Cups (enter 5) \n";

char prompt[] = "Enter the amount in";

char unit1[] = " Pints ";
char unit2[] = " Cups ";
char unit3[] = " Liters ";

char err[] = "Error: You entered an invalid choice.\nRerun program and enter a valid choice \n";

short choice;
float amount, result;

int main()
{
	//Prompting then error checking ONCE for valid choice
	cout << op1 << op2 << op3 << op4 << op5 << op6 << wc;
	cin >> choice;
	if ((choice > 5) || (choice < 0))
	{
		cout << err;
	}
	else
	{
		cout.precision(4);
		switch (choice)
		{
			//1 US pint = 0.473176473 liters
			case 0:	cout << prompt << unit1;
					cin >> amount;
					result = (0.473176473 * amount);
					cout << fixed << amount << unit1 << "is " << result << unit3 << endl;
					break;
			//1 US pint = 2 US cups 
			case 1:	cout << prompt << unit1;
					cin >> amount;
					result = (2.0 * amount);
					cout << fixed << amount << unit1 << "is " << result << unit2 << endl;
					break;
			//1 US cup = 0.5 US pints
			case 2:	cout << prompt << unit2;
					cin >> amount;
					result = (0.5 * amount);
					cout << fixed << amount << unit2 << "is " << result << unit1 << endl;
					break;
			//1 US cup = 0.236588236 liters
			case 3:	cout << prompt << unit2;
					cin >> amount;
					result = (0.236588236 * amount);
					cout << fixed << amount << unit2 << "is " << result << unit3 << endl;
					break;
			//1 liters = 2.11337642 US pints
			case 4:	cout << prompt << unit3;
					cin >> amount;
					result = (2.11337642 * amount);
					cout << fixed << amount << unit3 << "is " << result << unit1 << endl;
					break;
			//1 liters = 4.22675284 US cups
			case 5:	cout << prompt << unit3;
					cin >> amount;
					result = (4.22675284 * amount);
					cout << fixed << amount << unit3 << "is " << result << unit2 << endl;
					break;			
		}
	
	return 0;
	}
}
