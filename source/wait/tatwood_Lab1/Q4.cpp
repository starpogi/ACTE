#include <iostream> 
using namespace std;

int main()
{
    int offset, userChar, newChar;
    char input;
    
    // Promt the user for an input
    
    cout << "Enter character: ";
    cin >> input;
    
    // Check to make sure the user has inputed a character
    // Characters begin at ASCII value 33 and end at 126
    
    userChar = (int)input;
    
    if (userChar < 33 || userChar > 126)
    {
        // If the value is not in that range print and error message
        cout << "Error you have not entered a valid character";
        return 0;
    }
    else
    {
        cout << "Offset (enter 0 to convert case): " ;
        cin >> offset;
     
        // Check to see if the offset is within the range
        // ASCII characters only run up to 126, so the offset should not take us out of that range 
        
        if ((offset + userChar) > 126 || offset < 0)
        {
            cout << "Error the offset is either too large or is negative" << endl;
            return 0;
        }
        // Check to see if the offset is 0
        else if (offset == 0)
        {
            // Check to see if the input character is an upper case letter
            if (userChar <= 90 && userChar >= 65)
                newChar = userChar + 32;
            // Check to see if the input character is a lower case letter
            else if (userChar <= 122 && userChar >= 97)
                newChar = userChar - 32;
            // If it is not an upper or lower case letter make no changes
            else
                newChar = userChar;
        }
        
        // If offset is not too large and not 0 add it to the original character value 
        
        else 
            newChar = userChar + offset;
        
        // Print final message
        
        char finalChar = (char)newChar;
        
        cout << "New character: " << finalChar << endl;
    } 
    
}