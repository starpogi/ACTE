#include<iostream>
using namespace std;

int main(){

  // initializes variables
  int conv;
  double val;
  double newval;

  // presents the conversion outputs to the user in the console.
  cout<< "Select a conversion." << endl << "Pints to Liters (enter 0)"<< endl;
  cout<< "Pints to Cups (enter 1)"<< endl << "Cups to Pints (enter 2)"<< endl;
  cout<< "Cups to Liters (enter 3)"<< endl << "Liters to Pints (enter 4)"<< endl;
  cout<< "Liter to Cups (enter 5)"<< endl;

  cin>>conv;
  //error checks to make sure the user selected on of the conversion options.
  if (conv< 0 || conv >5)
    cout << "Your entry is invalid."<<endl;

  switch (conv){
    //case values correspond with the values presented with each conversion.
    case 0:
      cout << "Enter the amount of Pints: ";
      cin >> val;
      if (val<0){                       //error checks for negative numbers.
	cout<<"Entry is invalid."<<endl;
	break;      //if error is found program will break out if the loop 
      }
      newval = val * .47;       // caluclates the conversion      
      cout<< val<<" Pints is "<< newval << " Liters. " << endl;
      break;

    case 1:
      cout << "Enter the amount of Pints: ";
      cin >> val;
      if (val<0){
	cout<<"Entry is invalid."<<endl;
	break;
      }
      newval = val*2;
      cout<< val <<" Pints is " << newval << " Cups." << endl;
      break;

    case 2:
      cout << "Enter the amount of Cups: ";
      cin >> val;
      if (val<0){
	cout<<"Entry is invalid."<<endl;
	break;
      }
      newval = val / 2;
      cout<< val<<" Cups is "<< newval << " Pints. " << endl;
      break;

    case 3:
      cout << "Enter the amount of Cups: ";
      cin >> val;
      if (val<0){
	cout<<"Entry is invalid."<<endl;
	break;
      }
      newval = val * .23;
      cout<< val<<" Cups is "<< newval << " Liters. " << endl;
      break;

    case 4:
      cout << "Enter the amount of Liters: ";
      cin >> val;
      if (val<0){
	cout<<"Entry is invalid."<<endl;
	break;
      }
      newval = val * 2.11;
      cout<< val<<" Liters is "<< newval << " Pints. " << endl;
      break;

    case 5:
      cout << "Enter the amount of Liter: ";
      cin >> val;
      if (val<0){
	cout<<"Entry is invalid."<<endl;
	break;
      }
      newval = val * 4.22;
      cout<< val<<" Liters is "<< newval << " Cups. "<< endl;
      break;
  }


}
