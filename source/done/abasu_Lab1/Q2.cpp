#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // declare choice variable
    int choice;

    // provide user with conversion list
    cout << "Pints to Liters (enter 0) " << endl;
    cout << "Pints to Cups (enter 1)" << endl;
    cout << "Cups to Pints (enter 2)" << endl;
    cout << "Cups to Liters (enter 3)" << endl;
    cout << "Liters to Pints (enter 4)" << endl;
    cout << "Liters to Cups (enter 5)" << endl;
    cout << "?: ";

    // store choice and check for invalid values and keep prompting user until a valid value is entered
    cin >> choice;
    while (choice < 0 || choice > 5){
        cout << "Please enter a value between 0 and 5 inclusive: ";
    cin >> choice;
    }

    // declare unit variables
    float pints;
    float cups;
    float liters;
    float pintsIn;
    float cupsIn;
    float litersIn;

    // evaluate user choice and output corresponding statements
    switch (choice){
    
    // each choice asks user for the amount in desired units and outputs the value in specified unit
    case 0:
        cout << "Enter the amount in Pints: ";
        cin >> pintsIn;
        liters = 0.473*pintsIn;
        cout << pintsIn << " Pints is " << fixed << setprecision(2) << liters << " liters." << endl;
        break;
    case 1:
        cout << "Enter the amount in Pints: ";
        cin >> pintsIn;
        cups = 2*pintsIn;
        cout << pintsIn << " Pints is " << fixed << setprecision(2) << cups << " cups. " << endl;
        break;
    case 2:
        cout << "Enter the amount in Cups: ";
        cin >> cupsIn;
        pints = 0.5*cupsIn;
        cout << cupsIn << " Cups is " << fixed << setprecision(2) << pints << " pints. " << endl; 
        break;
    case 3:
        cout << "Enter the amount in Cups: ";
        cin >> cupsIn;
        liters = 0.237*cupsIn;
        cout << cupsIn << " Cups is " << fixed << setprecision(2) << liters << " liters. " << endl;
        break;
    case 4:
        cout << "Enter the amount in liters: ";
        cin >> litersIn;
        pints = 2.11*litersIn;
        cout << litersIn << " Liters is " << fixed << setprecision(2) << pints << " pints. " << endl;
        break;
    case 5:
        cout << "Enter the amount in liters: ";
        cin >> litersIn;
        cups = 4.227*litersIn;
        cout << litersIn << " Liters is " << fixed << setprecision(2) << cups << " cups. " << endl;
        break;
    }

    return 0;
}
