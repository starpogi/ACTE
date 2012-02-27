/* 
 * File:   Q2.cpp
 * Author: Patrick Maruska
 * A program to convert different measurement units
 * Uses a switch to control the program
 * 
 * Pints to liters
 * Liters to cups
 * These are the questions we all have to ask
 * Pints to liters
 * Liters to cups
 * What once was a trouble's now an easy task
 * 
 *
 * Created on February 20, 2012, 3:10 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
    int choice;
    float convert;
    
    cout << "Pints to Liters (enter 0)" << endl;
    cout << "Pints to Cups (enter 1)" << endl;
    cout << "Cups to Pints (enter 2)" << endl;
    cout << "Cups to Liters (enter 3)" << endl;
    cout << "Liters to Pints (enter 4)" << endl;
    cout << "Liters to Cups (enter 5)" << endl;
    cout << "?:";
    cout << setprecision (2) << fixed;
    cin >> choice;
    switch (choice)
    {
        case 0:
            cout << "Enter the amount in Pints:";
            do
            {
                cin >> convert;
                if (convert < 0)
                    cout << "Please input a number greater than or equal to 0." << endl;
            } while (convert < 0);
            cout << convert << " pint(s) is " << convert * .473176473 << " liter(s).";
            break;
        case 1:
            cout << "Enter the amount in Pints:";
            do
            {
                cin >> convert;
                if (convert < 0)
                    cout << "Please input a number greater than or equal to 0." << endl;
            } while (convert < 0);
            cout << convert << " pint(s) is " << convert * 2 << " cup(s).";
            break;
        case 2:
            cout << "Enter the amount in Cups:";
            do
            {
                cin >> convert;
                if (convert < 0)
                    cout << "Please input a number greater than or equal to 0." << endl;
            } while (convert < 0);
            cout << convert << " cup(s) is " << convert * .5 << " pint(s).";
            break;
        case 3:
            cout << "Enter the amount in Cups:";
            do
            {
                cin >> convert;
                if (convert < 0)
                    cout << "Please input a number greater than or equal to 0." << endl;
            } while (convert < 0);
            cout << convert << " cup(s) is " << convert * .236588236 << " liter(s).";
            break;
        case 4:
            cout << "Enter the amount in Liters:";
            do
            {
                cin >> convert;
                if (convert < 0)
                    cout << "Please input a number greater than or equal to 0." << endl;
            } while (convert < 0);
            cout << convert << " liter(s) is " << convert * 2.11337642 << " pint(s).";
            break;
        case 5:
            cout << "Enter the amount in Liters:";
            do
            {
                cin >> convert;
                if (convert < 0)
                    cout << "Please input a number greater than or equal to 0." << endl;
            } while (convert < 0);
            cout << convert << " liters(s) is " << convert * 4.2267584 << " cups(s).";
            break;
        default:
            cout << "You did not enter a valid choice." << endl;
    }

    return 0;
}

