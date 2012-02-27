#include <iostream>

using namespace std;

int main()
{

// Asks the user what they wish to convert and instructs them on how to choose.
cout << "What would you like to convert?" << endl
<< "Pints to Liters (enter 0)" << endl << "Pints to Cups (enter 1)" << endl
<< "Cups to Pints (enter 2)" << endl << "Cups to Liters (enter 3)" << endl
<< "Liters to Pints (enter 4)" << endl << "Liters to Cups (enter 5)" << endl << "?: ";

int number;
cin >> number;

// Error checks to make sure the user's choice in the range of 0 to 5.
if(number < 0 || number > 5)
	cout << "Error: Only positive integers from 0 to 5 are allowed";

// For each case the number entered is error checked to make sure it is positive
// Then the conversion is done and displayed.
switch(number)
{
	case 0:
	cout << "Enter the amount in Pints: ";
	double pints1;
	cin >> pints1;
	 if(pints1 < 0)
		cout << "Error: Only positive numbers are allowed";
	 else {
		double p2li;
		p2li = pints1*0.47311;
		cout << pints1 << " Pints is " << p2li << " Liters.";
	}
	break;
	
	case 1:
	cout << "Enter the amount in Pints: ";
	double pints2;
	cin >> pints2;
	 if(pints2 < 0)
		cout << "Error: Only positive numbers are allowed";
	 else {
		double p2cu;
		p2cu = 2*pints2;
		cout << pints2 << " Pints is " << p2cu << " Cups.";
	}
	break;
	
	case 2:
	cout << "Enter the amount in Cups: ";
	double cups1;
	cin >> cups1;
	 if(cups1 < 0)
		cout << "Error: Only positive numbers are allowed";
	 else {
		double c2pi;
		c2pi = cups1/2;
		cout << cups1 << " Cups is " << c2pi << " Pints.";
	}
	break;
	
	case 3:
	cout << "Enter the amount in Cups: ";
	double cups2;
	cin >> cups2;
	 if(cups2 < 0)
		cout << "Error: Only positive numbers are allowed";
	 else {
		double c2li;
		c2li = cups2*0.236588;
		cout << cups2 << " Cups is " << c2li << " Liters.";
	}
	break;
	
	case 4:
	cout << "Enter the amount in Liters: ";
	double liters1;
	cin >> liters1;
	 if(liters1 < 0)
		cout << "Error: Only positive numbers are allowed";
	 else {
		double li2pi;
		li2pi = liters1*2.11338;
		cout << liters1 << " Liters is " << li2pi << " Pints.";
	}
	break;

	case 5:
	cout << "Enter the amount in Liters: ";
	double liters2;
	cin >> liters2;
	 if(liters2 < 0)
		cout << "Error: Only positive numbers are allowed";
	 else {
		double li2cu;
		li2cu = liters2*4.22675;
		cout << liters2 << " Liters is " << li2cu << " Cups.";
	}
	break;
	}
	
	return 0;
	}
	