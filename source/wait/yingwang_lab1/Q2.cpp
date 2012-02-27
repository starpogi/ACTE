#include <iostream>
using namespace std;

int main(){
	double pints,liters,cups;
	int choice;
	//output all the choice that the users can choose
	do{
		cout << "Pints to Liters (enter 0)";
		cout << "\n";
		cout << "Pints to Cups (enter 1)";
		cout << "\n";
		cout << "Cups to Pints (enter 2)";
		cout << "\n";
		cout << "Cups to Liters (enter 3)";
		cout << "\n";
		cout << "Liters to Pints (enter 4)";
		cout << "\n";
		cout << "Liters to Cups (enter 5)";
		cout << "\n";
		cout << "?: ";
		cin >> choice;

		//error checking the input of the users
		if ((choice < 0) || (choice > 5)){
			cout << "Error, you should enter the number between 0 to 5.";
			cout << "\n";
		}
	}while((choice < 0) || (choice > 5));

	//when the users put the following choice and then output the result.
	if (choice == 0){
		cout << "Enter the amount in Pints: ";
		cin >> pints;
		cout << pints << " Pints is " << 0.4731 * pints << " Liters.";
	}else if (choice == 1){
		cout << "Enter the amount in Pints: ";
		cin >> pints;
		cout << pints << " Pints is " << 2 * pints << " Cups.";
	}else if (choice == 2){
		cout << "Enter the amount in Cups: ";
		cin >> cups;
		cout << cups << " Cups is " << cups / 2 << " Pints.";
	}else if (choice == 3){
		cout << "Enter the amount in Cups: ";
		cin >> cups;
		cout << cups << " Cups is " << 0.2366 * cups << " Liters.";
	}else if (choice == 4){
		cout << "Enter the amount in Liters: ";
		cin >> liters;
		cout << liters << " Liters is " << 2.1112 * liters << " Pints.";
	}else if (choice == 5){
		cout << "Enter the amount in Liters: ";
		cin >> liters;
		cout << liters << " Liters is " << 4.22244 * liters << " Cups.";
	}

	return 0;
}