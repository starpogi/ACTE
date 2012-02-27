/* Peter Rock U29252343 LAB1_Q3*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Enter two integers between 0 and 999,999: " ;

	double number1;
	double number2;

	cin >> number1 >> number2 ;

	while (int(number1) != number1 || int(number2) != number2 || number1 > 999999 || number1 < 0 || number2 > 999999 || number2 < 0)
		// Error checks to make sure proper number is entered
	{
		cout << "Error! Enter two integers between 0 and 999,999: " ;
		cin >> number1 >> number2 ;
	}


	int tempnum1 = (int)number1 ; //Stores number1 and number2 in different variables
	int tempnum2 = (int)number2 ;
	int compare1 ;
	int compare2 ;
	
	int ham = 0;

	for (int i = 100000 ; i >= 1 ; (i=i/10) ) // Divides each number by 100000,10000,1000,etc. and compares each digit.
	{
	compare1 = tempnum1 / i ;
	tempnum1 = tempnum1 % i ;

	compare2 = tempnum2 / i ;
	tempnum2 = tempnum2 % i ;

		if (compare1 == compare2) //For each iteration adds 1 if digits are different
			ham = ham ;
		else
			ham++ ;
	}
	cout << "Hamming distance between " << number1 << " and " << number2 << " is " << ham << "." << endl ;

	return 0 ;
}