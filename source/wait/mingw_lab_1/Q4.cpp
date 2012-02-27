/***********************************************************************
* Yingming Wang U82513434
* Lab 1 Question #4
* Letter Conversion: offset the letter entered to get the desired output
************************************************************************/

#include <iostream>

using namespace std;
int main(){
	char letter; 
	int offset;
	char newletter;
	cout <<"Enter character: ";
	cin >> letter;	
	cout <<"Offset (enter 0 to convert case): ";
	cin >> offset;
	if (offset < 0) {cout<<"error"<<endl;return 0};
	//If offset to a negative number, quit program.
	else{
	int check = static_cast <int>(letter);
	//created check to test if valid.
	int result = check + offset;
		if (result >= 0 && result <=127){	
			if (offset ==0){ 
				if (check > 47 && check < 58)
				newletter = letter + offset;
				else if (check <123 && check > 96)
				newletter = static_cast<char> (check - 32);
				else 
				newletter = static_cast<char> (check + 32);
	
				}
					
		
			else {newletter = static_cast<char> (result);}
		}
		//if offset go out of the ASCII table range, display error quit.
		else {cout<<"offset off the range."<<endl; return 0;} 
	}

	cout <<"New character: "<<newletter<<endl;
	return 0;	
}
