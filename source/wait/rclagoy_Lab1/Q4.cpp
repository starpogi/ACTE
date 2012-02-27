#include <iostream>
using namespace std;

int main() {
//Define the offset and characters.
	int offset;
	char character;
//Take in the character and offset, respectively.	
	cout<<"Enter character: ";
	cin>>character;
	
	cout<<"Offset (enter 0 to convert case): ";
	cin>>offset;

//determine the integer value of the character.
	int charval=static_cast<int>(character);

//Error check to see if the value of the character + the offset is greater than the highest valued
//ascii character "~".
	while(offset<0 || offset>127-charval) {
		
		cout<<"Error: Offset value needs to be between 0 and "<<127-charval<< ". Enter another value: ";
		cin>>offset;
	}  	

//Pretending to not know what the ascii values for the bounds of the lowercase and
//uppercase, I find them in a loop. Start with each bound at zero, basically I have 
//the program loop until it reaches a, z, A, and Z respectively. The bound is then recorded.
	int lowlc=0;
	int highlc=0;
	int lowuc=0;
	int highuc=0;

        while(static_cast<char>(lowlc)!='a'){
		lowlc=lowlc+1;
	}
	while(static_cast<char>(highlc)!='z'){
		highlc=highlc+1;
	}

        while(static_cast<char>(lowuc)!='A'){
		lowuc=lowuc+1;
	}
	while(static_cast<char>(highuc)!='Z'){
		highuc=highuc+1;
	}

//This will capitalize/uncapitalize the characters of the alphabet.
	if (offset==0){
		if (charval>=lowlc && charval<=highlc){
			int dif=highlc-charval;
			character=highuc-dif;
			}
		if (charval>=lowuc && charval<=highuc){
			int dif=highuc-charval;
			character=highlc-dif;
			}
	}
	else {
			character=character+offset;
	}	
//This outputs the new character.
	cout<<"New character: "<<character<<endl;

}

