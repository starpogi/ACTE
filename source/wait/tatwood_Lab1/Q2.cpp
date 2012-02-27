#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    double amount, l_p, c_p, c_l;
    
    // Liters per pint
    l_p = 0.473176473;
    
    // Cups per pint
    c_p = 2.0;
    
    // Cups per liter
    c_l = 4.22675284;
    
    
    cout << "Pints to Liters (enter 0)" << endl;
    cout << "Pints to Cups (enter 1)" << endl;
    cout << "Cups to Pints (enter 2)" << endl;
    cout << "Cups to Liters (enter 3)" << endl;
    cout << "Liters to Pints (enter 4)" << endl;
    cout << "Liters to Cups (enter 5)" << endl;
    cout << "?: ";
    cin >> choice;
    
    // Check to make sure the input is in the correct range
    
    while (choice < 0 || choice > 5)
    {
        cout << "Error, you must enter an integer from 0 - 5: ";
        cin >> choice;
    }
    
    // Use switch statement to provide specific conversion
    
        switch (choice) {
            case 0:
                cout << "Enter the amount in Pints: ";
                cin >> amount;
                while (amount < 0)
                {
                    cout << "You must enter a positive value: ";
                    cin >> amount;
                }
                cout << fixed;
                cout << setprecision (2) << amount << " Pints is " << setprecision (2) << amount * l_p << " Liters." << endl;
                
                break;
            case 1:
                cout << "Enter the amount in Pints: ";
                cin >> amount;
                while (amount < 0)
                {
                    cout << "You must enter a positive value: ";
                    cin >> amount;
                }
                cout << fixed;
                cout << setprecision (2) << amount << " Pints is " << setprecision (2) << amount * c_p << " Cups." << endl;
                
                break;
            case 2:
                cout << "Enter the amount in Cups: ";
                cin >> amount;
                while (amount < 0)
                {
                    cout << "You must enter a positive value: ";
                    cin >> amount;
                }
                cout << fixed;
                cout << setprecision (2) << amount << " Cups is " << setprecision (2) << amount / c_p << " Pints." << endl;
                
                break;
            case 3:
                cout << "Enter the amount in Cups: ";
                cin >> amount;
                while (amount < 0)
                {
                    cout << "You must enter a positive value: ";
                    cin >> amount;
                }
                cout << fixed;
                cout << setprecision (2) << amount << " Cups is " << setprecision (2) << amount / c_l << " Liters." << endl;
                
                break;
            case 4:
                cout << "Enter the amount in Liters: ";
                cin >> amount;
                while (amount < 0)
                {
                    cout << "You must enter a positive value: ";
                    cin >> amount;
                }
                cout << fixed;
                cout << setprecision (2) << amount << " Liters is " << setprecision (2) << amount / l_p << " Pints." << endl;
                
                break;
            case 5:
                cout << "Enter the amount in Liters: ";
                cin >> amount;
                while (amount < 0)
                {
                    cout << "You must enter a positive value: ";
                    cin >> amount;
                }
                cout << fixed;
                cout << setprecision (2) << amount << " Liters is " << setprecision (2) << amount * c_l << " Cups." << endl;
                
                break;
                
            default:
                break;
        }
    return 0;
}