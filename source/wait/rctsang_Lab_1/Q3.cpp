/*
EC327 - Lab 1 - Q3: Prompts the user to enter two integers and calculates the hamming distance between them.
	(note: integer 132 is interpreted as 000132)
*/

#include <iostream>
using namespace std;


int main()
{
	int dist = 0, truth, x, y, i, a, b, d1, d2;
	
	cout << "Enter two integers between 0 and 999999: ";
	cin >> x;
	cin >> y;

	while (x < 0 || x > 999999)
	  {
	    cout << "ERROR: x was either greater than 999999 or less than 0." << endl; 
	    cout << "Enter a new value for x: ";
	    cin >> x;
	  }

	while (y < 0 || y > 999999)
	  {
	    cout << "ERROR: y was either greater than 999999 or less than 0." << endl; 
	    cout << "Enter a new value for y: ";
	    cin >> y;
	  }

	d1 = x;
	d2 = y;

	for (i = 1; i < 8; i++)
	{
		a = x % 10;
		b = y % 10;
		x = x/10;
		y = y/10;
		if (a != b)
			dist++;
	}

	cout << "Hamming distance between " << d1 << " and " << d2 << " is "<< dist << "." << endl;

	return 0;
}
