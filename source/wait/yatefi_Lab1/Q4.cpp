#include <iostream>

using namespace std;

int main()
{

// Declare variables

char let;
int offset;
int num;

//Promt user for character and offset
//If offset is less that zero, promt again

offset = -1;
while (offset < 0)
{
cout << "Enter character: " << endl;
cin >> let;
cout << "Offset: " << endl;
cin >> offset;

// Check if integer is negative

	if (offset < 0)
	{
	cout << "Invalid offset, please enter a positive offset." << endl;
	}

}

// Cast the character to an integer

num = static_cast<int>(let);

/* If the user enters 0 for offset, Should change case of character
If the entered character is above 96 (on ASCII table), it is a lower case character */

if (offset ==0 && num>96)
{

num = num - 32;
cout << "New character: " << static_cast<char>(num) << endl;

}
// If the character is less than 91, it is a capital letter

else if (offset ==0 && num<91)
{

num = num + 32;
cout << "New character: " << static_cast<char>(num) << endl;

}

/* If the offset is any number, add the offset to the ASCII decimal 
of the character and give back the new letter*/

else
{
num = num + offset;
cout << "New character: " << static_cast<char>(num) << endl;

}






return 0;
}