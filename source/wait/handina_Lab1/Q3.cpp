#include <iostream>
using namespace std;

int main()
{
    
//Declare variables
long integer1;
long integer2;

long integer1Print;
long integer2Print;
    
int int1dig1;
int int1dig2;
int int1dig3;
int int1dig4;
int int1dig5;
int int1dig6;

int int2dig1;
int int2dig2;
int int2dig3;
int int2dig4;
int int2dig5;
int int2dig6;


  
int hamming = 0;
    
//Ask the user to input two integers between 0 and 999,999
cout << "Enter two integers between 0 and 999999: " << endl;


//Use a loop to error check the input
    do 
    {cin >> integer1 >> integer2;
    if (integer1 < 0 || integer1 > 999999 || integer2 < 0 || integer2 > 999999)
        cout << "Error, please try again: " << endl;}
    while (integer1 < 0 || integer1 > 999999 || integer2 < 0 || integer2 > 999999);
    
//Store the inputed variables in two additional variables for future referencing:
integer1Print = integer1;
integer2Print = integer2;
    
//Determine the digits for integer1 and store each into a separate variable

    int1dig1 = integer1 % 10;
        integer1 = static_cast<int>(integer1/10);
    int1dig2 = integer1 % 10;
        integer1 = static_cast<int>(integer1/10);
    int1dig3 = integer1 % 10;
        integer1 = static_cast<int>(integer1/10);
    int1dig4 = integer1 % 10;
        integer1 = static_cast<int>(integer1/10);
    int1dig5 = integer1 % 10;
        integer1 = static_cast<int>(integer1/10);
    int1dig6 = integer1 % 10;
  

    

    
//Determine the digits for integer2 and store each into a separate variable
    
    int2dig1 = integer2 % 10;
        integer2 = static_cast<int>(integer2/10);
    int2dig2 = integer2 % 10;
        integer2 = static_cast<int>(integer2/10);
    int2dig3 = integer2 % 10;
        integer2 = static_cast<int>(integer2/10);
    int2dig4 = integer2 % 10;
        integer2 = static_cast<int>(integer2/10);
    int2dig5 = integer2 % 10;
        integer2 = static_cast<int>(integer2/10);
    int2dig6 = integer2 % 10;
    

    
  




//Compare the values of corresponding pairs of digits from each integer:

if (int1dig1 != int2dig1)
    hamming++;
if (int1dig2 != int2dig2)
    hamming++;
if (int1dig3 != int2dig3)
    hamming++;
if (int1dig4 != int2dig4)
        hamming++;
if (int1dig5 != int2dig5)
        hamming++;
if (int1dig6 != int2dig6)
        hamming++;

//Print the results of the Hamming distance calculation:

cout << "Hamming distance between " << integer1Print << " and " << integer2Print << " is " << hamming << endl;

    return 0;
}
