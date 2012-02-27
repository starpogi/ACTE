/* 
 * File:   Q1.cpp
 * Author: Patrick Maruska
 * This program takes the dimensions of two triangles and
 * tells you which is bigger and by how much
 * 
 * Triangles compared
 * Though dimensions are different
 * Triangles equal
 *
 * Created on February 20, 2012, 2:36 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
    cout << "Enter the information for the first triangle:" << endl;
    cout << "Base:";
    int b1;
    do
    {
        cin >> b1;
        if (b1 <=0)
            cout << "Please input a number greater than 0." << endl;
    } while (b1 <= 0);
    cout << "Height:";
    int h1;
    do
    {
        cin >> h1;
        if (h1 <=0)
            cout << "Please input a number greater than 0." << endl;
    } while (h1 <= 0);
    cout << "Second Triangle:" << endl;
    cout << "Base:";
    int b2;
    do
    {
        cin >> b2;
        if (b2 <=0)
            cout << "Please input a number greater than 0." << endl;
    } while (b2 <= 0);
    cout << "Height:";
    int h2;
    do
    {
        cin >> h2;
        if (h2 <=0)
            cout << "Please input a number greater than 0." << endl;
    } while (h2 <= 0);
    
    double t1 = (double) b1 * (double) h1 / 2.0;
    double t2 = (double) b2 * (double) h2 / 2.0;
    
    if(t1 > t2)
        cout << "Triangle 1 is bigger by " << setprecision (2) << fixed << t1-t2 << " units.";
    else if(t1 < t2)
        cout << "Triangle 2 is bigger by " << setprecision (2) << fixed << t2-t1 << " units.";
    else
        cout << "These triangles are equal.";
    
    return 0;
}

