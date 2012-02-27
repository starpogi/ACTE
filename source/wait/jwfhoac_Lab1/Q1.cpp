#include <iostream>
using namespace std;

int main ()
{
	// Takes in user inputted dimensions.
	double base1, base2, height1, height2;
	
	cout << "Enter the information for the first triangle: " << endl;
	
	cout << "Base: ";
	cin >> base1;

	cout << "Height: ";
	cin >> height1;

	cout << "Second Triangle: " << endl;

	cout << "Base: ";
	cin >> base2;

	cout << "Height: ";
	cin >> height2;

	// Error checks for nonpositive inputs.
	while ((base1 <= 0) || (base2 <= 0) || (height1 <= 0) || (height2 <= 0))
	{
		cout << endl << "Please enter positive integer values." << endl;

		cout << "Base: ";
		cin >> base1;

		cout << "Height: ";
		cin >> height1;

		cout << "Second Triangle: " << endl;

		cout << "Base: ";
		cin >> base2;

		cout << "Height: ";
		cin >> height2;
	}

	// Calculates area of each triangle.
	double area1, area2;

	area1 = (base1 * height1) / 2;
	area2 = (base2 * height2) / 2;

	// Compares and prints which triangle has a larger area and by how many units.
	if  (area1 >= area2)
	{
		cout << "Triangle 1 is bigger by " << area1 - area2 << " units." << endl;
	}
	else
		cout << "Triangle 2 is bigger by " << area2 - area1 << " units." << endl;

	// For visual studio
	//system("pause");

	return 0;
}