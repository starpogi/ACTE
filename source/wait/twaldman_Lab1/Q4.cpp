/*Thomas Waldman U19049962*/
#include <iostream>

using namespace std;

int main()
{
	//define input char and offset value
	char input, output;
	int offset;

	cout<<"Enter character: ";
	cin>> input;
	cout<<"Offset (enter 0 to convert case): ";
	cin>> offset;

	//check input
	while(offset<0 || (offset+input >127))
	{
		if(offset<0)
			cout<<"Error: Enter non-negative offset"<<endl;
		else
			cout<<"Error: This offset will result in a char outside the ASCII table"<<endl;
		cout<<"Offset (enter 0 to convert case): ";
		cin>> offset;
	}
	
	//Handle case if offset = 0
	if (offset == 0)
	{
		if (input>=65 && input<=90)
		{
			output = input +32;
		}
		else if (input>=97 && input<=122)
		{
			output = input - 32;
		}
		else
		{
			output = input;
		}
	}
	else
	{
		output = input + offset;
	}

	cout<< "New character: "<< output<<endl;
	return 0;
}

	
	
	
