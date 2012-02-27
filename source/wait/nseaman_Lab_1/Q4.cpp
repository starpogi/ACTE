#include<iostream>
using namespace std;

int main ()
{
    int offset;
    char character;

    cout<<"Enter a character:";
    cin>>character;
    cout<<"Enter an integer offset:";
    cin>>offset;
    while (offset < 0)
    {
        cout<<"Please try again. Enter a positive number as the offset:";
        cin>>offset;
    }

    if(offset == 0)
    {
        if((character >= 'A')&&(character <='Z'))
            character = character+32;
        else if((character>='a')&&(character<='z'))
            character = character-32;
        else
            character = character;
    }

    if (character + offset <= 127)
    {
        character = character + offset;
        cout<<"New character is "<<character<<endl;
    }
    else
        cout<<"Error. Offset is out of bounds."<<endl;

    return 0;
}
