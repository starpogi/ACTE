#include <iostream>
using namespace std;

int main()
{
	//Assign all variables.
	int num;
	double num1;
	double num2;
	//outputs and inputs
	cout<<"Pints to Liters (enter 0)"<<endl<<"Pints to Cups (enter 1)"<<endl<<"Cups to Pints (enter 2)"<<endl<<"Cups to liters (enter 3)"<<endl<<"Liters to Pints (enter 4)"<<endl<<"Liters to Cups (enter 5)"<<endl<<"?:";
	cin>>num;
	//Check the choices wther from 0 to 6 or not
	while((num!=0) && (num!=1) && (num!=2) && (num!=3) && (num!=4) && (num!=5))
	{cout<<"Wrong!"<<endl<<"Pints to Liters (enter 0)"<<endl<<"Pints to Cups (enter 1)"<<endl<<"Cups to Pints (enter 2)"<<endl<<"Cups to liters (enter 3)"<<endl<<"Liters to Pints (enter 4)"<<endl<<"Liters to Cups (enter 5)"<<endl<<"?:";
cin>>num;}
	//Start calculating between Pints, Liters and Cups.
	switch (num)
	{
	  case 0:
	  cout<<"Enter the amount in Pints: ";
	  cin>>num2;
	  num1=0.473*num2;
	  cout.precision(2);
	  cout<<num2<< " Pints is "<<fixed<<num1<<" Liters"<<endl;
	  break;
	case 1:
	  cout<<"Enter the amount in Pints: ";
	  cin>>num2;
	  num1=2*num2;
	  cout.precision(2);
	  cout<<num2<< " Pints is "<<fixed<<num1<<" Cups"<<endl;
	  break;
	case 2:
	  cout<<"Enter the amount in Cups: ";
	  cin>>num2;
	  num1=0.5*num2;
	  cout.precision(2);
	  cout<<num2<< " Cups is "<<fixed<<num1<<" Pints"<<endl;
	  break;
	case 3:
	  cout<<"Enter the amount in Cups: ";
	  cin>>num2;
	  num1=0.237*num2;
	  cout.precision(2);
	  cout<<num2<< " Cups is "<<fixed<<num1<<" Liters"<<endl;
	  break;
	case 4:
	  cout<<"Enter the amount in Liters: ";
	  cin>>num2;
	  num1=2.113*num2;
	  cout.precision(2);
	  cout<<num2<< " Liters is "<<fixed<<num1<<" Pints"<<endl;
	  break;
	case 5:
	  cout<<"Enter the amount in Liters: ";
	  cin>>num2;
	  num1=4.227*num2;
	  cout.precision(2);
	  cout<<num2<< " Liters is "<<fixed<<num1<<" Cups"<<endl;
	  break;
	}
	return 0;
}