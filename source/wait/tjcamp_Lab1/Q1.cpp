# include <iostream>
using namespace std;


int main()

{

   cout << "Enter the information for the first traingle: ";
   cout << "\nBase: ";
   double base1;
   cin >> base1;
   cout << "Height: ";
   double height1;
   cin >> height1;
   
while (base1 < 0 || height1 < 0)

	{ cout << "Error, negative value, please re-enter the information for the first traingle: ";
          cout << "\nBase: ";
          cin >> base1;
          cout << "Height: ";
          cin >> height1;
         }

   cout << "Enter the information for the second traingle: ";
   cout << "\nBase: ";
   double base2;
   cin >> base2;
   cout << "Height: ";
   double height2;
   cin >> height2;

while (base2 < 0 || height2 < 0)

    { cout << "Error, negative value, please re-enter the information for the second traingle: ";
          cout << "\nBase: ";
          cin >> base2;
          cout << "Height: ";
          cin >> height2;
     }

double area1;
area1 = .5*base1*height1;

double area2;
area2 = .5*base2*height2;

double margin;
int triangle;

if (area1 > area2)
{margin = area1-area2; 
 triangle = 1;
}
else { margin = area2-area1; 
triangle = 2;
}

cout<< "Triangle "<<triangle<< " is bigger by "<<margin<< " units"<<endl;

return 0;
}


