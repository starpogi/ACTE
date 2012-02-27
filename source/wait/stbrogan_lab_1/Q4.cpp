//Probelm 4.
#include <iostream>
using namespace std;

int main() {
int end;
do{
char ch;//Defining a character.
cout<<"Please Enter Character: ";
cin>>ch;

cout<<"Please enter an offset greater than 0. Or press 0 if you would like to convert the case: ";
int offset;//Defining an offset as an integer.
cin>>offset;
char new_char;// Defining a character.

if(offset<0)
{
cout<<"Please enter an offset >= 0"<<endl;// Error check if an offset less than 0 is enetered.
return 0;
}

if(offset==0 && ch>=65 && ch<=90)

new_char=32+ch;//Converts case.

else if(offset==0 && ch>=97 && ch<=122)
new_char=-32+ch;//Converts case.

else if(ch+offset>127)
cout<<"Please enter an offset less than 127: "<<endl;

else
new_char = ch+offset;//Adds integer and character.


cout<<"New Character is: "<< new_char <<endl;
cout<< "If you would like return to the beginning press 1. If not press 2: ";
cin>> end;
}while (end == 1);

return 0;

}
