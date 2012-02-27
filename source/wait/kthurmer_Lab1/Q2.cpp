// Kate Thurmer U24179971
// Lab 1, Question 2.
// This program converts among Cups, Pints and Liters

#include <iostream>

using namespace std;

int main()
{
  // ask the user to choose a conversion type.
  int choice;

  cout<<"Please choose from the following options:"<<endl
      <<"For Pints to Liters, enter a 0."<<endl
      <<"For Pints to Cups, enter a 1."<<endl
      <<"For Cups to Pints, enter a 2."<<endl
      <<"For Cups to Liters, enter a 3."<<endl
      <<"For Liters to Pints, enter a 4."<<endl
      <<"For Liters to Cups, enter a 5."<<endl;

  cin>>choice;
 
  while ((choice<0)||(choice>5))  // keep whining until you get a valid input.
  {
    cout<<"Please enter a valid menu option:";
    cin>>choice;
  }

  // set conversion factor based on user input.
  double f=0;
  // and get amount to convert.
  double a=0;

  // use strings for units you're converting from and to.
  char * from;
  char * to;

  switch (choice)
  {
    case 0: 
      from = "pints";
      to = "liters";
      f=0.473176473;
      break;
    case 1: 
      from = "pints";
      to = "cups";
      f=2.0;
      break;
    case 2: 
      from = "cups";
      to = "pints";
      f=0.5;
      break;
    case 3: 
      from = "cups";
      to = "liters";
      f=0.236588236;
      break;
    case 4:
      from = "liters";
      to = "pints";
      f=2.11337642;
      break;
    case 5:
      from = "liters";
      to = "cups";
      f=4.22675284;
      break;
  }

  cout<<"Enter the amount in "<<from<<": ";

  cin>>a;

  while (a<=0)  // keep whining until you get a valid amount
  {
    cout<<"Please enter a valid amount (greater than zero): ";
    cin>>a;
  }

  // compute result.

  double r=a*f;

  // display result with three decimal places
  // (display input with whatever precision the user used).

  cout<<a<<" "<<from<<" is ";

  cout.setf(ios::fixed,ios::floatfield);
  cout.precision(3);
  cout<<r<<" "<<to<<".";

  cout<<endl;

  return 0;
}
