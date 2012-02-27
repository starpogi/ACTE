#include<iostream>

using namespace std;

int main()
{
 // Prompt the user to enter a character
 cout << "Enter character: ";
 char character;
 cin >> character;
 
 //Prompt the user to enter an offset
 cout << "Offset (enter 0 to convert case): ";
 int offset;
 cin >> offset;
 
 char newnum;
 int check;
 
 // Error check to make sure the offset is positive
 if(offset < 0)
 {
	cout << "Error: Only positive integer values are accepted.";
 }
 //If offset zero is chosen the case s changed.
 else if(offset == 0)
 {
	// Uppercase to lowercase
	if(character >= 65 && character <= 90)
	{
		newnum = character + 32;
		cout << "New Character: " << newnum;
	}
	// Lowercae to uppercase
	else if(character >= 97 && character <=122)
	{
		newnum = character - 32;
		cout << "New Character: " << newnum;
	}
	// If the character is a number, then the case cannot be changed and the number is displayed again
	else
		cout << "New Character: " << character;
	
 }
 // If the offset is larger than zero, change the character accordingly
 else if(offset > 0)
 {
	newnum = character + offset;
	check = character + offset;
	// Error check to make sure the offset is not too high
	if(check > 126)
	{
		cout << "Error: Offest is too high";
	}
	else if(check <= 126)
	{
		cout << "New Character: " << newnum;
	}

 }
 return 0;
 }