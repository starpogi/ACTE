//jtrinh_Lab_1
//Jeannie Trinh
//U86350918
//Lab 1, Q3
//Program: Hamming Distance

#include <iostream>

using namespace std;

int main()
{
	int i, num1, num2, counter, compareVal1, compareVal2, numString1, numString2, moddingNum;

	//Prompts user to enter two integers
	cout << "Enter two integers between 0 and 999999: ";
	cin >> num1;
	cin >> num2;

	//Error check if values entered are not within range
	while (num1 > 999999 || num1 < 0){
		cout << "The first value is not an integer. Please enter an integer from 0 to 999999: " << endl;
		cin >> num1;
	}
	while (num2 > 999999 || num2 < 0){
		cout << "The second value is not an integer. Please enter an integer from 0 to 999999: " << endl;
		cin >> num2;
	}

	//Save entered values for printing later, initialize values
	numString1 = num1;
	numString2 = num2;
	moddingNum = 10;
	counter = 0;
		
	for (i = 0; i < 6; i++){ //Loop through the 6 digits of each number
		compareVal1 = num1 % moddingNum;
		compareVal2 = num2 %moddingNum;
			if (compareVal1 != compareVal2){ //If both modded values are not the same, increment counter
				counter++;
			}
			num1 /= moddingNum;
			num2 /= moddingNum;
	}
	//Print calculated hamming distance
	cout << "Hamming distance between " << numString1 << " and " << numString2 << " is " << counter << "." << endl;	
return 0;
}