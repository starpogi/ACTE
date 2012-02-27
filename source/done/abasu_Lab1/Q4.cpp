#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    
    // declare variables
    char let;
    int offset;
    char newlet;
    
    // input character
    cout << "Enter character: ";
    cin >> let;
    
    // input offset
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset; 
    
    // check for non-negative values for offset
    while (offset < 0)
    {
          cout << "Please enter offset ( >= 0): ";
          cin >> offset;
    }
    
    // check if sum is within ASCII range
    while ((let + offset) > 127){
                cout << "Please be within the ASCII range." << endl;
                cout << "Please re-enter a character: " << endl;
                cin >> let;
                cout << "Please re-enter offset (>=0): " << endl;
                cin >> offset;
    }
    
    // converting case
    if (offset == 0)
    {
        if (let >= 65 && let <=90)
            newlet = let + 32;
        else if (let >= 97 && let <= 122)
            newlet = let - 32;
        else 
            newlet = let + offset;
    }
    
    // for offsets not equal to zero
    else { 
        newlet = let + offset;
    }
    
    // output new character
    cout << "New character: " << newlet << endl;
    
    return 0;
}
