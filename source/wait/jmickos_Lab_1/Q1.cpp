#include <iostream>
using namespace std;

/* This program computes the area of
two triangles, then states which triangle is bigger. */

int main()
{
int base1, base2, height1, height2;
double area1, area2, difference;

// Get necessary values from user

cout << "Enter the information for the first triangle:\n";
cout << "Base: ";
cin >> base1;
cout << "Height: ";
cin >> height1;
cout << "Second Triangle:" << endl;
cout << "Base: ";
cin >> base2;
cout << "Height: ";
cin >> height2;
if (base1 <=0 || base2<=0 || height1 <=0 || height2<=0)
    {
        cout << "Error: enter non-zero values next time." << endl;
        return 0;
    }

// Calculate areas
area1 = base1 * height1 / 2.0000;
area2 = base2 * height2 / 2.0000;

// Compare sizes
if (area1 > area2)
    {
        difference = area1 - area2;
        cout << "Triangle 1 is bigger by " << difference << " units." << endl;
    }
else if (area2 > area1)
    {
        difference = area2 - area1;
        cout << "Triangle 2 is bigger by " << difference << " units." << endl;
    }
else
    cout << "The two triangles are the same size." << endl;
return 0;
}
