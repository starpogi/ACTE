#include <iostream>
using namespace std;

int main()
{

//declare variables
int num1;
int num2;
int check1;
int check2;
int sum;

sum = 0;


num1 = -1;
num2 = -1;

	
while (num1<0 || num1 > 999999 || num2<0 || num2>999999)
{	

//promting user imput of numbers
cout << "Please enter 2 digits between 0 and 999999: " << endl;
	cin >> num1;
	cin >> num2;

//Check to see that numbers are between 0 and 999999

if (num1< 0 || num1 > 999999)
{
	cout << "Number 1 is invalid." << endl;

}
if (num2<0 || num2 > 999999)
{
	cout << "Number 2 is invalid." << endl;
	
}
}
	
// Begin checking hamming distance
	
check1 = num1/100000 % 10;
check2 = num2/100000 % 10;
	
if (check1 == check2)
{}
else
{ sum++;
}

	check1 = num1/10000 % 10;
	check2 = num2/10000 % 10;
	
if (check1 == check2)
{}
else
{ sum++;
}

	check1 = num1/1000 % 10;
	check2 = num2/1000 % 10;
	
if (check1 == check2)
{}
else
{ sum++;
}

	check1 = num1/100 % 10;
	check2 = num2/100 % 10;
	
if (check1 == check2)
{}
else
{ sum++;
}

	check1 = num1/10 % 10;
	check2 = num2/10 % 10;
	
if (check1 == check2)
{}
else
{ sum++;
}

	check1 = num1 % 10;
	check2 = num2 % 10;
	
if (check1 == check2)
{}
else
{ sum++;
}
	
cout << "Hamming distance between " << num1 << " and " << num2 << " is " << sum << "." << endl;
return 0;
}