#include <iostream>
using namespace std;

int main()
{		
	double base1;
	double base2;
	double height1;
	double height2; 

	cout << "Enter data for triangle 1: " << endl << "Base: ";
	cin >> base1;
			// make sure the user enters valid input
		while (base1 <= 0) {
			cout << "Invalid entry. Please enter a positive value for the base of triangle 1: ";
			cin >> base1; 
		}

	cout << "Height: ";
	cin >> height1;
			// make sure the user enters valid input
		while (height1 <= 0) {
			cout << "Invalid entry. Please enter a positive value for the height of triangle 1: ";
			cin >> height1; 
		}

	cout << "Enter data for triangle 2: " << endl << "Base: ";
	cin >> base2;
			// make sure the user enters valid input
		while (base2 <= 0) {
			cout << "Invalid entry. Please enter a positive value for the base of triangle 2: ";
			cin >> base2; 
		}
		
	cout << "Height: ";
	cin >> height2;
			// make sure the user enters valid input
		while (height2 <= 0) {
			cout << "Invalid entry. Please enter a positive value for the height of triangle 2: ";
			cin >> height2; 
		} 

	double area1 = .5*base1*height1;  //calculate the areas, find the difference
	double area2 = .5*base2*height2;
	double difference = area1 - area2;

	if (area1 > area2) 
		cout << "Triangle 1 is bigger by " << difference << " units." << endl;
	else if (area1 < area2)
		cout << "Triangle 2 is bigger by " << -difference << " units." << endl;
	else 
		cout << "Triangle 1 and Triangle 2 have the same area." << endl;

return 0;
}
