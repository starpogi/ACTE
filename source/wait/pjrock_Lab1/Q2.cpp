/* Peter Rock U29252343 LAB1_Q2*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	cout << "Pints to Liters (Enter 0)" << endl;
	cout << "Pints to Cups (Enter 1)" << endl;
	cout << "Cups to Pints (Enter 2)" << endl;
	cout << "Cups to Liters (Enter 3)" << endl;
	cout << "Liters to Pints (Enter 4)" << endl;
	cout << "Liters to Cups (Enter 5)" << endl;

	cout << "Please choose a conversion to perform (Enter 0-5): " ;
	double converttype;
	cin >> converttype ;

	while ((int)converttype != converttype || converttype < 0 || converttype > 5)  // Makes sure input is between 0 and 5 and the input is an integer
	{
		cout << "Invalid option.  Please enter 0-5!: ";
		cin >> converttype ;
	}

	double convert;
	double newconvert;

	switch ((int)converttype) // Determines which conversion to perform.  Each case error check to make sure an amount greater than 0 is entered.
	{
	case 0:
		cout << "Enter the amount in Pints: " ;
		cin >> convert;
		while (convert <=0)
		{
			cout << "Please enter a number of Pints > 0: " ;
			cin >> convert;
		}
		newconvert = convert * 0.473176;
		cout << fixed << setprecision(2) << convert << " Pints is " << newconvert << " Liters." << endl;
		break;
	case 1:
		cout << "Enter the amount in Pints: " ;
		cin >> convert;
		while (convert <=0)
		{
			cout << "Please enter a number of Pints > 0: " ;
			cin >> convert;
		}
		newconvert = convert * 2;
		cout << fixed << setprecision(2) << convert << " Pints is " << newconvert << " Cups." << endl;
		break;
	case 2:
		cout << "Enter the amount in Cups: " ;
		cin >> convert;
		while (convert <=0)
		{
			cout << "Please enter a number of Cups > 0: " ;
			cin >> convert;
		}
		newconvert = convert * 0.5;
		cout << fixed << setprecision(2) << convert << " Cups is " << newconvert << " Pints." << endl;
		break;
	case 3:
		cout << "Enter the amount in Cups: " ;
		cin >> convert;
		while (convert <=0)
		{
			cout << "Please enter a number of Cups > 0: " ;
			cin >> convert;
		}
		newconvert = convert * 0.236588;
		cout << fixed << setprecision(2) << convert << " Cups is " << newconvert << " Liters." << endl;
		break;
	case 4:
		cout << "Enter the amount in Liters: " ;
		cin >> convert;
		while (convert <=0)
		{
			cout << "Please enter a number of Liters > 0: " ;
			cin >> convert;
		}
		newconvert = convert * 2.113376;
		cout << fixed << setprecision(2) << convert << " Liters is " << newconvert << " Pints." << endl;
		break;
	case 5:
		cout << "Enter the amount in Liters: " ;
		cin >> convert;
		while (convert <=0)
		{
			cout << "Please enter a number of Liters > 0: " ;
			cin >> convert;
		}
		newconvert = convert * 4.226752;
		cout << fixed << setprecision(2) << convert << " Liters is " << newconvert << " Cups." << endl;
		break;
	default:
		break;
	}
	return 0;
}