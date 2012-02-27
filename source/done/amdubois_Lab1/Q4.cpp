#include <iostream> 
using namespace std;
int main(){
//declare variables
char mychar;
char newchar;
int newchar2;
int offset;
int mychar2;
//Prompt user for character
cout<<"Enter character: "<<endl;
cin>>mychar;

//Store integer value of that character
mychar2= static_cast<int>(mychar);

//Prompt user for offset
cout<<"Offset (enter 0 to convert case): "<<endl;
cin>>offset;

//Error check to see if new character will be out of range
while ((offset+mychar2 > 127) || (offset <0)){
cout<<"Out of range, enter a new offset: "<<endl;
cin>>offset;}


if (offset==0){
	//offset is 0 and character is lowercase
	if (mychar2 >=  97 && mychar2 <= 122){
	newchar2= mychar2-32;}
	//offset is 0 and character is uppercase
	else if (mychar2>=65 && mychar2 <=90){
	newchar2= mychar2+32;}
	//offset is 0 and character isn't a letter
	else {
	newchar2=mychar2;}}

if (offset != 0){
newchar2= mychar2+offset;}

//cast answer into a character, it is currently an int
newchar= static_cast<char>(newchar2);

cout<<"New character: "<<newchar<<endl;

return 0;
}
