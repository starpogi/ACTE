//Program converts between cups/pints/liters
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int choice;
	do {
	cout<<"0: Pints to Cups\n1: Pints to Liters\n2: Cups to Pints\n3: Cups to Liters\n4: Liters to Pints\n5: Liters to Cups\nChoose a conversion: ";
	cin>>choice;
	if (choice<0||choice>5)
		cout<<"ERROR: Try again"<<endl;
	} while (choice<0||choice>5);
	
	double x,y; //in and out

	switch (choice) {
		case 0: //pints to cups
			do{
				cout<<"Enter the number of pints: ";
				cin>>x;
				if (x<0)
					cout<<"ENTER A POSITIVE VALUE!"<<endl;
			} while (x<0);
			y=x*2;
			cout<<x<<" pints is "<<setprecision(6)<<showpoint<<y<<" cups."<<endl;
			break;
			
		case 1: //pints to liters
			do{
				cout<<"Enter the number of pints: ";
				cin>>x;
				if (x<0)
					cout<<"ENTER A POSITIVE VALUE!"<<endl;
			} while (x<0);
			y=x*0.473176;
			cout<<x<<" pints is "<<setprecision(6)<<showpoint<<y<<" liters."<<endl;
			break;
			
		case 2: //cups to pints
			do{
				cout<<"Enter the number of cups: ";
				cin>>x;
				if (x<0)
					cout<<"ENTER A POSITIVE VALUE!"<<endl;
			} while (x<0);
			y=x*0.5;
			cout<<x<<" cups is "<<setprecision(6)<<showpoint<<y<<" pints."<<endl;
			break;
			
		case 3: //cups to liters
			do{
				cout<<"Enter the number of cups: ";
				cin>>x;
				if (x<0)
					cout<<"ENTER A POSITIVE VALUE!"<<endl;
			} while (x<0);
			y=x*0.236588;
			cout<<x<<" cups is "<<setprecision(6)<<showpoint<<y<<" liters."<<endl;
			break;
			
		case 4: //liters to pints
			do{
				cout<<"Enter the number of liters: ";
				cin>>x;
				if (x<0)
					cout<<"ENTER A POSITIVE VALUE!"<<endl;
			} while (x<0);
			y=x*2.1134;
			cout<<x<<" liters is "<<setprecision(6)<<showpoint<<y<<" pints."<<endl;
			break;
			
		case 5: //liters to cups
			do{
				cout<<"Enter the number of liters: ";
				cin>>x;
				if (x<0)
					cout<<"ENTER A POSITIVE VALUE!"<<endl;
			} while (x<0);
			y=x*4.22675284;
			cout<<x<<" liters is "<<setprecision(6)<<showpoint<<y<<" cups."<<endl;
			break;
	}
	return 0;
}

