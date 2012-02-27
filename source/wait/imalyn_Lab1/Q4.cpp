#include <iostream>
using namespace std;

int main()
{
	//prompts user for character and offset
	cout << "Enter character: "<<endl;
	char input;
	cin>> input;
	cout << "Offset (enter 0 to convert case): "<<endl;
	int num;
	cin>>num;
	if (num<0)
	{
		cout << "Please enter a non-negative offset: "<<endl;
		cin>>num;
	}
	
	//series of checks with appropriate follow-throughs for each situation
	char output;
	if (num==0) //change case
	{
		if (('A'<=input && input<='Z')|| ('a'<=input && input<='z'))
		{
			if ('A'<=input && input<='Z')
			{
				output= input+('a'-'A');
				cout << "New Character: " <<output<<endl;
			}
		
			else 
			{
				output= input-('a'-'A');
				cout << "New Character: "<< output<< endl;
			}
		}
	else
		cout << "New Character: "<< input<< endl;
	}
	else //actual offset
	{
		if (('A'<=input && input<='Z')|| ('a'<=input && input<='z')) 
		{
			output = input+num;
			if ('A'<=input && input<='Z') 
			{
				if (output>'Z')
					cout << "Valid character does not exist" <<endl;
				else 
					cout << "New Character: "<< output<< endl;
			}

			if ('a'<=input && input<='z')
			{
				if (output>'z')
					cout << "Valid character does not exist"<< endl;
				else
					cout << "New Character: "<< output<< endl;
			}
		}
		else 
		{
			cout << "Cannot use of offset on a non-letter character"<< endl;	
		}
		
	}
	
	return 0;
}