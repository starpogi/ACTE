#include <iostream>
using namespace std;

int main()
{
	//present user with options
	int option;
	cout << "Pints to Liters (enter 0)"<< endl << "Pints to Cups (enter 1)"
	<< endl << "Cups to Pints (enter 2)"<< endl << "Cups to Liters (enter 3)"
	<< endl << "Liters to Pints (enter 4)" << endl << "Liters to Cups (enter 5)"
	<< endl;
	cin>> option;
	
	//checks whether input is valid
	if (option<0 || option>5)
	{
		cout << "Please enter one of the valid inputs listed above." <<endl;
		cin>> option;
	}
	
	//matches number stored in option with switch cases to do appropriate function
	double pints0, pints1, cups2, cups3, liters4, liters5;
	double liters0, cups1, pints2, liters3, pints4, cups5;
	switch (option) 
	{
		case 0:
			cout << "Enter the amount in pints: "<< endl;
			cin>> pints0;
			liters0 = pints0*0.47;
			cout << pints0 << " Pints is " << liters0 << " Liters"<< endl;
			break;
		
		case 1:
			cout << "Enter the amount in pints: "<< endl;
			cin>> pints1;
			cups1 = pints1*2.0;
			cout << pints1 << " Pints is "<< cups1 << " Cups"<< endl;
			break;
			
		case 2:
			cout << "Enter the amount in cups: "<< endl;
			cin>> cups2;
			pints2 = cups2*0.5;
			cout << cups2 << " Cups is "<< pints2 << " Pints"<< endl;
			break;
		
		case 3:
			cout << "Enter the amount in cups: "<< endl;
			cin>> cups3;
			liters3 = cups3*0.24;
			cout << cups3 << " Cups is "<< liters3 << " Liters"<< endl;
			break;
			
		case 4:
			cout << "Enter the amount in liters: "<< endl;
			cin>> liters4;
			pints4 = liters4*2.11;
			cout << liters4 << " Liters is "<< pints4 <<" Pints"<< endl;
			break;
			
		case 5:
			cout << "Enter the amount in liters: "<<endl;
			cin>> liters5;
			cups5 = liters5*4.27;
			cout << liters5 << " Liters is "<< cups5 <<" Cups"<< endl;
			break;
		
		default:
			break;
	}
	return 0;
}
