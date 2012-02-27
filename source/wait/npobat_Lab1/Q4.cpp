// Question 4
# include <iostream>
using namespace std;

int main() {
cout<<"Enter Character: ";	// displays the statement
char cha;	// declares cha as a character
cin>>cha;	// allows the user to input a value for cha

cout<<"Offset (enter 0 to convert case): ";	// displays the statement
int off;	// declares off as an integer
cin>>off;	// allows the user to input a value for off
char newc;	// declares newc to be a character

if(off<0)	// if the offset is less than 0 execute this if statement
{
cout<<"Please enter a positive offset"<<endl;	// displays the statement
return 0;	// terminates the program
}

if(off==0 && cha>=65 && cha<=90)	// if off is 0 and the inputted character has an ascii value between 65 and 90 execute this if statement
newc=32+cha;	// adds 32 to the ascii value of the inputted character to turn it lower case

else if(off==0 && cha>=97 && cha<=122)	// if off is 0 and the inputted character has an ascii value between 97 and 122 execute this if statement
newc=-32+cha;	// subtracts 32 from the ascii value of the inputted character to turn it upper case

else if(cha+off>127)	// if the ascii value of the inputted character plus the inputted offset is greater than 127, the highest ascii value, execute this if statement
cout<<"Please enter a smaller offset"<<endl;	// displays the statement

else	// if the addition of ascii value of the character and offset are less than 127
newc=cha+off;	// adds the offset to the ascii value of the character


cout<<"New Character: "<<newc<<endl;	// displays the statement filling in the new character for newc

return 0;	// terminates the program

}
