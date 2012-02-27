#include <iostream>
using namespace std;

int main()
{ double n;
     int select;   //define the variables

	cout << "Pints to Liters (enter 0)" << endl;
	cout << "Pints to Cups (enter 1)" << endl;
	cout << "Cups to Pints (enter 2)" << endl;
	cout << "Cups to Liters (enter 3)" << endl;
	cout << "Liters to Pints (enter 4)" << endl;
	cout << "Liters to Cups (enter 5)" << endl;
	cout << "?: ";
	cin >> select; 
	if (select==0) {     //if 0 is selected then it shows the value of liters converted from a given pints value 

	   cout << "Enter the amount in Pints: "; 
	   cin >> n;
	   cout << n << " Pints is " << n*0.47317 << " Liters." << endl;
	}  
	else if (select==1) {
	   cout << "Enter the amount in Pints: ";
	   cin >> n;
	   cout << n << " Pints is " << n*2 << " Cups." << endl;
	}
       else if (select==2) {
	   cout << "Enter the amount in Cups: ";
	   cin >> n;
	   cout << n << " Cups is " << n*0.5 << " Pints." << endl;
	}
       else if (select==3) {
	   cout << "Enter the amount in Cups: ";
	   cin >> n;
	   cout << n << " Cups is " << n*0.23659 << " Liters." << endl;
	}
	else if (select==4) {
	   cout << "Enter the amount in Liters: ";
	   cin >> n;
	   cout << n << " Liters is " << n*2.11337 << " Pints." << endl;
	}
	else if (select==5) {
	   cout << "Enter the amount in Liters: ";
	   cin >> n;
	   cout << n << " Liters is " << n*4.22675 << " Cups." << endl;
	}
	else  
	   cout << "Error: Please choose an integer value between 0 and 5" << endl;  //gives an error if the value is not 0,1,2,3,4,5
	   cin >> select;

	system("pause"); //required for visual studios
return 0;
}

