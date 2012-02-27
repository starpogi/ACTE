#include <iostream>
using namespace std;

int main ()
{
	// Takes in user inputted integer values.
	int int1, int2;

	cout << "Enter two integers between 0 and 999999: ";
	cin >> int1 >> int2;

	// Error checks for values not within the range 0-999999.
	while ((int1 < 0) || (int1 > 999999) || (int2 < 0) || (int2 > 999999))
	{
		cout << "Please enter an integer between 0 and 999999." << endl;
		cout << "Enter two integers between 0 and 999999: ";
		cin >> int1 >> int2;
	}

	// Calculates the Hamming Distance of the values and prints.
	int count = 0;
	int test1 = int1;
	int test2 = int2;

	while ((test1 > 0) || (test2 > 0)) 
	{
		if (test1%10 != test2%10)
		{
			count++;
		}

		test1 = test1/10;
		test2 = test2/10;

	}

	cout << "Hamming distance between " << int1 << " and " << int2 << " is " << count << "." << endl;

	// For visual studio
	//system("pause");
	return 0;
}