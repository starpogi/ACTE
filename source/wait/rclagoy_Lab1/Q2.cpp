#include <iomanip>
#include <iostream>
using namespace std;

int main () {
//Initialize variables, and print out options.
int option;
double amount, converted;

	cout<<"Pints to Liters (enter 0)"<<endl;
	cout<<"Pints to Cups (enter 1)"<<endl;
	cout<<"Cups to Pints (enter 2)"<<endl;
	cout<<"Cups to Liters (enter 3)"<<endl;
	cout<<"Liters to Pints (enter 4)"<<endl;
	cout<<"Liters to Cups (enter 5)"<<endl;
	cout<<"?: ";
	cin>>option;
while (option>=6 ||  option <0){
	cout<<"Error: Please enter a valid value: ";
	cin>>option;
}

//This is what takes the input and directs the program in the right direction.
//Setprecision and fixed is used to keep two decimal places in the printout.
switch (option){

	case 0:
	//Pints to Liters
	cout<<"Enter the amount in Pints: ";
	cin>>amount;
	converted=0.473*amount;
	cout<<fixed<<setprecision(2)<<amount<<" Pints is "<<fixed<<setprecision(2)<<converted<< " Liters."<<endl;
	break;

	case 1:
	//Pints to Cups
	cout<<"Enter the amount in Pints: ";
	cin>>amount;
	converted=2*amount;
	cout<<fixed<<setprecision(2)<<amount<<" Pints is "<<fixed<<setprecision(2)<<converted<< " Cups."<<endl;
	break;
	
	case 2:
	//Cups to Pints
	cout<<"Enter the amount in Cups: ";
	cin>>amount;
	converted=0.5*amount;
	cout<<fixed<<setprecision(2)<<amount<<" Cups is "<<fixed<<setprecision(2)<<converted<< " Pints."<<endl;
	break;
	
	case 3:
	//Cups to Liters
	cout<<"Enter the amount in Cups: ";
	cin>>amount;
	converted=.2366*amount;
	cout<<fixed<<setprecision(2)<<amount<<" Cups is "<<fixed<<setprecision(2)<<converted<< " Liters."<<endl;
	break;
	
	case 4:
	//Liters to Pints
	cout<<"Enter the amount in Liters: ";
	cin>>amount;
	converted=2.1134*amount;
	cout<<fixed<<setprecision(2)<<amount<<" Liters is "<<fixed<<setprecision(2)<<converted<< " Pints."<<endl;
	break;
	
	case 5:
	//Liters to Cups
	cout<<"Enter the amount in Liters: ";
	cin>>amount;
	converted=4.2268*amount;
	cout<<fixed<<setprecision(2)<<amount<<" Liters is "<<fixed<<setprecision(2)<<converted<< " Cups."<<endl;
	break;

	}
}

