//jtrinh_Lab_1
//Jeannie Trinh
//U86350918
//Lab 1, Q4
//Program: Converts cases of letters, print out entered value, or offset

#include <iostream>

using namespace std;

int main()
{
	int offset = 'a' - 'A', op, chInt;
	char ch;

	//Prompts user to enter a character and offset
	cout << "Enter character: ";
	cin >> ch;
	chInt = static_cast<int>(ch);

	cout << "Offset (enter 0 to convert case): ";
	cin >> op;

	//Error checks for offset for when it negative
	while (op < 0){
		cout << "Error! Please enter a positive integer for offset: ";
		cin >> op;
	}
	//If letter is entered, op != 0, and new character will be out of range of ASCII, display error
	while (op != 0 && (chInt + op) > 127){
		cout << "Error! Offset entered is out of range! Please enter a valid offset: ";
		cin >> op;
	}
	//Determine if character entered is a letter or not
	bool isletter = ((chInt >= 65 && chInt < 91) || (chInt >= 97 && chInt < 123));

	//Determine if character is lowercase or uppercase
	bool upperCase = (chInt >= 65 && chInt < 91);
	bool lowerCase = (chInt >= 97 && chInt < 123);
	
	//If character is a nonletter and offset is 0, display the character as is
	if (!isletter && op == 0){
		cout << "New character: " << ch <<endl;
	}
	//If character is a letter and 0 is offset, change case
	else if (upperCase && op == 0){
		chInt = chInt + offset;
		cout << "New character: " << static_cast<char>(chInt) << endl;
	}
	else if (lowerCase && op == 0){
		chInt = chInt - offset;
		cout << "New character: " << static_cast<char>(chInt) << endl;
	}
	//If letter is entered and offset != 0, print char after offsetting
	if (isletter && op != 0){
		chInt = chInt + op;
		cout << "New character: " << static_cast<char>(chInt) <<endl;
	}
	//Make sure offset is valid and will display a letter in range
	return 0;
}