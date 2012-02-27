// John Glynn
// U97051125

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {

	// declare
	int num1;
	int num2;
	int count = 0;

	// prompt and error check
	cout << "Enter two integers between 0 and 999999: ";
	cin >> num1 >> num2;
	while ((num1 > 999999) || (num2 > 999999) || (num1 < 0) || (num2 < 0)) {
		cout << "Error -- please enter two integers between 0 and 999999: ";
	    cin >> num1 >> num2;
	}

	// stores initial value of num1 as in1 and num2 as in2
	// this is because we will be modifying num1/num2 as we interate through our loops
	int in1 = num1;
	int in2 = num2;
	
	// loop for while there is still a number to loop through (number1 or number2)
	// this is effectively adding a 000 to the front of a number like 132 to make sure
	// the loop iterates until both numbers are equal to 0.
	while (num1>=1 || num2>=1){
		int val1 = num1%10;
		int val2 = num2%10;

		if (val1 != val2)
			count++;

		num1 = num1/10;
		num2 = num2/10;
	}

	cout << "The Hamming Distance between " << in1 << " and " << in2 << " is " << count << endl;

	return 0;
}
