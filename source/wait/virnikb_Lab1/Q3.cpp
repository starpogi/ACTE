#include <iostream>
using namespace std;

int main()
{
	//Initialize variables, promt user, read-in input.
	int number1, number2 ;
	cout << "Enter two integers between 0 and 999999: " ;
	cin >> number1 >> number2 ;

	//Error check to make sure both digits are between 0 and 999999.
	while ( number1 > 999999 || number1 < 0 || number2 > 999999 || number2 < 0 )
		{
		cout << "Enter two integers between 0 and 999999: " ;
		cin >> number1 >> number2 ;
		}

	//Initiliaze comparison variables.
	int r1,r2,r3,r4,r5;
	int R1,R2,R3,R4,R5;
	int first,second;
	
	//Store the two actual input numbers, to display to user later.
	first = number1;
	second = number2;
	
	//Break down first number.
	r1 = number1 % 10;
    number1 = number1 / 10;
	r2 = number1 % 10;
    number1 = number1 / 10;
	r3 = number1 % 10;
    number1 = number1 / 10;
	r4 = number1 % 10;
    number1 = number1 / 10;
	r5 = number1 % 10;
    number1 = number1 / 10;

	//Break down second number.
	R1 = number2 % 10;
    number2 = number2 / 10;
	R2 = number2 % 10;
    number2 = number2 / 10;
	R3 = number2 % 10;
    number2 = number2 / 10;
	R4 = number2 % 10;
    number2 = number2 / 10;
	R5 = number2 % 10;
    number2 = number2 / 10;
	
	//Initialize counter variable, and do the two number comparison. 
	int count = 0;
	if(R1 != r1)
		count = count + 1;
	if(R2 != r2)
		count = count + 1;
	if(R3 != r3)
		count = count + 1;
	if(R4 != r4)
		count = count + 1;
	if(R5 != r5)
		count = count + 1;
	if(number1 != number2)
		count = count + 1;
	
	//Display the hamming distance.
	cout << "Hamming distance between " << first << " and " << second << " is " << count << endl;
	
return 0;
}