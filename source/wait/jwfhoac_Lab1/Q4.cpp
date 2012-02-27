#include <iostream>
using namespace std;

int main ()
{
	// Takes in the desired character and amount to offset by.	
	
	char in;
	int offset;

	cout << "Enter character: ";
	cin >> in;

	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	
	// Error checks for negative offset values.
	while (offset < 0)
	{
		cout << "Please enter a nonnegative integer for the offset." << endl;
		cout << "Offset (enter 0 to convert case): ";
		cin >> offset;
	}


	// Performs character conversion operation.
	switch (offset)
	{
		case 0:

			if ((in >= 48) && (in <= 57))
			{
				cout << "New character: " << in << endl;
			}
			else if((in >= 65) && (in <= 90))
			{
				cout << "New character: " << (char) (in + ('a' - 'A')) << endl;
			}
			else if((in >= 97) && (in <= 122))
			{
				cout << "New character: " << (char) (in - ('a' - 'A')) << endl;
			}
			break;

		default: 
			cout << "New character: " << (char) (in + offset) << endl;
	}
		
	// For visual studio:
	// system("pause");

	return 0;
}