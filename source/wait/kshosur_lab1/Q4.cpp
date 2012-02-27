#include <iostream>
using namespace std;

// This program offsets the input character by the specific value.
// The new value with the specified offset is then displayed.
// If the offset is zero, then the case of the character is changed.

int main()
{
   // Initialize variables.
   char character, newCharacter;
   int offset, offsetCheck;
   
   // Ask user to input a character and an offset.
   cout << "Enter character: ";
   cin >> character;
   cout << "Offset (enter 0 to convert case): ";
   cin >> offset;
   
   // Check that the offset is greater than or equal to zero.
   while ( offset < 0)
   {
         cout << "Error! The offset needs to be a positive integer." << endl;
         cout << "Offset (enter 0 to convert case): ";
         cin >> offset;
   }
   
   // Change character into ASCII equivalent.
   int characterASCII = character;
   
   // Check that the offset will not cause newCharacter > 127.
   offsetCheck = 127;
   while ( characterASCII + offset > offsetCheck)
   {
         cout << "Error! The offset is too large." << endl;
         cout << "Try an offset that is smaller than " << ( offsetCheck - characterASCII ) << "." << endl;
         cout << "Offset (enter 0 to convert case) : ";
         cin >> offset;
   }

   // Initialize variable which contains offset between uppercase, lowercase letters in ASCII table.
   int offsetASCII = 'a' - 'A';
   
   // Check for uppercase variables.
   if ( (characterASCII >= 65) && (characterASCII <= 90) )
   {
        // Change to lowercase
        if ( offset == 0 )
        {
             newCharacter = static_cast<char>(characterASCII + offsetASCII);
             cout << "New character: " << newCharacter << endl;
        }
        // Add offset.
        else
        {
             newCharacter = static_cast<char>(characterASCII + offset);
             cout << "New character: " << newCharacter << endl;
        }
   }    
   // Check for lowercase variables.
   else if ( (characterASCII >= 97) && (characterASCII <= 122) )
   {
        // Change to uppercase.
        if ( offset == 0 )
        {
             newCharacter = static_cast<char>(characterASCII - offsetASCII);
             cout << "New character: " << newCharacter << endl;
        }
        // Add offset.
        else
        {
            newCharacter = static_cast<char>(characterASCII - offset);
            cout << "New character: " << newCharacter << endl;
        }
   }
   // For characters that are not part of the alphabet.
   else
   {
   newCharacter = static_cast<char>(characterASCII + offset);    
   cout << "New character: " << newCharacter << endl;
   }
   
   return 0;
}
