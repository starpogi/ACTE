/* Peter Rock U29252343 LAB1_Q4*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter character: " ;
	char character1 ;
	cin >> character1 ;

	cout << "Offset (Enter 0 to convert case): " ;
	int offset ;
	cin >> offset ;

	while (offset < 0)
	{
		cout << "Please enter a valid offset >= 0 (Enter 0 to convert case): " ;
		cin >> offset ;
	}

	int characterint = static_cast<int>(character1) ; //Converts char to integer representation
	char newchar ;
	int newcharint ;
	
	if (offset == 0)
		//If offset is 0 checks to see if its a character.  If it is a character is transforms it to the opposite case
		//If it is not a character it keeps the original character.
	{
		if ((characterint >= 65 && characterint <=90) || (characterint >= 97 && characterint <= 123))
		{
			if (characterint < 91 )
				newcharint = characterint + 32 ;
			else
				newcharint = characterint - 32 ;
		}
		else
			newcharint = characterint ;
	}
	else
		//Applies offset.  Checks to see if the offset is outside of the ASCII range
	{
	newcharint = characterint + offset ;

		while (newcharint < 33 || newcharint > 126)
		{
			cout << "Invalid offset.  Please enter a new offset > 0: " ;
			cin >> offset;
			while (offset <= 0)
			{
				cout << "Please enter an offset > 0: " ;
				cin >> offset ;
			}
			newcharint = characterint + offset ;
		}
	}

	newchar = static_cast<char>(newcharint) ; //Determines new character and outputs result
	cout << "New character: " << newchar << endl;

	return 0;
}