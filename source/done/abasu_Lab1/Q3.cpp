#include <iostream> 
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
	// declare integer variables
    long long num1, num2;
    int d1,d2,d3,d4,d5,d6; // digit variables for num1
    int s1,s2,s3,s4,s5,s6; // digit variables for num2
    int rem;
    int rem2; 

    // prompt user for two integers
    cout << "Enter two integers between 0 and 999999: " << endl;
    cin >> num1;

    // check for invalid values for first integer
    while (num1 < 0 || num1 > 999999){
    cout << "Please enter an integer between 0 and 999999: " << endl;
    cin >> num1;
    }

    cin >> num2;
    // check for invalid values for second integer
    while (num2 < 0 || num2 > 999999){
    cout << "Please enter an integer between 0 and 999999: " << endl;
    cin >> num2;
    }
    
    // separate num1 digits
    if (num1 > 99999){
             // 6 digit numbers
             d1 = num1 / 100000;
             rem = num1 % 100000;
             d2 = rem / 10000;
             rem = rem % 10000;
             d3 = rem / 1000;
             rem = rem % 1000;
             d4 = rem / 100;
             rem = rem % 100;
             d5 = rem / 10;
             rem = rem % 10;
             d6 = rem;
             }
    else if (num1 > 9999) { 
         // 5 digit numbers
         d1 = 0;
         d2 = num1 / 10000;
         rem = num1 % 10000;
         d3 = rem / 1000;
         rem = rem % 1000;
         d4 = rem / 100;
         rem = rem % 100;
         d5 = rem / 10;
         rem = rem % 10;
         d6 = rem;
         }
    else if (num1 > 999){
         // 4 digit numbers
         d1 = 0;
         d2 = 0;
         d3 = num1 / 1000;
         rem = num1 % 1000;
         d4 = rem / 100;
         rem = rem % 100;
         d5 = rem / 10;
         rem = rem % 10;
         d6 = rem;
         }
    else if (num1 > 99){
         // 3 digit numbers
         d1 = 0;
         d2 = 0;
         d3 = 0;
         d4 = num1 / 100;
         rem = num1 % 100;
         d5 = rem / 10;
         rem = rem % 10;
         d6 = rem;
         }
    else if (num1 > 9){
         // 2 digit numbers
         d1 = 0;
         d2 = 0;
         d3 = 0;
         d4 = 0;
         d5 = num1 / 10;
         rem = num1 % 10;
         d6 = rem;
         }
    else {
         d1 = 0;
         d2 = 0;
         d3 = 0;
         d4 = 0;
         d5 = 0;
         d6 = num1;
         }
           
             
    // separate num2 digits
    if (num2 > 99999){
             // 6 digit numbers
             s1 = num2 / 100000;
             rem2 = num2 % 100000;
             s2 = rem2 / 10000;
             rem2 = rem2 % 10000;
             s3 = rem2 / 1000;
             rem2 = rem2 % 1000;
             s4 = rem2 / 100;
             rem2 = rem2 % 100;
             s5 = rem2 / 10;
             rem2 = rem2 % 10;
             s6 = rem2;
             }
    else if (num2 > 9999) { 
         // 5 digit numbers
         s1 = 0;
         s2 = num2 / 10000;
         rem2 = num2 % 10000;
         s3 = rem2 / 1000;
         rem2 = rem2 % 1000;
         s4 = rem2 / 100;
         rem2 = rem2 % 100;
         s5 = rem2 / 10;
         rem2 = rem2 % 10;
         s6 = rem2;
         }
    else if (num2 > 999){
         // 4 digit numbers
         s1 = 0;
         s2 = 0;
         s3 = num2 / 1000;
         rem2 = num2 % 1000;
         s4 = rem2 / 100;
         rem2 = rem2 % 100;
         s5 = rem2 / 10;
         rem2 = rem2 % 10;
         s6 = rem2;
         }
    else if (num2 > 99){
         // 3 digit numbers
         s1 = 0;
         s2 = 0;
         s3 = 0;
         s4 = num2 / 100;
         rem2 = num2 % 100;
         s5 = rem2 / 10;
         rem2 = rem2 % 10;
         s6 = rem2;
         }
    else if (num2 > 9){
         // 2 digit numbers
         s1 = 0;
         s2 = 0;
         s3 = 0;
         s4 = 0;
         s5 = num2 / 10;
         rem2 = num2 % 10;
         s6 = rem2;
         }
    else {
         s1 = 0;
         s2 = 0;
         s3 = 0;
         s4 = 0;
         s5 = 0;
         s6 = num2;
         }
             
    // counts hamming distance
    int ham = 6;
    
    // count decreases with each match
    if (d1 == s1)
           ham -= 1;
           
    if (d2 == s2)
           ham -= 1;
    
    if (d3 == s3)
           ham -= 1;
           
    if (d4 == s4)
           ham -= 1;
    
    if (d5 == s5)
           ham -= 1;
           
    if (d6 == s6)
           ham -= 1; 
           

 
    // output statement showing hamming distance
    cout << "Hamming distance between " << num1 << " and " << num2 << " is " << ham << "." << endl;
    return 0;
}
	
