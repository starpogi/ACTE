/*
 * Michael Abed <mgabed@bu.edu>
 *
 * Lab 1 Problem 2
 *
 * Convert units between pints, liters, and cups
 */

#include <iostream>

using namespace std;

int main()
{
    // the order here corresponds to the number that gets entered by the user
    // it's just what needs to be multiplied by to get the corresonding unit
    double conversion[10] = {0.47317, 2, 0.5, 0.23659, 2.1134, 4.2268};
    unsigned short sel;
    double amount;

    cout << "Pints to Liters (enter 0)" << endl;
    cout << "Pints to Cups (enter 1)" << endl;
    cout << "Cups to Pints (enter 2)" << endl;
    cout << "Cups to Liters (enter 3)" << endl;
    cout << "Liters to Pints (enter 4)" << endl;
    cout << "Liters to Cups (enter 5)" << endl;

    do { // figure out operation
        cout << "?: ";
        cin >> sel;
        if (sel > 5)
            cout << "Enter a number between 0 and 5" << endl;
    } while (sel > 5);

    do { // validate input
        switch (sel) { // decide how to prompt
            case 0: // fallthrough
            case 1:
                cout << "Enter the amount in Pints: ";
                break;
            case 2:
            case 3:
                cout << "Enter the amount in Cups: ";
                break;
            case 4:
            case 5:
                cout << "Enter the amount in Liters: ";
                break;
        }
        cin >> amount;
        if (amount < 0)
            cout << "Enter a positive number" << endl;
    } while (amount < 0);

    double result = conversion[sel] * amount;

    switch (sel) { // show the output
        case 0:
            cout << amount << " Pints is " << result << " Liters" << endl;
            break;
        case 1:
            cout << amount << " Pints is " << result << " Cups" << endl;
            break;
        case 2:
            cout << amount << " Cups is " << result << " Pints" << endl;
            break;
        case 3:
            cout << amount << " Cups is " << result << " Liters" << endl;
            break;
        case 4:
            cout << amount << " Liters is " << result << " Pints" << endl;
            break;
        case 5:
            cout << amount << " Liters is " << result << " Cups" << endl;
            break;
    }
    return 0;
}
