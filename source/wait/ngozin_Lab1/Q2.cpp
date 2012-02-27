// Ngozi Nwogwugwu
#include <iostream>
using namespace std;
int main() {


	//declare input variables
	int conversion_type;
	double amount;

	//declare output variable
	double result;
	
	//prompt for conversion type
	cout << "Pints to liters_____(enter 0):" << endl;
	cout << "Pints to Cups_______(enter 1):" << endl;
	cout << "Cups to Pints_______(enter 2):" << endl;
	cout << "Cups to Liters______(enter 3):" << endl;
	cout << "Liters to Pints_____(enter 4):" << endl;
	cout << "Liters to Cups______(enter 5):" << endl;
	cout << "?:" <<	endl;
	
	cin >> conversion_type;

	//check to see if the conversion type is valid
	if (conversion_type < 0)
		cout << "invalid conversion type" << endl;
	else if (conversion_type > 6)
		cout << "invalid conversion type" << endl;

	else { // if the conversion type is valid, the program can continue
	
	// prompt the user to enter the amount to convert.
	// prompt message depends on conversion type.
		switch (conversion_type)
	{
	  case 0: cout << "Enter amount to convert in pints: " << endl;
			break;
	  case 1: cout << "Enter amount to convert in pints: " << endl;
			break;
	  case 2: cout << "Enter amount to convert in cups: " << endl;
			break;
	  case 3: cout << "Enter amount to convert in cups: " << endl;
			break;
	  case 4: cout << "Enter amount to convert in liters: " << endl;
			break;
	  case 5: cout << "Enter amount to convert in liters: " << endl;
			break;
	}
		  cin >> amount;


	//make sure the user enters a valid amount
	if (amount < 0)
		cout << "invalid amount" << endl;
	else if (conversion_type == 0) {
		result = 0.47*amount;
		cout << amount << " pints is " << result << " liters."<<endl;}	

	else if (conversion_type == 1) {
		result = 2*amount;
		cout << amount << " pints is " << result << " cups."<<endl;}

	else if (conversion_type == 2) {
		result = 0.5*amount;
		cout << amount << " cups is " << result << " pints."<<endl;}

	else if (conversion_type == 3) {
		result = 0.23*amount;
		cout << amount << " cups is " << result << " liters."<<endl;}

	else if (conversion_type == 4) {
		result = 2.11*amount;
		cout << amount << " liters is " << result << " pints."<<endl;}

	else if (conversion_type == 5) {
		result = 4.23*amount;
		cout << amount << " liters is " << result << " cups."<<endl;}
	
	}
return 0;
}
