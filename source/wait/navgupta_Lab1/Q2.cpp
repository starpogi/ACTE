/*Naveen Gupta; U39-84-0240*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
  cout<< "Choose your desired conversion: \n"
      << "Pints to Liters (Enter 0): \n"
      << "Pints to Cups   (Enter 1): \n"
      << "Cups to Pints   (Enter 2): \n"
      << "Cups to Liters  (Enter 3): \n"
      << "Liters to Pints (Enter 4): \n"
      << "Liters to Cups  (Enter 5): \n";
 int choice;
 cin>> choice; //Stores choice for switch statement
 float liters; 
 float pints;
 float cups;
 switch(choice)
   {
   case 0: if (choice == 0)
       {
           cout<<"How many Pints would you like to convert?";
	   cin>>pints;
	   cout<<pints <<" Pints is " << pints*(0.473176473) << " Liters." <<endl;
       }
	 break;
   case 1: if (choice == 1)
	   {
	   cout<<"How many Pints would you like to convert?";
	   cin>>pints;
	   cout.setf(ios::fixed); 
	   cout<<pints << " Pints is " << setprecision(2) << (pints*(2.0)) << " Cups." <<endl;
	   }
	 break;
   case 2: if (choice == 2)
	   {
	   cout<<"How many Cups would you like to convert?";
	   cin>>cups;
	   cout.setf(ios::fixed);
	   cout<<cups << " Cups is " << setprecision(2) << (cups/(2.0)) << " Pints." <<endl;
	   }
	 break;
   case 3: if (choice == 3)
	   {
	     cout<<"How many Cups would you like to convert?";
	     cin>>cups;
	     cout<<cups << " Cups is " << cups*(0.236588236) << " Liters." <<endl;
	   }
     break;
   case 4: if (choice == 4)
       {
	 cout<<"How many Liters would you like to convert?";
	 cin>>liters;
	 cout<<liters << " Liters is " << liters*(2.11337642) << " Pints." <<endl;
       }
     break;
   case 5: if (choice == 5)
     {
       cout<<"How many Liters would you like to convert?";
       cin>>liters;
       cout<<liters << " Liters is " << liters *(4.2265283) << " Cups." <<endl;
     }
     break;
   default: if (choice < 0 || choice > 5)
cout<< "Error: Entered invalid choice, program will exit!"<<endl; 
     exit(1);
   } //If the user happens to enter an invalid choice, the program will exit
  return 0;
}
/*This program assumes the followinf if a decimal value (from 0 to 5) is entered:
It will take the frst digit and treat it as a value and the second digit will automatically be chosen as the conversion amount. Therefore, a value like 5.234 will choose the Liters to Cups option and then enter 0.234 as the conversion amount. It will convert that amount and print out the value end the program will end and a new line on the terminal will start (i.e. ng620@ubtuntu)
*/

