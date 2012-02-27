#include <iostream>
#include <math.h>
using namespace std;
//Finds the hamming distance between two numbers

int main() {
	int errorvar, distance=0, ham1[6], ham2[6], inp1, inp2, length=0, length1=0, length2=0, samedig;
	//Prompts the user for two numbers and error checks that they're valid.
	while (errorvar != 2) {
		if (errorvar == 1)
			cout << "Error! Please enter two integers between 0 and 999,999: ";
		else
			cout << "Enter two integers between 0 and 999,999: ";
		cin >> inp1 >> inp2;
		//Tests for valid input
		if ((inp1 >= 0) && (inp1 <= 999999) && (inp2 >= 0) && (inp2 <= 999999))
			errorvar=2;
		else
			errorvar=1;
	}
	int powten, midint, midint0, midint1;
	//This finds the length of the longest input and stores it in length
	for (int i=5; i>=0; i--) {
		powten=pow (10,i);
		midint=inp1/powten;
		if ((midint != 0) && (length1==0)) {
			length1=i+1;
		}
		midint=inp2/powten;
		if ((midint != 0) && (length2==0)) {
			length2=i+1;
		}
	}
	//Sets length to the longer of the two lengths
	if (length1>=length2)
		length=length1;
	else
		length=length2;
	midint=0; midint0=0; midint1=0;
	//This reads through the numbers and puts each place into a corresponding array spot
	for (int i=5; i>=0; i--) {
		//This places 0s in blank spots up to the first digit for both arrays
		if (length1<(i+1))
			ham1[(6-i)]=0;
		if (length2<(i+1))
			ham2[(6-i)]=0;
		if (length>=(i+1)) {
			powten=pow(10,i);
			midint=inp1/powten;
			ham1[(6-i)]=midint-midint0;
			midint0=midint*10;
			midint=inp2/powten;
			ham2[(6-i)]=midint-midint1;
			midint1=midint*10;
		}
	}
	/* The last part of the code, this runs through each digit in the number and subtracts it from the parrallel ham digit, if
	the difference is a non-leading zero, then the samedig value is incremented. Then samedig is subtracted from the
	length to give the hamming distance*/
	samedig=0;
	for (int i=5; i >= 0; i--) {
		//skips through i values until it reaches the length of the longest digit.
		if (length<(i+1))
			continue;
		else if (!(ham1[(6-i)]-ham2[(6-i)]))
			samedig++;
	}
	distance=length-samedig;
	cout << "Hamming distance between " << inp1 << " and " << inp2 << " is: " << distance << endl;
}

