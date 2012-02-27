/*David Zou, U49526734, 2/11/12
 *This program asks the user for a character and an offset, and changes the 
 *character depending on the offset.
  */

#include <iostream>
using namespace std;

int main(){
	char oldChar,newChar;
	int  offset;
	cout<<"Enter character: ";
	cin>> oldChar;
	cout<<"Offset (enter 0 to convert case): ";
	cin>>offset;

	while (offset<0 || offset+oldChar>127){
		cout<<"Invalid offset. Please enter a new offset: ";
		cin>>offset;
	}

	if (offset==0){
		//Change the case if the offset is 0 and the character is a letter of alphabet
		if(oldChar >='A' && oldChar <='Z'){
			newChar= oldChar+('a'-'A');
		}else if(oldChar >='a' && oldChar <='z'){
			newChar= oldChar-('a'-'A');
		}else{
			newChar= oldChar;
		}
	}else{
		//Otherwise, increase the character by the offset
		newChar=oldChar+offset;
	}

	cout<<"New Character: "<<newChar<<endl;

	return 0;
}



