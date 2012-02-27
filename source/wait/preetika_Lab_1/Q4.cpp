/* Program that takes an input character and and input offset and 
adds the offset to the character.  If the input is 0 it changes case */

#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	char ch, nch;		//input character and new character
	int of;
	
	cout<<"Enter character: ";
	cin>>ch;
	cout<<"Offset: ";
	cin>>of;

	// error checking for negative offsets
	if (of < 0)
	{
		cout<<"Please enter non negative offset: ";
		cin>>of;
	}
	// retyping character if charater is not a letter and offset is 0
	if (ch < 'A' || ch > 'z' ) 
	{
		if (of == 0) 
			nch = ch;
		else
			nch = ch + of;
	}
	
	//adding offsets to character 
	else if (of != 0)
		nch = ch + of;

	//changing case if offset is 0
	else if (ch < 'a')
		nch = ch - ('A' - 'a');	
	else if (ch > 'Z')
		nch = ch + ('A' - 'a');


	cout<<"New character: "<<nch;

	getch();

	return 0;
}

