// #include "stdafx.h"
#include <iostream>
using namespace std;

int main ()
{
	char i;
	int offset;
	cout << "Enter character: ";
	cin >> i;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;
	while (offset < 0)
	{
		cout << "Error! \n" << "Offset (enter 0 to convert case): ";
		cin >> offset;
	}
	// check if offset is negative
if (i>='A' && i<='Z')
{
	while (offset > 255-i)
		cout << "Error. Please enter a value less than " << 255-i << ": "<< endl;
	if (offset == 0)
		cout << "New character: " << static_cast<char>(i+32)<< endl;
	else
	{
		cout << "New character: " << static_cast<char>(i+offset) << endl;
	}
	// if the character is between these letters, then 32 will be added to the character to change case
}
	else if (i >= 'a' && i <= 'z')
{
	while (offset > 255-i)
		cout << "Error. Please enter a value less than " << 255-i << ": "<< endl;
	if (offset == 0)
		cout << "New character: " << static_cast<char>(i-32)<< endl;
	else
	{
		cout << "New character: " << static_cast<char>(i+offset) << endl;
	}
	// if the character is between these letters, then 32 will be subtracted to change case
}
	else
{
	cout << "New character: " << static_cast<char>(i+offset) << endl;
}
// if there character is a number >= 0 and <= 9 then the offset will just be added to the character
return 0;
}