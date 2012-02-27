// Ngozi Nwogwugwu
#include <iostream>
using namespace std;
int main() {
	//input and output variables
	char inchar,outchar;
	int offset;

	//internal variables
	int oldchar, newchar;

	//prompt the user for inputs
	cout << "Enter character: " << endl;
	cin >> inchar;
	cout << "Offset (enter 0 to convert case): " << endl;
	cin >> offset;
	
	//convert the input character into an integer
	oldchar = static_cast <int> (inchar);
	
	//check to see if the offset is valid
	if (offset < 0) 
		cout << "That offset is invalid." << endl;

	// To change the case of the letter
	else if (offset == 0){
		if (oldchar >= 48 && oldchar <= 57) //the character is a number
			{newchar = oldchar;
			outchar = static_cast <char> (newchar);
			cout << "The number, " << outchar << " remains the same." << endl;}
		else if (oldchar >= 65 && oldchar <= 90) //the character is uppercase
			{newchar = oldchar + 32;
			outchar = static_cast <char> (newchar);
			cout << "The lowercase of " << inchar << " is " << outchar << "." << endl;}
		else if (oldchar >= 97 && oldchar <= 122) //the character is lowercase
			{newchar = oldchar - 32;
			outchar = static_cast <char> (newchar);
			cout << "The uppercase of " << inchar << " is " << outchar << "." << endl;}
		else //the character is invalid
			cout << "Invalid character." << endl;
	}
	
	// To offset the letter
	else 
	{
		if (oldchar >= 48 && oldchar <= 57) //the character is a number
			{newchar = oldchar + offset;
			if (newchar > 57)
				cout << "That offset is too high." << endl;
			else 
				{outchar = static_cast <char> (newchar);
				cout << "The new character is: " << outchar << "." << endl;}
			}
		else if (oldchar >= 65 && oldchar <= 90) //the character is uppercase
			{newchar = oldchar + offset;
			if (newchar > 90)
				cout << "That offset is too high." << endl;
			else 
				{outchar = static_cast <char> (newchar);
				cout << "The new character is: " << outchar << "." << endl;}
			}
		else if (oldchar >= 97 && oldchar <= 122) //the character is lowercase
			{newchar = oldchar + offset;
			if (newchar > 122)
				cout << "That offset is too high." << endl;
			else 
				{outchar = static_cast <char> (newchar);
				cout << "The new character is: " << outchar << "." << endl;}
			}
		else //the character is invalid
			cout << "Invalid character." << endl;	
	}
return 0;
}
