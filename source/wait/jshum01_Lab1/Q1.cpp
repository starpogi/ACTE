//Jason Shum U13401786

#include <iostream>
using namespace std;

int main(){ 

double base1, base2, height1, height2;

// Enter first base and error checks if greater than zero
 cout << "Enter the information for the first triangle:"<< endl;
 cout << "Base:"; 
 cin >> base1;
 while (base1 <= 0) {
   cout << "Error! Please enter a number > zero: "<< endl; 
   cin >> base1;
 }

// Enter first height and error checks if greater than zero
 cout << "Height:";
 cin >> height1;
 while (height1 <= 0) {
   cout << "Error! Please enter a number > zero: "<< endl; 
   cin >> height1;
 }

// Enter second base and error checks if greater than zero
 cout << "Second Triangle:" << endl;
 cout <<"Base:";
 cin >> base2 ;
 while (base2 <= 0) {
   cout << "Error! Please enter a number > zero: "<< endl; 
   cin >> base2;
 }

// Enter second height and error checks if greater than zero
 cout << "Height:";
 cin >> height2;
 while (height2 <= 0) {
   cout << "Error! Please enter a number > zero: "<< endl; 
   cin >> height2;
 }
   


 // Calculates triangles
 double trianglearea1 = (1.0/2)* base1 * height1;
 double trianglearea2 = (1.0/2)* base2 * height2;

 //Spits out outputs 
 if(trianglearea1 > trianglearea2){
   cout << "Triangle 1 is bigger by " << (trianglearea1-trianglearea2)<< endl;
 }
 else if (trianglearea1 < trianglearea2) {
   cout << "Triangle 2 is bigger by " << (trianglearea2 - trianglearea1) << " units" <<endl;
 }
 else 
   cout<< "They are equal." << endl;
   

return 0;

}
