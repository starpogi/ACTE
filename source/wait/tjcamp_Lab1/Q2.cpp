# include <iostream>
using namespace std;

int main ()

{ 

  cout << "Pints to Liters (enter 0)";
  cout << "\nPints to Cups (enter 1)";
  cout << "\nCups to Pints (enter 2)";
  cout << "\nCups to Liters (enter 3)";
  cout << "\nLiters to Pints (enter 4)";
  cout << "\nLiters to Cups (enter 5)";
  cout << "\nEnter your selection: ";

  int conv;
  cin >> conv;

 while ((conv < 0) || (conv >5))
{ 
  cout << "INVALID SELECTION, please re-enter a Valid selection: ";
  cin >> conv;

}


double amount;
double result;

switch (conv)
{

case 0:
       
      cout<< "Enter the amount in Pints: ";
      cin >> amount;
      result = amount * .473;
      cout << amount<< " Pints is "<< result << " Liters"<<endl;
break;

case 1:

      cout<< "Enter the amount in Pints: ";
      cin >> amount;
      result = amount * 2.0;
      cout << amount<< " Pints is "<< result << " Cups"<<endl;
break;


case 2:

      cout<< "Enter the amount in Cups: ";
      cin >> amount;
      result = amount * .5;
      cout << amount<< " Cups is "<< result << " Liters"<<endl;
break;
      

case 3: 

      cout<< "Enter the amount in Cups: ";
      cin >> amount;
      result = amount * .23658;
      cout << amount<< " Cups is "<< result << " Liters"<<endl;
break;


case 4:
 
      cout<< "Enter the amount in Liters: ";
      cin >> amount;
      result = amount * 2.11;
      cout << amount<< " Liters is "<< result << " Pints"<<endl;
break;

case 5:
 
      cout<< "Enter the amount in Liters: ";
      cin >> amount;
      result = amount * 4.226;
      cout << amount<< " Liters is "<< result << " Cups"<<endl;
break;

default : cout<<"Errors: Invalid choice"<<endl;
}
return 0;
}
