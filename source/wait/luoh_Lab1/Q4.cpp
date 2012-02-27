/*
Henry Luo
U47058961
EC327
Q4 Converting Letter. 
*/
#include <iostream>
using namespace std;

int main()
{
	//Create the input as a character we can use later, and the integers.
	char char1;
	int int1,off,out1,out2;

	/*Prompt the user for a character and an offset and store them.
	Also, the offset must be greater than zero. Error check for it.*/
	cout<<"Enter character: ";
	cin>>char1;
	cout<<"Offset (enter 0 to convert case): ";
	cin>>off;
	while (off<0){
		cout<<"Error! Enter an offset greater than or equal to zero: ";
		cin>>off;
	}

	/*If offset is zero, first cast the character into it's ASCII 
	equivalent and check if it's a letter, if not cast it back
	into it's own character.
	If character is a letter, change its case.*/
	if (off==0){
		int1=static_cast<int>(char1);
		if (!(int1>=65 && int1<=90) || !(int1>=97 && int1<=122))
			cout<<"New Character: "<<static_cast<char>(int1)<<endl;
		else
			if (int1>=65 && int1<=90){
				out1=int1+32;
				cout<<"New Character: "<<static_cast<char>(out1)<<endl;
			}
			else if (int1>=97 && int1<=122){
				out1=int1-32;
				cout<<"New Character: "<<static_cast<char>(out1)<<endl;
			}
			else
				cout<<"Out of Range!"<<endl;
	}

	/*If offset is not zero, offset that it by how much the user input
	and check if it's in range of the ASCII table, then print out the
	new character.*/
	else{
		int1=static_cast<int>(char1);
		out2=int1+off;
		if (out2<0 || out2>127)
			cout<<"Error! Out of Range!"<<endl;
		else
			cout<<"New Character: "<<static_cast<char>(out2)<<endl;
	}

	return 0;
}
