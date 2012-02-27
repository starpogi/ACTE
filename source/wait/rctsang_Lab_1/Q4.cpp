/*
EC327 - Lab 1 - Q4: Prompts users to enter a character or number and enter an offset.
	Prints a new character with the offset added to the original.  If 0 is entered, the case of the character is converted
	unless the character is not actually a letter.
*/

#include <iostream>
using namespace std;


int main()
{
	int sub, os, out;
	char x, c;

	cout << "Enter an character: ";
	cin >> x;
	cout << "Offset (enter 0 to convert case): ";
	cin >> os;

	while (os < 0)
	  {
	    cout << "ERROR: the inputted offset was less than zero." << endl;
	    cout << "Offset (enter 0 to convert case): ";
	    cin >> os;
	  }

	sub = x;

	if (os == 0)
	{
		if (sub >= 65 && sub <= 90)
		{
			c = x + 32;
			cout << "New character: " << c << endl;
		}
		else if (sub >= 97 && sub <= 122)
		{
			c = x - 32;
			cout << "New character: " << c << endl;
		}
		else if (sub >= 48 && sub <= 57)
		{
			cout << "New character: " << x << endl;
		}
		else
		        cout << "ERROR: input was not a letter." << endl;
	}
	else
	{
		c = x + os;
		cout << "New character: " << c << endl;
	}

	return 0;
}

