/*
This program reads in the information on two triangles, computes their area, and prints out which is bigger and by how much on the screen. The information for the triangles is given as arbitrary positive integers ( >0 ).
If integers <=0 are entered it displays an error message
*/
#include <iostream>
using namespace std;

int base1, base2, height1, height2;

char sug1[] = "Enter the information for the first triangle: ";
char b1[] = "Base: ";
char h1[] = "Height: ";
char sug2[] = "Enter the information for the second triangle: ";
char b2[] = "Base: ";
char h2[] = "Height: ";

char er1[] = "Error: You entered a base less than or equal to zero. \nEnter a base greater than zero: ";
char er2[] = "Error: You entered a height less than or equal to zero. \nEnter a height greater than zero: ";

char res1[] = "Triangle 1 is bigger by ";
char res2[] = "Triangle 2 is bigger by ";
char res3[] = "The triangles have an equal area ";

double area1, area2, diff;
const double half = 0.5;

int main()
{
	//Prompting and error checking ONCE for triangle 1
	cout << sug1 << endl << b1;
	cin >> base1;
	cout << h1;
	cin >> height1;
	if (base1 <= 0)
	{
		cout << er1;
		cin >> base1;
	}
	if (height1 <= 0)
	{
		cout << er2;
		cin >> height1;
	}
	//Prompting and error checking ONCE for triangle 2
	cout << sug2 << endl << b2;
	cin >> base2;
	cout << h2;
	cin >> height2;
	if (base2 <= 0)
	{
		cout << er1;
		cin >> base2;
	}
	if (height2 <= 0)
	{
		cout << er2;
		cin >> height2;
	}
	//Calculating the triangle areas
	area1 = (half * base1 * height1);
	area2 = (half * base2 * height2);
	
	//Checking for the biggest area and calculating the difference
	if (area1 == area2)
	{
		cout << res3 << endl;
	}
	if (area1 > area2)
	{
		diff = (area1/area2);
		cout.precision(4);
		cout << fixed << res1 << diff << " units." << endl;
	}
	if (area1 < area2)
	{
		diff = (area2/area1);
		cout.precision(4);
		cout << fixed << res2 << diff << " units." << endl;
	}

	return 0;
}
