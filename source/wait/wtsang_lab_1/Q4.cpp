# include <iostream>
using namespace std;

int main()
{
	// Assign character 
	char character;
	// Assign offset
	int offset;
	// Prompt
	cout<<"Enter character: ";
	cin>> character;
	cout<<"Offset (enter 0 to convert case): ";
	cin>> offset;

	// Condition when offset = 0
	if (offset == 0)
	{
		// If upper case, add 32 to reach lower case
		if (character >= 65 && character <= 90)
		{
			character = character + 32;
			cout<<"New Character: "<<character<<endl;				}
		// If lower case, subtract 32 to reach upper case
		else if (character >= 97 && character <= 122)
		{
			character = character - 32;
			cout<<"New Character: "<<character<<endl;
		}
		
		// If character is not a letter
		else if (character <= 64 || character >= 123)
		{
			cout<<"New Character: "<<character<<endl;
		}
		else if (character >=91 && character <= 96)
		{
			cout<<"New Character: "<<character<<endl;
		}
	}
	else
	{
		// If offset is not 0, simply add the number to reach the new character
		character = character+offset;
		cout<<"New Character: "<<character<<endl;
	}
return 0;
}
