#include <iostream>
using namespace std;

int main()
{
    char input;
    int offset=0;

    cout << "Enter character: ";
    cin >> input;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;

int decInput, newChar;
decInput=static_cast<int>(input);

    if (offset==0)
        {
            if ((decInput >=65)&(decInput <=90 )) // If input is upper case letter
                newChar = decInput+32;
            else if ((decInput >= 97)&(decInput <= 122)) // If input is lower case
                newChar = decInput-32;
            else if ((decInput >= 48)&(decInput <= 57))
                newChar=decInput;
        }
    else if (offset < 0)
        {
            cout << "Please enter a positive integer for the offset value." << endl;
            return 0;
        }
    else if (decInput + offset > 122)
        {
            cout << "Error: Final result is out of range. Consider lowering offset value." << endl;
            return 0;
        }
    else if (decInput + offset < 123)
        newChar=decInput + offset;

    cout << "New character: " << static_cast<char>(newChar) << endl;

  // offset between case = 32
  // Capital letters: DEC 65-90, Lower-case: DEC 97-122
    return 0;
}
