#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

//Initialize variables.
int choice;
double amount;

//Display choice menu.
cout << " Pints to Liters(enter 0) " << endl; 
cout <<	" Pints to Cups(enter 1) " << endl;
cout <<	" Cups to Pints(enter 2) " << endl;
cout << " Cups to Liters(enter 3) " << endl;
cout <<	" Liters to Pints(enter 4) " << endl;
cout <<	" Liters to Cups (enter 5) " << endl;
cout <<	" ?: ";

//Read in choice, and error check to make sure selection is between 0 and 5.
cin >> choice ;
while(choice <0 || choice >5 ){
	cout << "ERROR : Enter a choice 0-5 : ";
	cin >> choice;
}

//Depending on user input, compute conversion.
switch (choice)
	{
	case 0:
		cout << "Enter the amount in Pints:";
		cin >> amount;
		while(amount <0){
		cout << "ERROR : Enter a Positive Value : ";
		cin >> amount;}
		cout << amount << " Pints is " << setprecision(2) << fixed << amount * 0.473176473 << " Liters" << endl;
		break;
	case 1:
		cout << "Enter the amount in Pints:";
		cin >> amount;
		while(amount <0){
		cout << "ERROR : Enter a Positive Value : ";
		cin >> amount;}
		cout << amount << " Pints is " <<  setprecision(2) << fixed << amount * 2.0 << " Cups" << endl;
		break;
	case 2:
		cout << "Enter the amount in Cups:";
		cin >> amount;
		while(amount <0){
		cout << "ERROR : Enter a Positive Value : ";
		cin >> amount;}
		cout << amount << " Cups is " <<  setprecision(2) << fixed << amount * (1/2.0) << " Pints" << endl;
		break;
	case 3:
		cout << "Enter the amount in Cups:";
		cin >> amount;
		while(amount <0){
		cout << "ERROR : Enter a Positive Value : ";
		cin >> amount;}
		cout << amount << " Cups is " <<  setprecision(2) << fixed << amount * 0.236588236 << " Liters" << endl;
		break;
	case 4:
		cout << "Enter the amount in Liters:";
		cin >> amount;
		while(amount <0){
		cout << "ERROR : Enter a Positive Value : ";
		cin >> amount;}
		cout << amount << " Liters is " <<  setprecision(2) << fixed << amount * 2.11337642 << " Pints" << endl;
		break;
	case 5:
		cout << "Enter the amount in Liters:";
		cin >> amount;
		while(amount <0){
		cout << "ERROR : Enter a Positive Value : ";
		cin >> amount;}
		cout << amount << " Liters is " <<  setprecision(2) << fixed << amount * 4.22675284 << " Cups" << endl;
		break; 
	}

return 0 ;

}


