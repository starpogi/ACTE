#include <iostream>
using namespace std;

int main ()
{
	//Initialize variables
	int choice;
	string from;
	string to;
	double convert;
	double input;
	double result;
	
	//Display options
	cout << "Pints to Liters (enter 0)" << endl;
	cout << "Pints to Cups (enter 1)" << endl;
	cout << "Cups to Pints (enter 2)" << endl;
	cout << "Cups to Liters (enter 3)" << endl;
	cout << "Liters to Pints (enter 4)" << endl;
	cout << "Liters to Cups (enter 5)" << endl;
	cout << "?:";
	
	//Take conversion input and check to make sure it is in the proper range
	cin >> choice;
	while(choice < 0 || choice > 5)
	{
		cout << "Please enter a number between 0 and 5:";
		cin >> choice;
	}
	
	//Determine conversion coefficient
	switch(choice)
	{
		case 0:
			from = "Pints";
			to = "Liters";
			convert = 0.473176;
			break;
		case 1:
			from = "Pints";
			to = "Cups";
			convert = 2;
			break;
		case 2:
			from = "Cups";
			to = "Pints";
			convert = 0.5;
			break;
		case 3:
			from = "Cups";
			to = "Liters";
			convert = 0.236588;
			break;
		case 4:
			from =  "Liters";
			to = "Pints";
			convert = 2.113376;
			break;
		case 5:
			from = "Liters";
			to = "Cups";
			convert = 4.22675;
			break;
	}
	
	//Take amount input
	cout << "Enter the amount in " << from << ":";
	cin >> input;
	
	//Perform conversion
	result = input * convert;
	
	cout << input << " " << from << " is " << result << " " << to << endl;
	
	
	
	
	
	return 0;
}