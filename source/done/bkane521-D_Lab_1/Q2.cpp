#include<iostream>
using namespace std;

int main()
{
	double finished;																				//Used to do multiple conversions, as described below
	do
	{
		double choice;																				//Stores whitch conversion the user chooses
		double value;																				//Stores the value to be converted
		double result;																				//Stores the result of the conversion
		
	
		// List options and input user choice for conversion. store in variable "choice"
	
		cout<<"Enter 0-5 to choose the corresponding conversion."<<endl<<
			"Pints to Liters (enter 0)"<<endl<<
			"Pints to Cups (enter 1)"<<endl<<
			"Cups to Pints (enter 2)"<<endl<<
			"Cups to Liters (enter 3)"<<endl<<
			"Liters to Pints (enter 4)"<<endl<<
			"Liters to Cups (enter 5)"<<endl<<
			"?: "<<endl;
		do																							//I used a do-while loops to execute the program
			{																						//at least once, while leaving the option to run it
			cin>>choice;																			//multiple times by defining the 'finished' variable
			if (choice<0 || choice>5)																//as '1' at the end of each iteration. I also
				cout<<"Invalid selection; please enter an integer between 0 and 5."<<endl;			//implemented them to loop the user inputs in the
			} while(choice<0 || choice>5);															//event they gave an illegal inputs, as seen here.
	
		if (choice == 0)																			//Here ive used if statements for each possible
			{																						//user input, defining the result based on the 
			cout<<"You have chosen to convert pints to liters."<<endl<<"Enter number of pints: ";	//corresponding conversation ratio.
			cin>>value;
			result = (0.4731 * value);
			cout<<endl<<value<<" pints is equal to "<<result<<" liters."<<endl;
			}
		if (choice == 1)
			{
			cout<<"You have chosen to convert pints to cups."<<endl<<"Enter number of pints: ";
			cin>>value;
			result = (2 * value);
			cout<<endl<<value<<" pints is equal to "<<result<<" cups."<<endl;
			}
		if (choice == 2)
			{
			cout<<"You have chosen to convert cups to pints."<<endl<<"Enter number of cups: ";
			cin>>value;
			result = (value/2);
			cout<<endl<<value<<" cups is equal to "<<result<<" pints."<<endl;
			}
		if (choice == 3)
			{
			cout<<"You have chosen to convert cups to liters."<<endl<<"Enter number of cups: ";
			cin>>value;
			result = (value * 0.2366);
			cout<<endl<<value<<" pints is cups to "<<result<<" liters."<<endl;
			}
		if (choice == 4)
			{
			cout<<"You have chosen to convert liters to pints."<<endl<<"Enter number of liters: ";
			cin>>value;
			result = (value * 2.1112);
			cout<<endl<<value<<" liters is equal to "<<result<<" pints."<<endl;
			}
		if (choice == 5)
			{
			cout<<"You have chosen to convert liters to cups."<<endl<<"Enter number of liters: ";
			cin>>value;
			result = (value * 4.2224);
			cout<<endl<<value<<" liters is equal to "<<result<<" cups."<<endl;
			}
		cout<<"Enter '1' to perform another conversion."<<endl;										//Here is where the user is given the option
		cin>>finished;																				//to loop the program before termination
		
	} while(finished==1);
	return 0;
}
		