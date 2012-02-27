/*
 * q3.cpp
 *
 *EC327 lab 1 Q3
 *  Created on: Feb 8, 2012
 *      Author: joerafalak
 */

#include <iostream>
using namespace std;

int main()
{
	//Determining the two integers
	int num1;
	int num2;
	int ham = 0;

	cout<<"Enter two integers between 0 and 999,999."<<endl;
	cout<<"First integer: "<<endl;
	cin>>num1;

	while(num1 < 0 || num1 > 999999)
	{
		cout<<"Invalid number selection, please enter an integer in the range 0 - 999999."<<endl;
		cin>>num1;
	}

	cout<<"Second integer: "<<endl;
	cin>>num2;

	while(num2 < 0 || num2 > 999999)
	{
		cout<<"Invalid number selection, please enter an integer in the range 0 - 999999."<<endl;
		cin>>num2;
	}

	int num1dig1 = num1/100000;
	int num1rem1 = num1%100000;
	int num1dig2 = num1rem1/10000;
	int num1rem2 = num1rem1%10000;
	int num1dig3 = num1rem2/1000;
	int num1rem3 = num1rem2%1000;
	int num1dig4 = num1rem3/100;
	int num1rem4 = num1rem3%100;
	int num1dig5 = num1rem4/10;
	int num1rem5 = num1rem4%10;
	int num1dig6 = num1rem5/1;

	int num2dig1 = num2/100000;
	int num2rem1 = num2%100000;
	int num2dig2 = num2rem1/10000;
	int num2rem2 = num2rem1%10000;
	int num2dig3 = num2rem2/1000;
	int num2rem3 = num2rem2%1000;
	int num2dig4 = num2rem3/100;
	int num2rem4 = num2rem3%100;
	int num2dig5 = num2rem4/10;
	int num2rem5 = num2rem4%10;
	int num2dig6 = num2rem5/1;

	if(num1dig1 != num2dig1)
	{
		ham++;
	}

	if(num1dig2 != num2dig2)
	{
		ham++;
	}

	if(num1dig3 != num2dig3)
	{
		ham++;
	}

	if(num1dig4 != num2dig4)
	{
		ham++;
	}

	if(num1dig5 != num2dig5)
	{
		ham++;
	}

	if(num1dig6 != num2dig6)
	{
		ham++;
	}


	cout<<num1<<" and "<<num2<<" have a hamming distance of "<<ham<<endl;
	return 0;
}
