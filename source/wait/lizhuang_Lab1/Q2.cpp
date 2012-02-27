# include <iostream>
# include <iomanip>
using namespace std;

int main()

{
	int choi;
	//prompt user to select the type
	cout<<"Pints to Liters (enter0)"<<endl;
	cout<<"Pints to Cups (enter1)"<<endl;
	cout<<"Cups to Pints (enter2)"<<endl;
	cout<<"Cups to Liters (enter3)"<<endl;
	cout<<"Liters to Pints (enter4)"<<endl;
	cout<<"Liters to Cups (enter5)"<<endl;
	cout<<"?: ";
	cin>>choi;
	//check if user's input is valid. If not promt user to select again.
	if (choi<0 || choi>5)
	{
		cout<<"Select types from 0 to 5"<<endl;
		cout<<"Enter again: ";
		cin>>choi;
	}

	double amnt,amt;
	
	switch (choi)
{
		case 0://1 Pint = 0.47 Liters
			cout<<"Enter the amount in Pints: ";
			cin>>amnt;
			amt=amnt*0.47;
			cout.precision(2);
			cout<<fixed<<amnt<<" Pints is "<<amt<<" Liters."<<endl;
			break;

		case 1://1 Pint = 2 Cups
			cout<<"Enter the amount in Pints: ";
			cin>>amnt;
			amt=amnt*2;
			cout.precision(2);
			cout<<fixed<<amnt<<" Pints is "<<amt<<" Cups."<<endl;
			break;

		case 2://1 Cup = 0.5 Pints
			cout<<"Enter the amount in Cups: ";
			cin>>amnt;
			amt=amnt*0.5;
			cout.precision(2);
			cout<<fixed<<amnt<<" Cups is "<<amt<<" Pints."<<endl;
			break;

		case 3://1 Cup = 0.24 Liters
			cout<<"Enter the amount in Cups: ";
			cin>>amnt;
			amt=amnt*0.24;
			cout.precision(2);
			cout<<fixed<<amnt<<" Cups is "<<amt<<" Liters."<<endl;
			break;

		case 4://1 Liter = 2.11 Pints
			cout<<"Enter the amount in Liters: ";
			cin>>amnt;
			amt=amnt*2.11;
			cout.precision(2);
			cout<<fixed<<amnt<<" Liters is "<<amt<<" Pints."<<endl;
			break;
	
		case 5://1 Liter = 4.23 Cups
			cout<<"Enter the amount in Liters: ";
			cin>>amnt;
			amt=amnt*4.23;
			cout.precision(2);
			cout<<fixed<<amnt<<" Liters is "<<amt<<" Cups."<<endl;
			break;
		}
		return 0;
}









