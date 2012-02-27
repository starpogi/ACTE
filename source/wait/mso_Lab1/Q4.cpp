// Michelle So U57477532
// This script prompts the user for a character and an offset. It changes the character's ASCII value by its offset and prints the new character. If the offset is 0, the case is changed. 

#include <iostream>
using namespace std;

int main() {
  int offset,test;
  char inChar;

//Prompt for inputs; error checking 
cout<< "Enter character: ";
cin>> inChar;
inChar= static_cast<int>(inChar);

cout<< "Offset (enter 0 to convert case): ";
cin>> offset;

if (offset<0 || offset+inChar>127) {
cout<< "Error: Enter a valid offset greater than zero: ";
cin>> offset;}

//If the offset is 0, change case. In order: lower to upper, then upper to lowe
if (offset==0) {
	if (inChar>=65 && inChar<=90) 
		test= inChar+32;
	else if (inChar>=97 && inChar<=122)
	 	test= inChar-32;
	else
		test= inChar;
}
//Otherwise just add offset and inChar

 else{
   test= inChar+offset;
   if (test >127) {
   cout<< "Error: Offset was too high."<<endl;}
 }
//convert outChar to character and print
cout<<"New character: " <<static_cast<char>(test)<< endl;

return 0;}
