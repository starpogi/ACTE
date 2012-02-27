/*
Henry Luo
U47058961
EC327
Q2. Converting Units
*/
#include <iostream>
using namespace std;

int main()
{
	//Create our variables for the conversion
	double num,pin,cupin,lin,pout,cupout,lout;

	//We want to display all the choices for the user
	cout<<"Pints to Liters (enter 0)"<<endl<<"Pints to Cups (enter 1)"<<endl;
	cout<<"Cups to Pints (enter 2)"<<endl<<"Cups to Liters (enter 3)"<<endl;
	cout<<"Liters to Pints (enter 4)"<<endl<<"Liters to Cups (enter 5)"<<endl<<"?: ";
	cin>>num;

	//The while loop will check that the value is within the specified range
	while ((num>5)||(num<0)){
		cout<<"Error, please re-enter a number between 0 and 5: ";
		cin>>num;
	}

	/*Tells the user to enter a number in Pints, Cups, or Liters
	and converts it*/
	if (num==0){
		cout<<"Enter the amount in Pints: ";
		cin>>pin;
		lout=pin*0.4732;
		cout<<pin<<" Pints is "<<lout<<" Liters."<<endl;
	}
	else if (num==1){
		cout<<"Enter the amount in Pints: ";
		cin>>pin;
		cupout=pin*2;
		cout<<pin<<" Pints is "<<cupout<<" Liters."<<endl;
	}
	else if (num==2){
		cout<<"Enter the amount in Cups: ";
		cin>>cupin;
		pout=cupin*0.5;
		cout<<cupin<<" Cups is "<<pout<<" Pints."<<endl;
	}
	else if (num==3){
		cout<<"Enter the amount in Cups: ";
		cin>>cupin;
		lout=cupin*0.2366;
		cout<<cupin<<" Cups is "<<lout<<" Liters."<<endl;
	}
	else if (num==4){
		cout<<"Enter the amount in Liters: ";
		cin>>lin;
		pout=lin*2.1134;
		cout<<lin<<" Liters is "<<pout<<" Pints."<<endl;
	}	
	else if (num==5){
		cout<<"Enter the amount in Liters: ";
		cin>>lin;
		cupout=lin*4.2268;
		cout<<lin<<" Liters is "<<cupout<<" Cups."<<endl;
	}
	else
		cout<<"I am not sure what to do!";

	return 0;
}
