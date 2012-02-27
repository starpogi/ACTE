/*
 * q2.cpp
 *
 *	EC327 Lab 1 Q2
 *  Created on: Feb 8, 2012
 *      Author: joerafalak
 */

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{


	//initialize variables for later
	int convtype;
	double amt1;
	double amt2;

	//User selects conversion type
	cout<<"Select the conversion type: "<<endl;
	cout<<"Pints to cups (enter 0)"<<endl;
	cout<<"Pints to liters (enter 1)"<<endl;
	cout<<"Cups to pints (enter 2)"<<endl;
	cout<<"Cups to liters (enter 3)"<<endl;
	cout<<"Liters to cups (enter 4)"<<endl;
	cout<<"Liters to pints (enter 5)"<<endl;
	cin>>convtype;

	//error checking that the conversion number is valid
	while(convtype>5 || convtype<0)
	{
		cout<<"Invalid conversion type, please re-enter: "<<endl;
		cin>>convtype;
	}

	//conversion
	switch(convtype)
	{
		case 0: cout<<"Enter the amount in pints: "<<endl;
				cin>>amt1;
				amt2 = amt1*2;
				cout<<setprecision(4)<<amt1<<" in pints is "<<setprecision(4)<<amt2<<" in cups"<<endl;
				break;
		case 1: cout<<"Enter the amount in pints: "<<endl;
				cin>>amt1;
				amt2 = amt1*0.473176473;
				cout<<setprecision(4)<<amt1<<" in pints is "<<setprecision(4)<<amt2<<" in liters"<<endl;
				break;
		case 2: cout<<"Enter the amount in cups: "<<endl;
				cin>>amt1;
				amt2 = amt1*0.5;
				cout<<setprecision(4)<<amt1<<" in cups is "<<setprecision(4)<<amt2<<" in pints"<<endl;
				break;
		case 3: cout<<"Enter the amount in cups: "<<endl;
				cin>>amt1;
				amt2 = amt1*0.236588236;
				cout<<setprecision(4)<<amt1<<" in cups is "<<setprecision(4)<<amt2<<" in liters"<<endl;
				break;
		case 4: cout<<"Enter the amount in liters: "<<endl;
				cin>>amt1;
				amt2 = amt1*4.22675284;
				cout<<setprecision(4)<<amt1<<" in liters is "<<setprecision(4)<<amt2<<" in cups"<<endl;
				break;
		case 5: cout<<"Enter the amount in liters: "<<endl;
				cin>>amt1;
				amt2 = amt1*2.11337642;
				cout<<setprecision(4)<<amt1<<" in liters is "<<setprecision(4)<<amt2<<" in pints"<<endl;
				break;
		default:cout<<"Error: invalid conversion number."<<endl;
				break;
	}
	return 0;
}
