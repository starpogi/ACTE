/* Program that performs conversions between Pints, Cups and Liters */

#include <iostream>
using namespace std;

int main()
{
	int status;										//variable for swtich statements
	double input;									//variable for conversions input

	cout<<"Pints to Liters (enter 0)"<<endl;		//Printing the menu
	cout<<"Pints to Cups (enter 1)"<<endl;
	cout<<"Cups to Pints (enter 2)"<<endl;
	cout<<"Cups to Liters (enter 3)"<<endl;
	cout<<"Liters to Pints (enter 4)"<<endl;
	cout<<"Liters to Cups (enter 5)"<<endl;
	cout<<"Exit (enter 6)"<<endl;
	cout<<"?: ";
	cin>>status;
	
	//switch statements in a while loop so that user can do multiple conversions
	while (status != 6)								
	{
		switch (status)
		{
			case 0:	cout<<endl<<"Enter the amount in Pints: ";
					cin>>input;
					cout<<input<<" Pints is "<<(input*0.47)<<"Liters.";
					break;

			case 1: cout<<endl<<"Enter the amount in Pints: ";
					cin>>input;
					cout<<input<<" Pints is "<<(input*2)<<"Cups.";
					break;

			case 2: cout<<endl<<"Enter the amount in Cups: ";
					cin>>input;
					cout<<input<<" Cups is "<<(input*0.5)<<"Pints.";
					break;

			case 3: cout<<endl<<"Enter the amount in Cups: ";
					cin>>input;
					cout<<input<<" Cups is "<<(input*0.24)<<"Liters.";
					break;

			case 4: cout<<endl<<"Enter the amount in Liters: ";
					cin>>input;
					cout<<input<<" Liters is "<<(input*4.23)<<"Cups.";
					break;

			case 5: cout<<"Enter the amount in Liters: ";
					cin>>input;
					cout<<input<<" Liters is "<<(input*2.11)<<"Pints.";
					break;

			default: cout<<endl<<"That is not a valid option! Enter a number 0-6"<<endl;
		}

		cout<<endl<<endl<<"Enter another option: ";
		cin>>status;
	}

	
	return 0;
}