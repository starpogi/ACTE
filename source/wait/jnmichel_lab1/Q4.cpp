/*
this code asks the user to enter a character. Then the program asks the user to enter a non-negative integer offset. This program adds the offset to the character to produce a new ASCII value. This value should then be displayed. If the offset is 0 and the character is a letter, the program should change the case of the letter. If the offset is 0 but the character is not a letter, the same character should be displayed.
My code always take the first character in case the user inputs more than one. It uses the second character as teh input for the next prompt. I don't have enough time to correct this and make it more robust.
*/

/*
E n t e r character: <D>
Offset (enter 0 to convert case): <7>
New character: K
E n t e r character: <a>
Offset (enter 0 to convert case): <0>
New character: A
E n t e r character: <B>
Offset (enter 0 to convert case): <0>
New character: b
Enter character: <3>
Offset (enter 0 to convert case): <0>
New character: 3
*/
#include <iostream>
using namespace std;

char prompt1[] = "Enter character: ";
char prompt2[] = "Offset (enter 0 to convert case): ";
char result[] = "New character: ";

char er1[] = "Error: You entered a negative integer as an offset.\nRerun the program and enter a positive integer offset";
char er2[] = "Warning: Your entered input and the offset will yield a non standard ASCII charater";
char er3[] = "Error: The entered input along with the offset exceeds the ASCII table";
char er4[] = "Warning: You are printing out DELETE or a non standard ascii character ";

char keyin, keyout;
int offset, decascii, charout, limit;

int main ()
{
	//Prompting
	cout << prompt1;
	cin >> keyin;
	cout << prompt2;
	cin >> offset;
	//Assiging ASCII code to decascii
	decascii = keyin;
	//Error checking and calculating outputs
	if ((offset < 0) )
	{
		cout << er1 << endl;
		return 0;
	}
	if (offset == 0)
	{
		//If a uppercase letter is inputed
		if ((decascii >= 65) && (decascii <= 90))
		{
			charout = decascii + 32;
			keyout = static_cast<char>(charout);
			cout << result << keyout << endl;
		}
		//If a lowercase letter is inputed 
		if ((decascii >= 97) && (decascii <= 122))
		{
			charout = decascii - 32;
			keyout = static_cast<char>(charout);
			cout << result << keyout << endl;
		}
		else //output input
		{
			cout << result << keyin << endl;
		}
	}
	else //if offset is anything greater zero
	{
		
		limit = offset + decascii;
		if ((limit > 0) && (limit < 127))
		{
			charout = decascii + offset;
			keyout = static_cast<char>(charout);
			cout << result << keyout << endl;
		}
		if (limit == 127)
		{
			cout << er4 << endl;
			charout = decascii + offset;
			keyout = static_cast<char>(charout);
			cout << result << keyout << endl;
		}
		if ((limit > 127) && (limit < 256))
		{
			cout << er2 << endl;
			charout = decascii + offset;
			keyout = static_cast<char>(charout);
			cout << result << keyout << endl;
		}
		if (limit > 255)
		{
			cout << er3 << endl;
		}
	}

	return 0;

}
