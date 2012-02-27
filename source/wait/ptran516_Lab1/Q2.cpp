#include <iostream>
using namespace std;

int main()
{
  // Declare variables
  int choice;
  double amount;
  double conversion;

  // Prompt the user for conversion type
  cout << "Pints to Liters (enter 0)" << endl;
  cout << "Pints to Cups (enter 1)" << endl;
  cout << "Cups to Pints (enter 2)" << endl;
  cout << "Cups to Liters (enter 3)" << endl;
  cout << "Liters to Pints (enter 4)" << endl;
  cout << "Liters to Cups (enter 5)" << endl;
  cout << "?: ";

  cin >> choice;

  // Error check: Prompt the user for the conversion type if the values are not between 0 and 5
  while(choice < 0 || choice > 5)
    {
      cout << "Re-enter your conversion type: ";
      cin >> choice;
    }
  
  // Switch statement that will do the conversion based on the the entered integers
  switch (choice)
    {
    case 0: // Pints to Liters
      cout << "Enter the amount in Pints: ";
      cin >> amount;
      
      conversion = 0.473176473 * amount;
      
      cout << amount << " Pints is " << conversion << " Liters." << endl;
      break;
   
    case 1: // Pints to Cups
      cout << "Enter the amount in Pints: ";
      cin >> amount;
      
      conversion = 2 * amount;
      
      cout << amount << " Pints is " << conversion << " Cups." << endl;
      break;
    
    case 2: // Cups to Pints
      cout << "Enter the amount in Cups: ";
      cin >> amount;
      
      conversion = 0.5 * amount;
      
      cout << amount << " Cups is " << conversion << " Pints." << endl;
      break;
   
    case 3: // Cups to Liters
      cout << "Enter the amount in Cups: ";
      cin >> amount;
      
      conversion = 0.236588236 * amount ;
      
      cout << amount << " Cups is " << conversion << " Liters." << endl;
      break;
    
    case 4: // Liters to Pints
      cout << "Enter the amount in Liters: ";
      cin >> amount;
      
      conversion = 2.11337642 * amount;
      cout << amount << " Liters is " << conversion << " Pints." << endl;
      break; 

    case 5: // Liters to Cups
      cout << "Enter the amount in Liters: ";
      cin >> amount;
      
      conversion = 4.22675284 * amount;
      cout << amount << " Liters is " << conversion << " Cups." << endl;
      break;
    }
}
