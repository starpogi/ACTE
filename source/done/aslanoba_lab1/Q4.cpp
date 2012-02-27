#include <iostream>
using namespace std;

int main ()
{
    //Uppercase is before lowercase, i.e A=65 a=97
    //X is the max limit. The range of ASCII characters is 0-127 --> 128bits
    
    //Prompt the user for a character and then an offset
    
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    int i=ch;
    
    int offset;
    cout<<"Offset (enter 0 to convert case): ";
    cin>>offset;
    
    //Error check that the offset is valid
    while (offset<0)
    {
        cout<<"Enter a nonnegative integer offset: ";
        cin>>offset;
        if (offset >=0) break;
    }
    
    while (offset+i>127)
    {
        cout<<"Enter another offset: ";
        cin>>offset;
        if (offset+i<127) break;
    }
    
    if ((offset!=0) && (i+offset<127))
    {
        cout<<"New character: "<<static_cast<char>(offset+i)<<endl;
    }
    
    else if ((offset==0) && (i>=97 && i<=122))     //if lowercase
    {   
        cout<<"New character: "<<static_cast<char>(i-32)<<endl;    //to upper
    }
    
    else if ((offset==0) && (i>=65 && i<=90))      //if uppercase
    {
        cout<<"New character: "<<static_cast<char>(i+32)<<endl;    //to lower
    }
    
    else if ((offset==0 && (i<97 && i>90)) || (offset==0 && i<65) || (offset==0 && i>122))
    {
        cout<<"New character: "<<ch<<endl;
    }
    
    return 0;
}
