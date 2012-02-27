//Jason Shum U13401786

#include <iostream>
using namespace std;

int main(){ 

  int conversion;
  double amount ;
  double answer;
  
  //Lists the menu 
 cout << "Pints to Liters (enter 0)" << endl;
 cout << "Pints to Cups (enter 1" << endl;
 cout << "Cups to Pints (enter 2)" << endl;
 cout << "Cups to Liters (enter 3)" << endl;
 cout << "Liters to Pints (enter 4)" << endl;
 cout << "Liters to Cups (enter 5)" <<endl;
 
 cout << "?: ";
 cin >> conversion;

 //Loops through to see if number is between 0 and 5
 while ((conversion < 0)||(conversion > 5) ) 
{
   cout << "Error: Please enter in a number from 0 to 5" << endl;
   cout << "?: "; 
   cin  >> conversion;
}
 //Case statment for each individual function 
 if ((conversion > -1) && (conversion <6))
switch(conversion){
   case 0 :
     cout << "Enter the amount in Pints: ";
     cin >> amount;
     answer = amount * .473176473;
     cout << amount << " Pint(s) is " << answer << " Liters." << endl; 
     break; 
   case 1 :
     cout << "Enter the amount in Pints: ";
     cin >> amount;
     answer = amount * 2;
     cout << amount << " Pint(s) is " << answer << " Cups." << endl; 
     break;
   case 2:
     cout << "Enter the amount in Cups: ";
     cin >> amount;
     answer = amount/ 2;
     cout << amount << " Cup(s) is " << answer << " Pints." << endl; 
     break;
   case 3:
     cout << "Enter the amount in Cups: ";
     cin >> amount;
     answer = amount * .236588236;
     cout << amount << " Cups(s) is " << answer << " Liters." << endl; 
     break;
   case 4:
     cout << "Enter the amount in Liters: ";
     cin >> amount;
     answer = amount/ .473176473;
     cout << amount << " Liter(s) is " << answer << " Pints." << endl; 
     break;
   case 5:
     cout << "Enter the amount in Liters: ";
     cin >> amount;
     answer = amount/ .236588236;
     cout << amount << " Liter(s) is " << answer << " Cups." << endl; 
     break;
   }
 
 return 0;
}


