#include <iostream>

using namespace std;

int main()
{
//Initialize variables
int innum,offset,outnum;
char inchar;
//Prompt for inputs
cout<<"Enter character: ";
cin>>inchar;
cout<<"Offset: ";
cin>>offset;
//Error check inputs
while (offset <0)
    {
        cout<<"The Offset cannot be negative. Enter a new Offset: ";
        cin>>offset;
    }
innum = static_cast<int>(inchar);
while (offset+innum>255)
    {
        cout<<"The Offset is too large. Enter a new Offset: ";
        cin>>offset;
    }
//Calculate output
outnum = innum + offset;
if (offset == 0)
    {
        if (innum>96&& innum<123)
        {
            outnum = innum-32;
        }
        else if (innum>64 && innum <91)
        {
            outnum = innum+32;
        }
        else
        {
            outnum = innum;
        }
    }
cout<<"New Character: "<<static_cast<char>(outnum)<<endl;
}

