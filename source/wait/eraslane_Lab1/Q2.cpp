#include <iostream>
using namespace std;

int main()
{
	
	int choice;
	double amn;
	double amn1;
	cout << "Pints to Liters (enter 0)\n" << "Pints to Cups (enter 1)\n" 
	<< "Cups to Pints (enter 2)\n" << "Cups to Liters (enter 3)\n" 
	<< "Liters to Pints (enter 4)\n" << "Liters to Cups (enter 5)\n" << "?: ";
	cin >> choice;
	
	while (choice < 0 & choice > 5)
	{
		cout << "Please enter a number between 0 and 5! \n" << "?: ";
		cin >> choice; 
	}
	
	switch (choice) {
		case 0:
			cout << "Enter the amount in Pints: ";
			cin >> amn;
			amn1= amn*0.473176473;
			cout << amn << " Pints is " << amn1 << " Liters.";
			break;
		case 1:
			cout << "Enter the amount in Pints: ";
			cin >> amn;
			amn1= amn*2;
			cout << amn << " Pints is " << amn1 << " Cups.";
			break;
		case 2:
			cout << "Enter the amount in Cups: ";
			cin >> amn;
			amn1= amn*0.5;
			cout << amn << " Cups is " << amn1 << " Pints.";
			break;
		case 3:
			cout << "Enter the amount in Cups: ";
			cin >> amn;
			amn1= amn*0.236588236;
			cout << amn << " Cups is " << amn1 << " Liters.";
			break;
		case 4:
			cout << "Enter the amount in Liters: ";
			cin >> amn;
			amn1= amn*2.11337642;
			cout << amn << " Liters is " << amn1 << " Pints.";
			break;
		case 5:
			cout << "Enter the amount in Liters: ";
			cin >> amn;
			amn1= amn*4.22675284;
			cout << amn << " Liters is " << amn1 << " Cups.";
			break;
	}
	return 0;
}
