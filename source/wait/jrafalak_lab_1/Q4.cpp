/*
 * q4.cpp
 *
 *letter converter
 *
 *  Created on: Feb 19, 2012
 *      Author: joerafalak
 */


#include <iostream>
using namespace std;

int main()
{
	//User will input character and offset value, the program will check to see if the offset value is positive.
	char let;
	cout<<"Enter a character."<<endl;
	cin>>let;

	int offset;
	cout<<"Enter the offset value (0 to invert case)."<<endl;
	cin>>offset;

	/*The program does not check to see if the offset will keep the new character within the limits of the ASCII
	 *table because when the ASCII value should be greater than the max value in the table, it seems to loop back to
	 *the beginning of the table.
	 */
	while(offset < 0)
	{
		cout<<"Error:This offset value is negative, enter a positive value."<<endl;
		cin>>offset;
	}

	//Depending on what the ASCII value of the character and the offset value the proper conversion is decided
	char newchar;
	int convert = static_cast<int>(let);

	if(offset == 0 && convert < 65)
	{
		newchar = let;
	}

	else if(offset == 0 && convert > 122)
	{
		newchar = let;
	}

	else if(offset == 0 && (convert >= 91 && convert <= 96))
	{
		newchar = let;
	}

	else if(offset == 0 && (convert >= 65 && convert <= 90))
	{
			convert += 32;
		newchar = static_cast<char>(convert);
	}

	else if(offset == 0 && (convert >= 97 && convert <= 122))
	{
			convert -= 32;
		newchar = static_cast<char>(convert);
	}

	else
	{
		convert += offset;
		newchar = static_cast<char>(convert);
	}

	cout<<"New Character:"<<newchar<<endl;

	return 0;
}
