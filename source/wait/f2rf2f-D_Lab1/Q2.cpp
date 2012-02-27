/*David Zou, U49526734, 2/11/12
 *This program converts the volume units.
 */

#include <iostream>
using namespace std;

int main(){
	//Initialize the variables for the choice of conversion and the number that
	//the user wants to convert
	int choice;
	double value;

	cout<<"Pints to Liters (enter 0)"<<endl
		<<"Pints to Cups (enter 1)"<<endl
		<<"Cups to Pints (enter 2)"<<endl
		<<"Cups to Liters (enter 3)"<<endl
		<<"Liters to Pints (enter 4)"<<endl
		<<"Liters to Cups (enter 5)"<<endl
		<<"?: ";

	//Gets the choice from the user and error check to make sure
	//it's between 0 and 5
	cin>>choice;
	while (choice>5 || choice<0){
		cout<<"Error, value must be between 0 and 5. Please Try again: ";
		cin>>choice;
	}
	
	//Performs different conversions depending on which choice the user selects
	switch (choice){
		//Converts Pints to Liters
		case 0:
			cout<<"Enter the amount in Pints: ";
			cin>>value;
			while (value<=0){
				cout<<"Error, value must be greater than 0. Please Try again: ";
				cin>>value;
			}
			cout<<value<< " Pints is "<< value*0.473<<" Liters."<<endl;
			break;

		//Converts Pints to Cups
		case 1:
			cout<<"Enter the amount in Pints: ";
			cin>>value;
			while (value<=0){
				cout<<"Error, value must be greater than 0. Please Try again: ";
				cin>>value;
			} 
			cout<<value<< " Pints is "<< value*2.0<<" Cups."<<endl;
			break;
        
		//Converts Cups to Pints
		case 2:
			cout<<"Enter the amount in Cups: ";
			cin>>value;
			while (value<=0){
				cout<<"Error, value must be greater than 0. Please Try again: ";
				cin>>value;
			}
			cout<<value<< " Cups is "<< value*0.5<<" Pints."<<endl;
			break;

		//Converts Cups to Liters		
		case 3:
			cout<<"Enter the amount in Cups: ";
			cin>>value;
			while (value<=0){
				cout<<"Error, value must be greater than 0. Please Try again: ";
				cin>>value;
			}
			cout<<value<< " Cups is "<< value*0.2366<<" Liters."<<endl;
			break;

		//Converts Liters to Pints
		case 4:
			cout<<"Enter the amount in Liters: ";
			cin>>value;
			while (value<=0){
				cout<<"Error, value must be greater than 0. Please Try again: ";
				cin>>value;
			}
			cout<<value<< " Liters is "<< value*2.113<<" Pints."<<endl;
			break;

		//Converts Liters to Cups		
		case 5:
			cout<<"Enter the amount in Liters: ";
			cin>>value;
			while (value<=0){
				cout<<"Error, value must be greater than 0. Please Try again: ";
				cin>>value;
			}
			cout<<value<< " Liters is "<< value* 4.227<<" Cups."<<endl;
			break;

		default:
			cout<<"Error, value must be between 0 and 5.";
			return 0;
		}


		
	//Q: can the values be 0?
	return 0;
}
