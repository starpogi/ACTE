#include <iostream>
using namespace std;

int main()
{
	char ch,newch;
	//ask for a character
	cout<<"Please enter a character:";
	cin>>ch;
	//check if input is in the range, if not, keep asking
	while (ch<0)
	{
		cout<<"Please enter a character:";
		cin>>ch;
	}
	int offset;
	//ask for the offset
	cout<<"Please enter a non-negative integer offset (enter 0 to convert case):";
	cin>>offset;
	//check if it is positive
	while(offset<0)
	{
		cout<<"Please enter a non-negative integer offset (enter 0 to convert case):";
		cin>>offset;
	}
	//check if the newcharacter is in bound
	while ((ch+offset)>127)
	{
			int rightbd=127-ch;
			cout<<"Error, try a smaller offset between 0 and "<<rightbd<<" (enter 0 to convert case):"<<endl;
			cin>>offset;
	}
	//if offset equals to zero, 
	if (offset==0)
	{
		//uppercase to lowercase
		if (ch>=65&&ch<=90)
		{
			newch=ch+32;
			cout<<"New character: "<<newch<<endl;
		}
		//lowercase to uppercase
		else if (ch>=97&&ch<=122)
		{
			newch=ch-32;
			cout<<"New character: "<<newch<<endl;
		}
		//show the same character
		else
		{
			cout<<"New character: "<<ch<<endl;
		}
	}
	//if offset not equals to zero
	else
	{
		//newcharacter is ch+offset	
		newch=ch+offset;
		cout<<"New character: "<<newch<<endl;
	}
	return 0;
}
