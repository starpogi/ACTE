#include <iostream>
using namespace std;

int main()
{
	int choice;
	double enter,convert;
	cout<<"Pints to Liters (enter 0)\nPints to Cups (enter 1)\nCups to Pints (enter 2)\nCups to Liters (enter 3)\nLiters to Pints (enter 4)\nLiters to Cups (enter 5)\n?:";
	cin>>choice;
	//check if the choice is in range, if not, keep asking
	while (choice>5 || choice<0)
	{	cout<<"You have to enter an integer between 0 and 5, Please enter again:";
		cin>>choice;
	}
	switch (choice)
	{
		case 0: //1 US Pint = 0.473176473 Liters
			cout<<"Enter the amount in Pints: ";
			cin>>enter;
			convert=enter*0.4732;
			cout.precision(4);
			cout<<enter<<" Pints is "<<fixed<<convert<<" Liters."<<endl;
			break;
		case 1: //1 US pint = 2 US cups
			cout<<"Enter the amount in Pints: ";
			cin>>enter;
			convert=enter*2.0;
			cout.precision(4);
			cout<<enter<<" Pints is "<<fixed<<convert<<" Cups."<<endl;
			break;
		case 2: //1 US cup = 0.5 US pints
			cout<<"Enter the amount in Cups: ";
			cin>>enter;
			convert=enter*0.5;
			cout.precision(4);
			cout<<enter<<" Cups is "<<fixed<<convert<<" Pints."<<endl;
			break;
		case 3: //1 US cup = 0.236588236 liters
			cout<<"Enter the amount in Cups: ";
			cin>>enter;
			convert=enter*0.2366;
			cout.precision(4);
			cout<<enter<<" Cups is "<<fixed<<convert<<" Liters."<<endl;
			break;
		case 4: //1 liters = 2.11337642 US pints
			cout<<"Enter the amount in Liters: ";
			cin>>enter;
			convert=enter*2.1134;
			cout.precision(4);
			cout<<enter<<" Liters is "<<fixed<<convert<<" Pints."<<endl;
			break;
		case 5: //1 liters = 4.22675284 US cups
			cout<<"Enter the amount in Liters: ";
			cin>>enter;
			convert=enter*4.2268;
			cout.precision(4);
			cout<<enter<<" Liters is "<<fixed<<convert<<" Cups."<<endl;
			break;
	}
	return 0;
}
