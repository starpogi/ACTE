#include <iostream>
using namespace std;

// This program will calculate the area of two triangles whose inputs are given by the user.
// It will then determine which of the triangles is bigger, and by how much.

int main()
{
   // Initialize variables.
   int triangleNum;
   double base1, base2, height1, height2, area1, area2, diff;
   
   // Prompt the user to enter the height and base information for the first triangle.
   // Input must be as positive integers. Loop until this condition is met.
   cout << "Enter the information for the first triangle: " << endl;
   cout << "Base: ";
   cin >> base1;
   while (base1 <= 0)
   {
         cout << "Error! Input must be a positive integer." << endl;
         cout << "Base: ";
         cin >> base1;
   }
   cout << "Height: ";
   cin >> height1;
   while (height1 <= 0)
   {
         cout << "Error! Input must be a positive integer." << endl;
         cout << "Height: ";
         cin >> height1;
   }
   // Use height and base information to calculte the area of Triangle 1.
   area1 = 0.5 * base1 * height1;
   
   // Prompt the user to enter the height and base information for the second triangle.
   // Input must be as positive integers. Loop until this condition is met.
   cout << "Second Triangle: " << endl;
   cout << "Base: ";
   cin >> base2;
   while (base2 <= 0)
   {
         cout << "Error! Input must be a positive integer." << endl;
         cout << "Base: ";
         cin >> base2;
   }
   cout << "Height: ";
   cin >> height2;
   while (height2 <= 0)
   {
         cout << "Error! Input must be a positive integer." << endl;
         cout << "Height: ";
         cin >> height2;
   }
   // Use height and base information to calculate the area of Triangle 2.
   area2 = 0.5 * base2 * height2;
   
   // Determine which triangle has the larger area.
   // For the case of area of Triangle 1 is greater than Area of Triangle 2.
   if (area1 > area2) 
   {
         triangleNum = 1;
         diff = area1 - area2;
         cout << "Triangle " << triangleNum << " is bigger by " << ( diff ) << " units." << endl;
   }
   // For the case of area of Triangle 2 is greater than Area of Triangle 1.
   else if (area2 > area1)
   {
          triangleNum = 2;
          diff = area2 - area1;
          cout << "Triangle " << triangleNum << " is bigger by " << ( diff ) << " units squared." << endl;
   }
   // For the case of the area of Triangle 1 is equal to the Area of Triangle 2.
   else
   {
          cout << "Both triangles are the same size." << endl;
   }
          
   return 0;
}  
