#include <iostream>
using namespace std;

int main()
{

   cout << "Enter the information for the first triangle: " << endl;

   double base1;
   cout << "Base: ";
   cin >> base1;

while (base1 <= 0)
{
   cout << "Please enter a positive integer! " << endl;
   cout << "Base: ";
   cin >> base1;
}

   double height1;
   cout << "Height: ";
   cin >> height1;

while (height1 <= 0)
{
   cout << "Please enter a positive integer! " << endl;
   cout << "Height: ";
   cin >> height1;
}

   cout << "Second Triangle: " << endl;

   double base2;
   cout << "Base: ";
   cin >> base2;

while (base2 <= 0)
{
   cout << "Please enter a positive integer! " << endl;
   cout << "Base: ";
   cin >> base2;
}

   double height2;
   cout << "Height: ";
   cin >> height2;

while (height2 <= 0)
{
   cout << "Please enter a positive integer! " << endl;
   cout << "Height: ";
   cin >> height2;
}


   double area1;
   double area2;
   area1= base1 * height1 / 2;
   area2= base2 * height2 / 2;
   
if (area1 > area2)
{
   double ratio1=area1/area2;
   cout << "Triangle 1 is bigger by " << ratio1 << " units." << endl;
}

if (area2 > area1)
{
   double ratio2=area2/area1;
   cout << "Triangle 2 is bigger by " << ratio2 << " units." << endl;
}

   return 0;
}


