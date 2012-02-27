#include <iostream>
using namespace std;

int main()
{
	
	//Prompt user for a chacacter input.
	cout << "Enter character: " ;
	char input;
	cin >> input;

	/*
	Error Check for Standard ASCII table use.
	while( input < 0 || input > 128)
		{
		cout << "Enter a valid Character PLEASE!  <<";
		cin >> input;
		}
	/*/
	
	//Prompt for an offset. Error check to ensure positive offset, and standard ASCII table use (max 128).
	int offset; 
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;
	while(offset <0)
		{
		cout << "Let's keep things positive! Enter an Offset (enter 0 to convert case): ";
		cin >> offset;
		}
	
	while( (offset+input) > 128)
		{
		cout << "Whoops, The standard ASCII table defines 128 character codes. \nYou defined character: " <<  offset+input << endl;
		offset = 200;
		break;
		}

	//Output character.
	switch(offset)
		{
		case 0 : 
			if(input > 96 && input < 123)
				cout << "New Character: " << static_cast<char>(input - 32) << endl;
			else if (input > 64 && input < 91)
				cout << "New Character: " << static_cast<char>(input + 32) << endl;
			else
				cout << "New Character: " << input << endl;
			break;
		case 200:
			break;	             
		default : cout << "New Character: " << static_cast<char>(input + offset) << endl;
		}

	return 0;

}