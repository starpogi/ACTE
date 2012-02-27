/*
 * Michael Abed <mgabed@bu.edu>
 *
 * Lab 1 Problem 1
 *
 * Compare area of 2 triangles
 */

#include <iostream>

using namespace std;
int main()
{
    double t1b, t1h, t2b, t2h; // base and height of triangle 1 and 2
    cout << "Enter the information for the first triangle:" << endl;

    // make sure valid things are entered
    do { // triangle 1 base
        cout << "Base: ";
        cin >> t1b;
        if (t1b - (int)t1b != 0 || t1b <= 0)
            cout << "Please enter a positive integer" << endl;
    } while (t1b <= 0 || t1b - (int)t1b != 0);

    do { // triangle 1 height
        cout << "Height: ";
        cin >> t1h;
        if (t1h - (int)t1h != 0 || t1h <= 0)
            cout << "Please enter a positive integer" << endl;
    } while (t1h <= 0 || t1h - (int)t1h != 0);

    cout << "Second Triangle:" << endl;

    do { // triangle 2 base
        cout << "Base: ";
        cin >> t2b;
        if (t2b - (int)t2b != 0 || t2b <= 0)
            cout << "Please enter a positive integer" << endl;
    } while (t2b <= 0 || t2b - (int)t2b != 0);

    do { // triangle 2 height
        cout << "Height: ";
        cin >> t2h;
        if (t2h - (int)t2h != 0 || t2h <= 0)
            cout << "Please enter a positive integer" << endl;
    } while (t2h <= 0 || t2h - (int)t2h != 0);

    double area1 = 0.5 * t1h * t1b;
    double area2 = 0.5 * t2h * t2b;

    if (area1 > area2)
        cout << "Triangle 1 is bigger by " << area1-area2 << " units." << endl;
    else if (area2 > area1)
        cout << "Triangle 2 is bigger by " << area2-area1 << " units." << endl;
    else
        cout << "Triangle 1 and Triangle 2 are the same size" << endl;
    return 0;
}
