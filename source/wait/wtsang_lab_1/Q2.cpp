#include <iostream>
using namespace std;

int main()
{
	// Assign x as input for choosing different conversion
	int x;
	cout<<"Pints to Liters (enter 0)"<<endl;
	cout<<"Pints to Cups (enter 1)"<<endl;
	cout<<"Cups to Pints (enter 2)"<<endl;
	cout<<"Cups to Liters (enter 3)"<<endl;
	cout<<"Liters to Pints (enter 4)"<<endl;
	cout<<"Liters to Cups (enter 5)"<<endl;
	cout<<"?: ";
	cin>> x;

	// Check if input is value is valid
	while (x<0 || x>5)
	{
		cout<<"Error! Enter 0-5 only for conversion:";
		cin>>x;
	}
	
	// Assign y as the units to be converted
	double y;
	// Assign z as the units converted to
	double z;
	// Conversion
	if (x==0)
	{
		cout<<"Enter your value in Pints: ";
		cin>>y;
		z=0.473176473*y;
		cout<<y<<" US Pints is "<<z<<" Liters."<<endl;
	}
	else if (x==1)
	{
		cout<<"Enter your value in Pints: ";
		cin>>y;
		z=2*y;
		cout<<y<<" US Pints is "<<z<<" Cups."<<endl;
	}
	else if (x==2)
	{
		cout<<"Enter your value in Cups: ";
		cin>>y;
		z=0.5*y;
		cout<<y<<" Cups is "<<z<<" Pints."<<endl;
	}
	else if (x==3)
	{
		cout<<"Enter your value in Cups: ";
		cin>>y;
		z=0.23658*y;
		cout<<y<<" Cups is "<<z<<" Liters."<<endl;
	}
	else if (x==4)
	{
		cout<<"Enter your value in Liters: ";
		cin>>y;
		z=2.1133*y;
		cout<<y<<" Liters is "<<z<<" Pints."<<endl;
	}
	else if (x==5)
	{
		cout<<"Enter your value in Liters: ";
		cin>>y;
		z=4.2267*y;
		cout<<y<<" Liters is "<<z<<" Cups."<<endl;
	}

return 0;
}
