/*
 * Michael Abed <mgabed@bu.edu>
 *
 * Lab 1 Problem 3
 *
 * Calculate hamming distance between 2 decimal numbers
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int n1, n2;
    bool good;
    do { // read in valid numbers
        cout << "Enter two integers between 0 and 999999: ";
        cin >> n1 >> n2;
        good = n1 <= 999999 && n1 >= 0 && n2 <= 999999 && n2 >= 0;
        if (!good)
            cout << "The numbers must be between 0 and 999999" << endl;
    } while (!good);

    int distance = 0;
    int d1, d2;
    int no1 = n1; //store original
    int no2 = n2; 

    /*
     * The Hamming distance between 2 decimal numbers
     *
     * Compare 1's place of both numbers,
     * if not equal, the distance increases by 1.
     * Move to the next place value and repeat
     * we're done when both numbers get to 0
     */
    while (n1 != 0 || n2 != 0) {
        d1 = n1 % 10;
        d2 = n2 % 10;
        if (d1 != d2)
            distance++;
        n1 /= 10;
        n2 /= 10;
    } 
    cout << "Hamming distance between " << no1 << " and " << no2 << " is " << distance << endl;
    return 0;
}
