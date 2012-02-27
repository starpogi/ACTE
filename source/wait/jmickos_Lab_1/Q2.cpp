#include <iostream>
using namespace std;

int main()
{
    int choice;
    bool redo = false;
    do {
     // Initiates do-while loop to check if input is valid
    cout << "Pints to Liters (enter 0)" << endl <<
            "Pints to Cups (enter 1)"   << endl <<
            "Cups to Pints (enter 2)"   << endl <<
            "Cups to Liters (enter 3)"  << endl <<
            "Liters to Pints (enter 4)" << endl <<
            "Liters to Cups (enter 5)"  << endl <<
            "?: " ;
        cin >> choice;
        if (choice<0 || choice>5)
        // Double checks input value. If invalid, loop runs again
            {
            cout << "Invalid input. Please enter an integer between 0 and 5" << endl;
            redo = true ;
            }
        else
            redo = false;
    } while (redo);

    // Once choice is valid, a switch statement containing conversion code begins
   double input, output;
    switch (choice)
    {
        case 0:
            cout << "Enter the amount in Pints: ";
            cin >> input;
            output = 0.4731 * input;
            cout << input << " Pints is " << output << " Liters." << endl;
            break;
        case 1:
            cout << "Enter the amount in Pints: ";
            cin >> input;
            output = 2 * input;
            cout << input << " Pints is " << output << " Cups." <<endl;
            break;
        case 2:
            cout << "Enter the amount in Cups: ";
            cin >> input;
            output = 0.5000 * input;
            cout << input << " Cups is " << output << " Pints." << endl;
            break;
        case 3:
            cout << "Enter the amount in Cups: ";
            cin >> input;
            output = 0.2365* input;
            cout << input << " Cups is " << output << " Liters." << endl;
            break;
        case 4:
            cout << "Enter the amount in Liters: ";
            cin >> input;
            output = 2.1133 * input;
            cout << input << " Liters is " << output << " Pints." << endl;
            break;
        case 5:
            cout << "Enter the amount in Liters: ";
            cin >> input;
            output = 4.2267 * input;
            cout << input << " Liters is " << output << " Cups." << endl;
            break;
        default:
	    cout << "Error: Not a valid choice" << endl;
	    break;
    }
    return 0;
}
