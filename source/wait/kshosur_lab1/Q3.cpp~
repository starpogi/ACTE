#include <iostream>
using namespace std;

// This program determines the Hamming distance between two sequences of strings.
// The strings are input as numbers between 0 and 999,999.

int main()
{
   int hammingDistance = 0;
   int i; // Loop variable.
   // number1, number2 are input variables. 
   // number1_1, number2_2 are comparison variables.
   // number1loop, number2loop are the variables used in the loop because the values are changed.
   int number1, number2, number1_1, number2_2, number1loop, number2loop; 
   cout << "Enter two integers between 0 and 999999: ";
   cin >> number1 >> number2;
   // Set the loop variables to have same initial value as the inputs.
   number1loop = number1;
   number2loop = number2;   

   // Check that input numbers are within the range.    
   while ( number1 < 0 || number1 > 999999 )
   {
         cout << "Number 1 must be in the range 0-999999." << endl;
         cout << "Enter Number 1: ";
         cin >> number1;
   }
   while ( number2 < 0 || number2 > 999999 )
   {
         cout << "Number 2 must be in the range 0-999999." << endl;
         cout << "Enter Number 2";
         cin >> number2;
   }             
   
   // In this loop, compare the value of each number for each place value.
   for ( i = 1; i <= 100000; (i = i*10) )
   {
       // Compare the numbers for each place value.
       int number1_1 = number1loop / i;
       int number2_2 = number2loop / i;
       if ( (number1_1) != (number2_2) )
       {
            hammingDistance++;
       }
       // Chop off end of the number for next iteration of the loop.
       number1loop = number1loop % 10;
       number2loop = number2loop % 10;
   }
   
   cout << "Hamming distance between " << number1 << " and " << number2 << " is " << hammingDistance << "." << endl;        
       
   return 0;
}
