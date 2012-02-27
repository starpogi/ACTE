#include <iostream>
using namespace std;

int main() 
{
		char input;
		short int offset;
		unsigned short int output;

		cout << "Enter a character: ";
		cin >> input;

		cout << "Integer offset (enter 0 to convert case): ";
		cin >> offset;

		if (input >= 65 && input <= 90 && offset == 0)			// converts to upper case
			output = input + 32;
		else if (input >= 97 && input <= 122 && offset == 0)	// converts to lower case
			output = input - 32;
		else 
			output = input + offset;

		if (output > 127)
			cout << "The parameters you entered do not output an ASCII character." << endl;
		else
			cout << "New character: " << static_cast<char>(output) << endl;

return 0;
}
