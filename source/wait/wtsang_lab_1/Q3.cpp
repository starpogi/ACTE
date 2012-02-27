#include <iostream>
using namespace std;

int main ()
{
	// Assign number 1 and number 2 as integers to be compared
	int number1;
	int number2;
	
	// Prompt
	cout<< "Enter two integers between 0 and 999999: ";
	
	cin>>number1;
	cin>>number2;
	
	// Check if Input value 1 is valid
	while (number1<0 || number1>999999)
	{
		cout<<"Please Enter the First Integer Again: ";
		cin>>number1;
	}
	
	// Check if Input value 2 is valid
	while (number2<0 || number2>999999)
	{
		cout<<"Please Enter the Second Integer Again: ";
	}

	// Assign a originally as 0
	int a=0;
	// If the remainder of the number is not the same, add 1 to a, indicating the difference
	// The same method is repeated for bigger numbers, up to 100000
	if ((number1 % 10 - number2 % 10) !=0)
		{
		++a;
		}
	if ((number1/10 % 10 - number2/10 % 10) !=0)
		{
		++a;
		}
	if ((number1/100 % 10 - number2/100 % 10) !=0)
		{
		++a;
		}
	if ((number1/1000 % 10 - number2/1000 % 10) !=0)
		{
		++a;
		}
	if ((number1/10000 % 10 - number2/10000 % 10) !=0)
		{
		++a;
		}
	if ((number1/100000 % 10 - number2/100000 % 10) !=0)
		{
		++a;
		}
	// Display answer
	cout<< "Hamming Distance between "<<number1<< " and "<<number2<< " is "<<a<<"."<<endl;

return 0;
}
