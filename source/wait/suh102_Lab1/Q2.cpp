#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"Pints to Liters (enter 0)"<<endl;
	cout<<"Pints to Cups (enter 1)"<<endl;
	cout<<"Cups to Pints (enter 2)"<<endl;
	cout<<"Cups to Liters (enter 3)"<<endl;
	cout<<"Liters to Pints (enter 4)"<<endl;
	cout<<"Liters to Cups (enter 5)"<<endl;
	cout<<"?: ";
	cin>> a;

	while (a<0 || a>5){ 
		cout<<"Please re-enter the number for conversion type (0~5 only): ";	
		cin>> a;
	}
	
	double b,c;	
	
	if (a==0){
		cout<< "Enter the amount in Pints: ";
		cin>> b;
		c= 0.473*b;
		cout<< b <<" Pints is "<< c << " Liters."<<endl;
	} else if (a==1){
		cout<< "Enter the amount in Pints: ";
		cin>> b;
		c= 2.000*b;
		cout<< b <<" Pints is "<< c << " Cups."<<endl;

	} else if (a==2){
		cout<< "Enter the amount in Cups: ";
		cin>> b;
		c=0.500*b;
		cout<< b <<" Cups is "<< c << " Pints."<<endl;
	} else if (a==3){
		cout<< "Enter the amount in Cups: ";
		cin>> b;
		c=0.236*b;
		cout<< b <<" Cups is "<< c << " Liters."<<endl;
	} else if (a==4){
		cout<< "Enter the amount in Liters: ";
		cin>> b;
		c=2.113*b;
		cout<< b <<" Liters is "<< c << " Pints."<<endl;
	} else if (a==5){
		cout<< "Enter the amount in Liters: ";
		cin>> b;
		c=4.227*b;
		cout<< b <<" Liters is "<< c << " Cups."<<endl;
	}

return 0;
}
