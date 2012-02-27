/* Program that computes the Hamming distance between two integers */

#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	long int num1, num2, temp;

	cout<<"Enter two integers between 0 and 999999: ";
	cin>>num1>>num2;

	//error checking
	while (((num1<0) || (num1>999999)) || ((num2<0) || (num2>999999))) 
	{
		cout<<"These numbers are out of range. Please enter numbers between 0 and 999999 ";
		cin>>num1>>num2;
	}

	//storing the numbers to display in the end
	long int n1 = num1;		
	long int n2 = num2;

	// making the first number bigger than the second one
	if (num1<num2)
	{
		temp = num2;
		num2 = num1;
		num1 = temp;
	}

	// computing the size of each number

	int t1 = 0, t2 = 0;

	temp = num1;
	while (temp>0)
	{
		temp = temp/10;
		t1++;
	}

	temp = num2;
	while (temp>0)
	{
		temp = temp/10;
		t2++;
	}


	//recording the difference between the numbers
	t2 = t1-t2;

	int ctr = 0;		//counter
	int c1, c2;		//comparison integers

	for (int i = 1; i<=(t1-t2); i++)
	{
		c1 = num1%10;
		c2 = num2%10;

		if (c1 != c2)
			ctr++;

		num1 = num1/10;
		num2 = num2/10;
	}


	while (num1>0)
	{
		c1 = num1%10;

		if (c1 != 0) 
			ctr++;

		num1 = num1/10;
	}

	cout<<"Hamming distance between "<<n1<<" and "<<n2<<" is "<<ctr;


	getch();
	return 0;
}



