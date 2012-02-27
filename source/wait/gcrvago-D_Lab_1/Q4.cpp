//Character offset/conversion program

#include <iostream>
using namespace std;

int main(){
	char in,newchar;
	int offset, index;
	bool test=1;

	cout<<"Enter character: ";//Input a character
	cin>>in;

	while (test){//loop until a valid offset is entered
		cout<<"Offset (enter 0 to convert case): ";
		cin>>offset;
		index=static_cast<int>(in)+offset;
		if (offset<0||index>126)//checks if index is within the range of printable characters
			cout<<"ERROR: Try again"<<endl;
		else{//ends loop and sets newchar
			test=0;
			newchar=static_cast<char>(index);
		}
	}
	
	if(!offset){//case where offset is 0
	  if (in>64&&in<91)//checks is character is a letter
			newchar=in+32;
		else if (in>96&&in<123)
			newchar=in-32;
		else
			newchar=in;
	}
	//print final output
	cout<<"New character: "<<newchar<<endl;

	return 0;
}



