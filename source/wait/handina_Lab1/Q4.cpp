#include <iostream>
using namespace std;

int main()

{
	//Declare variables
	char inputchar;
	int intinputchar;
	int offset;
	char outputchar;
	int intoutputchar;
	
	//Prompt the user to enter a character:
	cout << "Enter character:" << endl;
	cin >> inputchar;

	//Convert the input character to its ASCII equivalent:
	intinputchar = static_cast<int>(inputchar);
	
	//Prompt the user to enter an offset amount:	
	do 
	{
	
		cout << "Offset (enter 0 to convert case): " << endl;	
		cin >> offset;
		intoutputchar = intinputchar + offset;
		if (offset < 0)
		{cout << "Error, please enter a non-negative integer." << endl;}
		else if (intoutputchar > 126 || intoutputchar < 33)
			cout << "Error, offset yields non-character result." << endl;
	
	}	
		while (offset < 0 || intoutputchar > 126 || intoutputchar < 33);



	//If the offset is zero, change the case of inputchar by modifying intinputchar:
	if (offset == 0)

	{	
		
		//Check to see if inputchar is lowercase
		if (intinputchar >= 65 && intinputchar <= 90) 
			intoutputchar = intinputchar + 32;
	
		//Check to see if it is upppercase
		else if (intinputchar >= 97 && intinputchar <= 122)
			intoutputchar = intinputchar - 32;

	}
	
	
	//Convert and print the new character:
	outputchar = static_cast<char>(intoutputchar);
	cout << "New character: " << outputchar << endl;

	
	return 0;	
}

