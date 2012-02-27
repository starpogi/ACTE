/*
 * Michael Abed <mgabed@bu.edu>
 *
 * Lab 1 Problem 4
 *
 * Convert a letter based on an offset. 
 */

#include <iostream>

using namespace std;

int main()
{
    
    char input;
    int offset;
    int caseswap = 'a' - 'A';

    cout << "Enter character: ";
    cin >> input; // any character will do

    do { // validate input
        cout << "Offset (enter 0 to convert case): ";
        cin >> offset;
        if (offset < 0)
            cout << "Offset must be positive" << endl;
        if (offset >= 128)
            cout << "Offset must be less than 128" << endl;
    } while (offset < 0 || offset >= 128);
    
    char knew;
    // calculate new character
    if (offset == 0 && input >= 'A' && input <= 'Z')
        knew = input + caseswap;
    else if (offset == 0 && input >= 'a' && input <= 'z')
        knew = input - caseswap;
    else if (offset == 0)
        knew = input;
    else
        knew = input + offset;
    
    if (input + offset > '~' ) // larger is non printing
        cout << "Result outside of ASCII range" << endl;
    else
        cout << "New character: " << knew << endl;

    return 0;
}
