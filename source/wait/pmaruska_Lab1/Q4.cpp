/* 
 * File:   Q4.cpp
 * Author: Patrick Maruska
 * 
 * This program take a character being a letter or digit.  It then takes an
 * offset, which is a normal number.  If the offset is 0 then it changes the
 * case of the character.  If the character is a digit then it just returns
 * the same number.  If the offset would make the given character not a number
 * or digit then it gives an error stating that it is a bad offset.
 * 
 * Characters are the things we love
 * And digits, too, in there we'll shove
 * We'll take any offset you can think of
 * But we throw it out 'les it fit like a glove
 *
 * Created on February 20, 2012, 5:02 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
    char original;
    int offset;
    cout << "Enter character:";
    cin >> original;
    cout << "Offset (enter 0 to convert case):";
    do
    {
        cin >> offset;
        if (offset < 0)
            cout << "Please input a number greater than or equal to 0" << endl;
    } while (offset < 0);
    
    if(original >= 97 && original <= 122)
    {
        if(offset != 0)
        {
            if(original + offset > 122)
                cout << "You gave an invalid offset.";
            else
                cout << "New character: " << char (original + offset) << endl;
        }
        else
        {
            cout << "New character: " << char (original - 32) << endl;
        }
    }
    else if(original >= 65 && original <= 90)
    {
        if(offset != 0)
        {
            if(original + offset > 90)
                cout << "You gave an invalid offset.";
            else
                cout << "New character: " << char (original + offset) << endl;
        }
        else
        {
            cout << "New character: " << char (original + 32) << endl;
        }
    } else if(original >= 48 && original <= 57)
    {
        if(original + offset > 57)
                cout << "You gave an invalid offset.";
            else
                cout << "New character: " << char (original + offset) << endl;
    }
    else
        cout << "You gave an invalid character.";
    
    
    return 0;
}

