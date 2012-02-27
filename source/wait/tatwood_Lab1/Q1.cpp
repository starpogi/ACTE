#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    /* I know the inputs are meant to be integers, but incase they aren't I've inititialized these variables as type double. Otherwise, the user might enter 2.2 and the program will round it to 2. */ 
    
    
    double base1, base2, height1, height2;
    double area1, area2;
    
    // Promt the user for the base and the height of two triangles
    
    cout << "Enter the information for the first triangle: " << endl;
    cout << "Base: ";
    cin >> base1;
    cout << "Height: ";
    cin >> height1;
    
    cout << "Second triangle: " << endl;
    cout << "Base: ";
    cin >> base2;
    cout << "Height: ";
    cin >> height2;
    
    // Check to make sure the values are positive integers
    
    if (base1 <= 0 || base2 <= 0 || height1 <= 0 || height2 <= 0)
    {cout << "Error, base and height must be positive integers!" << endl;
        return 0;
    }
    else
    {
        // Calculate the area of each triangle
        
        area1 = ((double)base1 * height1)/2;
    //    cout << "H1 = " << height1 << endl;
    
        area2 = ((double)base2 * height2)/2;
    //    cout << "H2 = " << height2 << endl;
        
/*        // Figure out how many digits to display for two decimals 
        int i = 1;
        
        while (area1 > pow(10.0, i-2) || area2 > pow(10.0, i-2))
               {
                i++;   
               }
        cout << i << endl;
        
Unnecessary now that i found the set precision operator 

*/         
        if (area1 > area2)
        {
            // I found the setprecision operatore online
            cout << fixed;
            cout << "Traingle 1 is bigger by " << setprecision (2) << (area1 - area2) << " units." <<endl;
        }
        else
        {
            cout << fixed;
            cout << "Triangle 2 is bigger by " << setprecision (2) << (area2 - area1) << " units." << endl;
        }
    }
    return 0;
}