#include <iostream>
using namespace std;

int main() 
{
		double Pints = 0;
		double Cups = 0;
		double Liters = 0;
		int choice;

		cout << "To convert Pints to Liters, enter 0. " << endl;
		cout << "To convert Pints to Cups, enter 1. " << endl;
		cout << "To convert Cups to Pints, enter 2. " << endl;
		cout << "To convert Cups to Liters, enter 3. " << endl;
		cout << "To convert Liters to Pints, enter 4. " << endl;
		cout << "To convert Liters to Cups, enter 5. " << endl;

		cin >> choice;

		while (choice < 0 || choice > 5) {
			cout << "Error: please enter a valid choice." << endl;
			cout << endl << "To convert Pints to Liters, enter 0. " << endl;
			cout << "To convert Pints to Cups, enter 1. " << endl;
			cout << "To convert Cups to Pints, enter 2. " << endl;
			cout << "To convert Cups to Liters, enter 3. " << endl;
			cout << "To convert Liters to Pints, enter 4. " << endl;
			cout << "To convert Liters to Cups, enter 5. " << endl;

			cin >> choice;
		}

		if (choice == 0 || choice == 1) {
			cout << "Enter the amount in Pints: " << endl;
			cin >> Pints;
			Liters = Pints/2.113;
			Cups = Pints*2;
			if (choice == 0)
				cout << "There are " << Liters << " Liters in " << Pints << " U.S. Pints." << endl;
			else 
				cout << "There are " << Cups << " U.S. Cups in " << Pints << " U.S. Pints." << endl;
		}
		else if (choice == 2 || choice == 3) {
			cout << "Enter the amount in Cups: " << endl;
			cin >> Cups;
			Liters = Cups/4.227;
			Pints = Cups/2;
			if (choice == 2)
				cout << "There are " << Pints << " U.S. pints in " << Cups << " U.S. Cups." << endl;
			else 
				cout << "There are " << Liters << " Liters in " << Cups << " U.S. Cups." << endl;
		}
		else if (choice == 4 || choice == 5) {
			cout << "Enter the amount in Liters: " << endl;
			cin >> Liters;
			Cups = 4.227*Liters;
			Pints = 2.113*Liters;
			if (choice == 4)
				cout << "There are " << Pints << " U.S. Pints in " << Liters << " Liters." << endl;
			else
				cout << "There are " << Cups << " U.S. Cups in " << Liters << " Liters." << endl;
		}
return 0;
}
