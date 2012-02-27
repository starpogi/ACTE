#include <iostream>
using namespace std;


int main()
{
	//Initialize variables
	char charIn;
	int in;
	int offset;
	int out;
	char charOut;
	
	//Input character
	cout << "Enter character:";
	cin >> charIn;
	in = static_cast<int>(charIn);
	
	//Input offset
	cout << "Offset (enter 0 to convert case):";
	cin >> offset;
	
	//Check for negative input
	while(offset < 0)
	{
		cout << "Please enter positive offset:";
		cin >> offset;
	}
	
	//Check for case change option
	if(offset == 0)
	{
		if(in > 64 && in < 91){
			out = in + 32;}

		else if(in > 96 && in < 123){
			out = in - 32;}
	}
	else
		out = in + offset;

	
	charOut = static_cast<char>(out);
	
	//Check to see if the offset puts the output out of ASCII range
	if(out > 127)
		cout << "Input + Offset does not result in an ASCII character"<<endl;
	else
		cout << "New character:" << charOut << endl;


	return 0;
}