/*Thomas Waldman U19049962*/
#include <iostream>
using namespace std;

int main()
{
	int conv;
	double val1, val2, p2l, c2p, l2c;
	p2l = 0.4732; //pints to liters
	c2p = 0.5;	//cups to pints
	l2c = 4.2268; //liters to cups
	
//read input and error check
	cout<<"Pints to Liters (Enter 0)"<<endl;
	cout<<"Pints to Cups (Enter 1)"<<endl;
	cout<<"Cups to Pints (Enter 2)"<<endl;
	cout<<"Cups to Liters (Enter 3)"<<endl;
	cout<<"Liters to Pints (Enter 4)"<<endl;
	cout<<"Liters to Cups (Enter 5)"<<endl;
	cout<<"?: ";
	cin>> conv;
	
	while (conv<0 || conv>5)
	{
		cout<<"Error: Enter integer 0-5"<<endl;
		cout<<"Pints to Liters (Enter 0)"<<endl;
		cout<<"Pints to Cups (Enter 1)"<<endl;
		cout<<"Cups to Pints (Enter 2)"<<endl;
		cout<<"Cups to Liters (Enter 3)"<<endl;
		cout<<"Liters to Pints (Enter 4)"<<endl;
		cout<<"Liters to Cups (Enter 5)"<<endl;
		cout<<"?: ";
		cin>> conv;
	}
	
	//switch statement for each conversion type
	switch (conv)
	{
	case 0:
		cout<< "Enter the amount in Pints: ";
		cin>> val1;
		while (val1<0)
		{
			cout<<"Error: Enter a positive value"<<endl;
			cout<< "Enter the amount in Pints: ";
			cin>> val1;
		}
		val2 = val1*p2l;
		cout<<val1<<" Pints is "<<static_cast<int>(100*val2)/100.0<<" Liters."<<endl;
		break;
	case 1:
		cout<< "Enter the amount in Pints: ";
		cin>> val1;
		while (val1<0)
		{
			cout<<"Error: Enter a positive value"<<endl;
			cout<< "Enter the amount in Pints: ";
			cin>> val1;
		}
		val2 = val1/c2p;
		cout<<val1<<" Pints is "<<static_cast<int>(100*val2)/100.0<<" Cups."<<endl;
		break;
	case 2:
		cout<< "Enter the amount in Cups: ";
		cin>> val1;
		while (val1<0)
		{
			cout<<"Error: Enter a positive value"<<endl;
			cout<< "Enter the amount in Cups: ";
			cin>> val1;
		}
		val2 = val1*c2p;
		cout<<val1<<" Cups is "<<static_cast<int>(100*val2)/100.0<<" Pints."<<endl;
		break;
	case 3:
		cout<< "Enter the amount in Cups: ";
		cin>> val1;
		while (val1<0)
		{
			cout<<"Error: Enter a positive value"<<endl;
			cout<< "Enter the amount in Cups: ";
			cin>> val1;
		}
		val2 = val1/l2c;
		cout<<val1<<" Cups is "<<static_cast<int>(100*val2)/100.0<<" Liters."<<endl;
		break;
	case 4:
		cout<< "Enter the amount in Liters: ";
		cin>> val1;
		while (val1<0)
		{
			cout<<"Error: Enter a positive value"<<endl;
			cout<< "Enter the amount in Liters: ";
			cin>> val1;
		}
		val2 = val1/p2l;
		cout<<val1<<" Liters is "<<static_cast<int>(100*val2)/100.0<<" Pints."<<endl;
		break;
	case 5:
		cout<< "Enter the amount in Liters: ";
		cin>> val1;
		while (val1<0)
		{
			cout<<"Error: Enter a positive value"<<endl;
			cout<< "Enter the amount in Liters: ";
			cin>> val1;
		}
		val2 = val1*l2c;
		cout<<val1<<" Liters is "<<static_cast<int>(100*val2)/100.0<<" Cups."<<endl;
		break;
	}
	
	return 0;
}
	
