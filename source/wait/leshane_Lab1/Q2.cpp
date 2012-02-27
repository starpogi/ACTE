/* LeShane - EC327 - Lab 1 - Q2 */

#include <iostream>
using namespace std;

int main()
{
  int conversion;
  double amount;
  double amount2;

  cout << "Pints to Liters (enter 0)" << endl;
  cout << "Pints to Cups (enter 1)" << endl;
  cout << "Cups to Pints (enter 2)" << endl;
  cout << "Cups to Liters (enter 3)" << endl;
  cout << "Liters to Pints (enter 4)" << endl;
  cout << "Liters to Cups (enter 5)" << endl;
  cout << "?: ";
  cin >> conversion;


  while (conversion < 0 || conversion > 5)
    { 
      cout << conversion << " is not a valid choice." << endl;
      cout << "Please enter a number from the conversion list: ";
      cin >> conversion;
    }

  if (conversion == 0)
    {
      cout << "Enter the amount in Pints: ";
      cin >> amount;
      while (amount < 0)
	{
	  cout << "Please enter a valid volume: ";
	  cin >> amount;
	}
      amount2 = (amount*0.47318);
      cout << amount << " Pints is " << amount2 << " Liters." << endl;
    }

  if (conversion == 1)
    {
      cout << "Enter the amount in Pints: ";
      cin >> amount;
      while (amount < 0)
	{ 
	  cout << "Please enter a valid volume: ";
	  cin >> amount;
	}
      amount2 = (2*amount);
      cout << amount << " Pints is " << amount2 << " Cups." << endl;
    }

  if (conversion == 2)
    {
      cout << "Enter the amount in Cups: ";
      cin >> amount;
      while (amount < 0)
	{ 
	  cout << "Please enter a valid volume: ";
	  cin >> amount;
	}
      amount2 = (amount/2);
      cout << amount << " Cups is " << amount2 << " Pints." << endl;
    }

  if (conversion == 3)
    {
      cout << "Enter the amount in Cups: ";
      cin >> amount;
      while (amount < 0)
	{ 
	  cout << "Please enter a valid volume: ";
	  cin >> amount;
	}
      amount2 = (amount*0.23659);
      cout << amount << " Cups is " << amount2 << " Liters." << endl;
    }

  if (conversion == 4)
    {
      cout << "Enter the amount in Liters: ";
      cin >> amount;
      while (amount < 0)
	{ 
	  cout << "Please enter a valid volume: ";
	  cin >> amount;
	}
      amount2 = (amount*2.11338);
      cout << amount << " Liters is " << amount2 << " Pints." << endl;
    }

  if (conversion == 5)
    {
      cout << "Enter the amount in Liters: ";
      cin >> amount;
      while (amount < 0)
	{ 
	  cout << "Please enter a valid volume: ";
	  cin >> amount;
	}
      amount2 = (amount*4.22675);
      cout << amount << " Liters is " << amount2 << " Cups." << endl;
    }

}
