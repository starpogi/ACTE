/*
This program prompts the user to enter two integers between 0 and 999,999 and computes the Hamming distance between the two numbers in decimal format (NOT in binary format), and displays the Hamming distance on the screen.
*/
#include <iostream>
using namespace std;

char prompt[] = "Enter two integers between 0 and 999999: ";
char reply[] = "The hamming distance between "; 

char err[] = "Error: You entered an input not within the valid range.\nRerun program and enter a valid integer \n";

int num1, num2, inter1, inter2, newnum1, newnum2;

int dist = 0;
int clip = 10;

int main()
{
	//Prompting then error checking ONCE for valid choice
	cout << prompt;
	cin >> num1 >> num2;
	if ((num1<0) || (num1>999999) || (num2<0) || (num2>999999))
	{
		cout << err;
	}
	else
	{
		newnum1 = num1;
		newnum2 = num2;
		for (int i=0; i<6; i++)
		{
			inter1 = newnum1 % 10;	//Isolating the least significant digit of the input
			inter2 = newnum2 % 10;
			newnum1 = num1 / clip;	//Getting rid of the least significant of the input
			newnum2 = num2 / clip;
			clip = clip*10;			//divisor to shorten inputs
			if (inter1 != inter2)
			{
				dist++;
			}
			else
			{
				dist;
			}
		}
		cout << reply << num1 << " and " << num2 << " is " << dist << endl;
	}

	return 0;
}
