// #include "stdafx.h"
#include <iostream>
using namespace std;

int main ()
{
	int num1;
	int num2;
	cout << "Enter two integers between 0 and 999999: ";
	cin >> num1 >> num2;
	while (num1 < 0 || num2 < 0 || num1 > 999999 || num2 > 999999)
	{
		cout << "Error! \n" << "Enter two integers between 0 and 999999: ";
		cin >> num1 >> num2;
	}
	// error check to make sure user inputs are greater than 0 and less than 999999
	int count = 0;
	int newnum1;
	int newnum2;
	int x = num1;
	int y = num2;
	// x and y are just used to save the original values so they can be addressed in the final out statement
	while (num1 >= 1 || num2 >= 1)
	{
		newnum1 = num1%10;
		newnum2 = num2%10;
		// mod the numbers to loop through each decimal place
		if (newnum1 != newnum2)
				count = count+1;
		// if they aren't equal, add 1 to the counter
		num1 = num1/10;
		num2 = num2/10;
		// divide by 10 to get to the next decimal place
	}
	cout << "Hamming distance between " << x << " and " << y << " is " << count << "."<< endl;
	return 0;
}