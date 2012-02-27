/*Michelle So U57477532
This program calculates the Hamming distance between two sequences of equal length.
Diffstance is a pun on difference/distance. It made it easier for me to remember its functionality. */
#include <iostream>
using namespace std;

int main() {
int num1, num2, digit1, digit2;

//Prompt for inputs, error check for range
cout<< "Enter two integers between 0 and 999999: "<<endl;
cin>> num1 >> num2;

if (num1<0 || num2<0 || num1>999999 || num2>999999) {
    cout<< "Error: Choose two integers between 0 and 999999: "<<endl;
    cin>> num1>> num2;}

int i,diffstance=0;
int nnum1= num1;
int nnum2= num2;

//Mod10 to compare the units digits, and divide by 10 to get the next significant digits, mod10 again, etc.
for (i=0;i<6;i++) {
	digit1= nnum1%10;
	digit2= nnum2%10;
	if (digit1 != digit2){
		diffstance++;}
	nnum1 /= 10;
	nnum2 /= 10;	}

//Print.
cout<< "Hamming distance between " <<num1<< " and " <<num2<< " is " <<diffstance<< "." <<endl;
return 0;
}
