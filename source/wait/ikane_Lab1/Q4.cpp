/* Ita Kane, lab 1, question 4, EC327, Spring 2012*/

#include <iostream>
using namespace std;

int main() {
        //Defining and initilizing variables
        char char1, newchar;
        int offset, newascii, asciival;
        int var=1;
        int var2=1;
        //While loop checks for combinations of charecters and offsets that are to high
        while (var)
        {
        //Promts user to enter charecter and offsets
        cout<< "Enter character: ";
        cin>> char1;
        //while loop error checks for negative offcets
        while (var2)
        {
                cout<< "Offset (enter 0 to convert case): ";
                cin>> offset;
                if (offset>=0)
                var2=0;
                else
                cout<<"The offset must be a non-negative integer.  Please re-enter the offset"<<endl;
        }
        asciival= static_cast <int>(char1);
        //for cases of the offset =0, checks if the char is uppercase lowwercase or niether and then either changes the case or keeps the char the same
        if (offset==0)
        {
                if (asciival>=65 && asciival<=90)
                        newascii=asciival+32;
                else if(asciival>=95 && asciival<=122)
                        newascii=asciival-32;
                else
                        newascii=asciival;
                newchar= static_cast <char>(newascii);
                var=0;
        }
        //for cases where the offset is between 1 and 127-the asciii value the offset is simply added to the char
        else if (asciival+offset<=127)
        {
                newascii=asciival+offset;
                var=0;
        }
        else
        //promts the user to reeneter valuse because the combination of the ascii and the offset is above 127
        {
                cout<<"Combination of the characters ascii value and the output is to high.  Please reenter values."<<endl;
                var2=1;
        }
        }
        //switched new ascii value to a char and outputs the result
        newchar= static_cast <char>(newascii);
        cout<< "New Character: "<< newchar<< endl;
return 0;
}

