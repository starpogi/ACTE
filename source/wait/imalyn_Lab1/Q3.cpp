#include <iostream>
using namespace std;

int main()
{
	//prompts user to enter numbers and checks to make sure entries are valid
	int num1, num2;
	cout << "Enter two integers between 0 and 999999: "<< endl;
	cin>> num1;
		if (num1<0 || num1>999999)
		{
			cout << "Please re-enter an integer between 0 and 999999: "<<endl;
			cin>> num1;
		}
	cin >> num2;
		if (num2<0 || num2>999999)
		{
			cout << "Please re-enter an integer between 0 and 999999: "<<endl;
			cin>> num2;
		}
	
	//calculates hamming distance
	int counter=0;
	int i;
	int num1a = num1;
	int num2a = num2;
	for (i=1; i<7; i++)
	{
		int digit1 = num1a%10;
		int digit2 = num2a%10;
		num1a /= 10;
		num2a /= 10;
		if (digit1 != digit2)
			counter++;
	}
	
	cout << "Hamming distance between "<< num1<<" and "<< num2<<" is "<< counter<< endl;
	
	return 0;
}
