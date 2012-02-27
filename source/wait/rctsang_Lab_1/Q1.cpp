/* EC327
Question 1 of Lab 1.  Prompts user to input dimensions of two triangles and displays which one is bigger and by how much.
*/

#include <iostream>
using namespace std;

int main()
{
	double base1, height1, area1, base2, height2, area2, bigger;

	cout << "Enter the information for the first triangle:" << endl;

	cout << "Base: ";
	cin >> base1;

	while (base1 <= 0)
	{
		cout << "ERROR: Input must be greater than 0" << endl;
		cout << "Base: ";
		cin >> base1;
	}

	cout << "Height: ";
	cin >> height1;

	while (height1 <= 0)
	{
		cout << "ERROR: Input must be greater than 0" << endl;
		cout << "Height: ";
		cin >> height1;
	}

	area1 = 0.5*base1*height1;

	cout << "Second Triangle:" << endl;

	cout << "Base: ";
	cin >> base2;

	while (base2 <= 0)
	{
		cout << "ERROR: Input must be greater than 0" << endl;
		cout << "Base: ";
		cin >> base2;
	}

	cout << "Height: ";
	cin >> height2;

	while (height2 <= 0)
	{
		cout << "ERROR: Input must be greater than 0" << endl;
		cout << "Height: ";
		cin >> height2;
	}

	area2 = 0.5*base2*height2;

	bigger = area2 - area1;

	if (bigger < 0)
	{
		bigger = area1 - area2;
		cout << "Triangle 1 is bigger by " << bigger << " units." << endl;
	}
	else
	{
		cout << "Triangle 2 is bigger by " << bigger << " units." << endl;
	}

	return 0;
}
