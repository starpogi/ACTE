#include <iostream>

using namespace std;
int main() {
	
	cout << "Choose what units you wish to convert"<< endl;  //Prints the menu to the user (using \n for the next line
	cout << "Pints to Liters (enter 0)\nPints to Cups (enter 1)\nCups to Pints (enter 2)\nCups to Liters (enter 3)\nLiters to Pints (enter 4)\nLiters to Cups (enter 5)\n:?";
int choose;  
cin >>choose; //value for the desired conversion
double liters; // declaring varianbles for all the units.
double cups;
double pints;
switch (choose) { // A switch function that executes the conversion for units.
	case 0:
	cout <<"enter the amount in pints ";
	
	cin>> pints;
    liters = (pints/2.11);
	cout<< pints << " pints  is " << liters << " liters" << endl;
	break;
	case 1:
	cout <<"enter the amount in pints ";
	
	cin>> pints;
	cups=pints*2;
	cout<< pints << " pints is " << cups << " cups" << endl;
	break;
	case 2:
	cout <<"enter the amount of cups ";
	cin>> cups;
	pints=cups/2;
	cout<< cups << " cups is " << pints << " pints" << endl;
	break;
	case 3:
		cout <<"enter the amount of cups ";
		cin>> cups;
		liters=cups*.236;
		cout<< cups << " cups is " << liters << " liters" << endl;
		break;
	case 4:
		cout <<"enter the amount of liters ";
		cin>> liters;
		pints=liters*2.113;
		cout<< liters << " liters is " << pints << " pints" << endl;
		break;
	case 5:
		cout <<"enter the amount of liters ";
		cin>> liters;
		cups=liters/.236;
		cout<< liters << " liters is " << cups << " cups" << endl;
		break;
	default:	cout<<"not in the list"<<endl;
 }
return(0);
}