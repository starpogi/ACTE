#include <iostream>
using namespace std;
//Program either offsets a letter, changes case, or does nothing.

int main () {
	char inp, out;
	int errorvar, offset;
	errorvar=0;
	//Error checks for a valid input.
	while (errorvar != 2) {
		if (errorvar==1)
			cout << "Error! Please give a number or letter character.\n";
		cout << "Enter character: ";
		cin >> inp;
		//Tests to see if char is a letter or a number
		if (((inp>=48) && (inp<=57)) || ((inp>=65) && (inp<=90)) || ((inp>=97) && (inp<=122)))
			errorvar=2;
		else
			errorvar=1;
	}
	errorvar=0;
	//Checks to see that offset given is a positive integer
	while (errorvar != 2) {
		if (errorvar == 1)
			cout << "Error! Please give a positive integer for the offset. \n";
		cout << "Offset (enter 0 to convert case): ";
		cin >> offset;
		if (offset>=0)
			errorvar=2;
		else
			errorvar=1;
	}
	errorvar=0;
	//Checks if there is a valid non-zero offset.
	if (offset!=0) {
		while (errorvar != 2) {
			if (errorvar == 1) {
				cout << "This offset is impossible. Please give a valid offset. \n";
				cout << "Offset (enter 0 to convert case): ";
				cin >> offset;
			}
			//Checks validity for numbers
			if ((inp>=48) && (inp<=57)) {
				if ((int)(inp+offset)<=57)
					errorvar=2;
				else
					errorvar=1;
			}
			//Checks validity of uppercase letters
			else if ((inp>=65) && (inp<=90)) {
				if ((int)(inp+offset)<=90)
					errorvar=2;
				else
					errorvar=1;
			}
			//Checks valitidy for lowercase letters
			else {
				if ((int)(inp+offset)<=122)
					errorvar=2;
				else
					errorvar=1;
			}
		}
	}
	//Now that all errors have been checked and validity has been passed, the function actually does the offset
	//This checks for numbers being offseted
	if ((inp>=48) && (inp<=57))
		out=inp+offset;
	//This checks for uppercase letters being offseted
	if ((inp>=65) && (inp<=90)) {
		if (offset==0)
			out=inp+32;
		else
			out=inp+offset;
	}
	//This checks for lowercase letters being offseted
	if ((inp>=97) && (inp<=122)) {
		if (offset==0)
			out=inp-32;
		else
			out=inp+offset;
	}
	cout << "New Character: " << out << endl;
}
