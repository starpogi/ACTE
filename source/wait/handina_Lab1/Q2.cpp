//Alex Handin EC 327 Lab 1 

#include <iostream>
using namespace std;

int main()
{
    
    //Declare variables
    int choice;
    double originalAmount;
    double result;
    double decOriginalAmount;
    double decResult;
    
    //Print conversion selections
    cout << "Pints to Liters (enter 0)" << endl;
    cout << "Pints to Cups   (enter 1)" << endl;
    cout << "Cups to Pints   (enter 2)" << endl;
    cout << "Cups to Liters  (enter 3)" << endl;
    cout << "Liters to Pints (enter 4)" << endl;
    cout << "Liters to Cups  (enter 5)" << endl;
    
    
    //Input user choice
    do
	{cout << "?: ";
        cin  >> choice;
        if (!(choice <= 5 && choice >=0))
            cout << "Error, please try again: " << endl;}
	while (!(choice <= 5 && choice >=0));
    
    //Execute switch statements based on the value of choice
    switch (choice)
    {
        case 0: cout << "Enter the amount in Pints: " << endl;
			cin >> originalAmount;
			result = 0.473176476*originalAmount;
			decResult = static_cast<int>(result*100)/100.0;
			decOriginalAmount = static_cast<int>(originalAmount*100)/100.0;
			cout << decOriginalAmount << " Pints is " << decResult << " Liters." << endl;
			break;
        case 1: cout << "Enter the amount in Pints: " << endl;
			cin >> originalAmount;
			result = 2*originalAmount;
			decResult = static_cast<int>(result*100)/100.0;
			decOriginalAmount = static_cast<int>(originalAmount*100)/100.0;
			cout << decOriginalAmount << " Pints is " << decResult << " Cups." << endl;
			break;
        case 2: cout << "Enter the amount in Cups: " << endl;
			cin >> originalAmount;
			result = 0.5*originalAmount;
			decResult = static_cast<int>(result*100)/100.0;
			decOriginalAmount = static_cast<int>(originalAmount*100)/100.0;
			cout << decOriginalAmount << " Cups is " << decResult << " Pints." << endl;
			break;
        case 3: cout << "Enter the amount in Cups: " << endl;
			cin >> originalAmount;
			result = 0.236588236*originalAmount;
			decResult = static_cast<int>(result*100)/100.0;
			decOriginalAmount = static_cast<int>(originalAmount*100)/100.0;
			cout << decOriginalAmount << " Cups is " << decResult << " Liters." << endl;
			break;
        case 4: cout << "Enter the amount in Liters: " << endl;
			cin >> originalAmount;
			result = 2.11337642*originalAmount;
			decResult = static_cast<int>(result*100)/100.0;
			decOriginalAmount = static_cast<int>(originalAmount*100)/100.0;
			cout << decOriginalAmount << " Liters is " << decResult << " Pints." << endl;
			break;
        case 5: cout << "Enter the amount in Liters: " << endl;
			cin >> originalAmount;
			result = 4.22675284*originalAmount;
			decResult = static_cast<int>(result*100)/100.0;
			decOriginalAmount = static_cast<int>(originalAmount*100)/100.0;
			cout << decOriginalAmount << " Liters is " << decResult << " Cups." << endl;
			break;
        default: cout << "Error, please restart program.";
    }
    return 0;
}
