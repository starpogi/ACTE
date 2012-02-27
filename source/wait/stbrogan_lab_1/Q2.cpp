// Problem 2

#include <iostream>
using namespace std;

int main () {
	int conv,end;//The variable "conv" will be assigned a number which will represent a conversion.
	float pint,cup,liter;
do{	
	cout << " Please select a conversion type. Press (0) for Pints to Liters. Press (1) for Pints to Cups. Press (2) for 		Cups to Pints. Press (3) for Cups to Liters. Press (4) for Liters to Pints. Press (5) for Liters to Cups." << endl;
	cin >> conv;

	if (conv > 5 || conv < 0){
		cout << " Error. Please select a number between 0 and 5. "<<endl;
		cout << " Desired conversion: ";
		cin >> conv;
		}
		
		 else if (conv == 0){
			cout << " Please enter number of pints: ";
			cin >> pint;
			float P_to_L = (pint)*(0.473);// Converts Pints to Liters.
			cout << " There are " << P_to_L << " liters in " << pint << " pints. " << endl;
		}
	 	 if (conv == 1){
			cout << " Please enter number of pints: ";
			cin >> pint;
			float P_to_C = (pint)*(2);// Converts Pints to Cups.
			cout << " There are " << P_to_C << " cups in " << pint << " pints. " << endl;
		}
	 	 if (conv == 2){
			cout << " Please enter number of cups: ";
			cin >> cup;
			float C_to_P = (cup)/(2);//Converts Cups to Pints.
			cout << " There are " << C_to_P << " pints in " << cup << " cups. " << endl;
		}
	 	 if (conv == 3){
			cout << " Please enter number of cups: ";
			cin >> cup;
			float C_to_L = (cup)*(0.236);//Converts Cups to Liters.
			cout << " There are " << C_to_L << " liters in " << cup << " cups. " << endl;
		}
		 if (conv == 4){
			cout << " Please enter number of liters: ";
			cin >> liter;
			float L_to_P = (liter)*(2.113);//Converts Liters to Pints.
			cout << " There are " << L_to_P << " pints in " << liter << " liters. " << endl;
		}	
		 if (conv == 5){
			cout << " Please enter number of liters: ";
			cin >> liter;
			float L_to_C = (liter)*(4.226);//Converts Liters to Cups.
			cout << " There are " << L_to_C << " cups in " << liter << " liters. " << endl;
		}
	cout << "If you would like to perform another conversion, press 0, if not press 1: ";
	cin >> end;
	}while (end == 0);
	return 0;
}
