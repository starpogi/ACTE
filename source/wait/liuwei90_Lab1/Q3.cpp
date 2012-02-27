#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Assign all variables.
	double num1;
	double num2;
	int num=0;
	double i;
	//outputs and inputs
	cout<<"Enter two integers between 0 and 999999: ";
	cin>>num1>>num2;
	//check the range of the number. If wrong type again
	while(num1>999999 || num1<0 || num2>999999 || num2<0)
	{
	cout<<"Wrong! enter two integers between 0 and 999999: ";
	cin>>num1>>num2;
	}
	//Finding the Hamming distace.
	for (i=6; i>0; i--)
	{
		int num4=(static_cast <int>(num1/pow(10,(i-1))))%10;
		int num6=(static_cast <int>(num2/pow(10,(i-1))))%10;
		if (num4!=num6)
		{
			num=num+1;
		}
		else
		{num=num;}
	}
	//Prints the results.
	cout<<"Hamming distance between "<<num1<<" and "<<num2<<" is "<<num<<endl;
return 0;
}
