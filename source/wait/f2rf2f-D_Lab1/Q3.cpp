/*David Zou, U49526734, 2/11/12
 *This program computes the hammering distance between 2 integers.
  */
#include <iostream>
using namespace std;

int main(){

	int value1, value2, unit1, unit2;

	//get the two integers from user and errror check to make sure they are
	//between 0 and 999999.
	cout<<"Enter two integers between 0 and 999999: ";
	cin>>value1>>value2;
	while( value1<0 ||value1>999999 || value2<0 ||value2>999999){
		cout<<"Error, values must be between 0 and 999999. Please Try Again: ";
		cin>>value1>>value2;
	}

	//First part of print output is printed now because value1 and value2 will be changed
	cout<<"Hamming Distance between "<<value1<<" and "<<value2<< " is ";


	//Inititaes a count that will be increased every time the digits dosn't match
	int count=0;

	//The loop will itereate until both numbers are zero. During each loop,
	//the last digits will be compared using the mod function. Each number will
	//then be divided by 10 so that when the loop executes again, the next digit
	//will be compared.
	while (value1>0 || value2>0){
		unit1=value1%10;
		unit2=value2%10;

		if(unit1!=unit2){
			count++;
		}
		value1 /=10;
		value2 /=10;
	}

	cout<<count<<"."<<endl;
	return 0;
}


