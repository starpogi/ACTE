#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // declare variables for first triangle
    float base1;
    float height1;
    
    // ask user for base of first triangle
    cout << "Enter the information for the first triangle:" << endl;
    cout << "Base: ";
    cin >> base1;
    
    // check for invalid values
    while (base1 <= 0)
    {
       cout << "Please enter a value greater than 0" << endl;
       cout << "Base: ";
       cin >> base1;
       }
    
    // ask user for height of first triangle
    cout << "Height: ";
    cin >> height1;
    
    // check for invalid values
    while (height1 <= 0)
    {
       cout << "Please enter a value greater than 0" << endl;
       cout << "Height: ";
       cin >> height1;
       }
    
    // declare variables for second triangle
    float base2;
    float height2;
    
    // ask user for base of second triangle
    cout << "Second Triangle:" << endl;
    cout << "Base: ";
    cin >> base2;
    
    // check for invalid values
    while (base2 <= 0)
    {
       cout << "Please enter a value greater than 0" << endl;
       cout << "Base: ";
       cin >> base2;
       }
    
    // ask user for height of second triangle
    cout << "Height: ";
    cin >> height2;
    
    // check for invalid values
    while (height2 <= 0)
    {
       cout << "Please enter a value greater than 0" << endl;
       cout << "Height: ";
       cin >> height2;
       }
    
    // calculate area of triangles and the difference in area
    float area1 = 0.5*base1*height1;
    float area2 = 0.5*base2*height2; 
    float diff;
    diff = abs(area1 - area2);
    
    // Cases for final statement
    if (area1 == area2){
       cout << "The two triangles are of the same size. " << endl;
       }
    else if (area1 > area2){
           cout << "Triangle 1 is bigger by " << fixed << setprecision(2) << diff << " units." << endl;
           }
    else {
         cout << "Triangle 2 is bigger by " << fixed << setprecision(2) << diff << " units." << endl;
         }
         
    return 0;     
}
