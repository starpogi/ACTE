#include <iostream>
using namespace std;

int main ()
{

//declare variables

int type;
double imput;
double result;


// As the user to input a conversion type

type = -1;
while (type < 0 || type > 5)
{
cout << "Conversion types are as follows:" << endl;
cout << "Pints to Liters (enter 0)" << endl;
cout << "Pints to Cups (enter 1)" << endl;
cout << "Cups to Pints (enter 2)" << endl;
cout << "Cups to Liters (enter 3)" << endl;
cout << "Liters to Pints (enter 4)" << endl;
cout << "Liters to cups (enter 5)" << endl;
cout << "Please enter a conversion type (from 0-5): " << endl;


cin >> type; 
if (type <=0 || type >5)
{
cout << "The number you entered is invalid" << endl;
}

}



/*switch statement for various cases
Each case asks for the imput, computes the conversion 
and displays the answer*/

switch (type)
{
case 0: 

cout << "Enter the amount in Pints: " << endl;
cin >> imput;
result = imput*(.473176473);
cout << imput << " Pints is " << result << " Liters" << endl;
break; 

case 1: 

cout << "Enter the amount in Pints: " << endl;
cin >> imput;
result = imput*(2);
cout << imput << " Pints is " << result << " Cups" << endl;
break; 

case 2: 

cout << "Enter the amount in Cups: " << endl;
cin >> imput;
result = imput*(.5);
cout << imput << " Cups is " << result << " Pints"<< endl;
break;

case 3: 

cout << "Enter the amount in Cups: " << endl;
cin >> imput;
result = imput*(.236588236);
cout << imput << " Cups is " << result << " Liters" << endl;
break;

case 4: 

cout << "Enter the amount in Liters: " << endl;
cin >> imput;
result = imput*(2.11337642);
cout << imput << " Liters is " << result << " Pints" << endl;
break;

case 5: 

cout << "Enter the amount in Liters: " << endl;
cin >> imput;
result = imput*(4.22675284);
cout << imput << " Liters is " << result << " Cups" << endl;
break;

}




return 0;
}