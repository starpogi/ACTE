/***********************************************************************
* Yingming Wang U82513434
* Lab 1 Question #2
* Converting units based on user input
************************************************************************/
#include <iostream>
using namespace std;
int main(){
	int unit;
	double numb4, numaft;
	cout << "Pints to Liters(enter 0)\nPints to Cups  (enter 1)\nCups to Pints  (enter 2)\nCups to Liters (enter 3)\nLiters to Pints(enter 4)\nLiters to Cups (enter 5)\n?:";
	cin >> unit;
	while (unit < 0 ||unit > 5){
	cout<<"Please enter a valid choice with number 0 - 5\n";
	cout << "Pints to Liters(enter 0)\nPints to Cups  (enter 1)\nCups to Pints  (enter 2)\nCups to Liters (enter 3)\nLiters to Pints(enter 4)\nLiters to Cups (enter 5)\n ?:";
	cin >> unit;}
	switch (unit){
		case 0: 
			
			cout<<"Enter the amount in Pints: ";
			cin >> numb4;
			while (numb4 < 0){ cout<<"Enter the amount in Pints: ";
			cin >> numb4;}
			numaft = numb4 * 0.473;
			cout <<numb4<<" Pints is "<<numaft<<" Liters."<<endl;

			break;
		case 1:
			cout<<"Enter the amount in Pints: ";
			cin >> numb4;
			while (numb4 < 0){ cout<<"Enter the amount in Pints: ";
			cin >> numb4;}
			numaft = numb4 * 2;
			cout <<numb4<<" Pints is "<<numaft<<" Cups."<<endl;
			break;
		case 2:
			cout<<"Enter the amount in Cups: ";
			cin >> numb4;
			while (numb4 < 0){ cout<<"Enter the amount in Cups: ";
			cin >> numb4;}
			numaft = numb4 * 0.5;
			cout <<numb4<<" Cups is "<<numaft<<" Pints."<<endl;
			break;
		case 3:
			cout<<"Enter the amount in Cups: ";
			cin >> numb4;
			while (numb4 < 0){ cout<<"Enter the amount in Cups: ";
			cin >> numb4;}
			numaft = numb4 * 0.237;
			cout <<numb4<<" Cups is "<<numaft<<" Liters."<<endl;
			break;
		case 4:
			cout<<"Enter the amount in Liters: ";
			cin >> numb4;
			while (numb4 < 0){ cout<<"Enter the amount in Liters: ";
			cin >> numb4;}
			numaft = numb4 * 2.113;
			cout <<numb4<<" Liters is "<<numaft<<" Pints."<<endl;
			break;
		case 5:
			cout<<"Enter the amount in Liters: ";
			cin >> numb4;
			while (numb4 < 0){ cout<<"Enter the amount in Liters: ";
			cin >> numb4;}
			numaft = numb4 * 4.227;
			cout <<numb4<<" Liters is "<<numaft<<" Cups."<<endl;
			break;
		}


return 0;
}
