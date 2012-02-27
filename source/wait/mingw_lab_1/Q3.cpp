/***********************************************************************
* Yingming Wang U82513434
* Lab 1 Question #3
* Count the hamming distance for two integers within 0 - 999,999 range
************************************************************************/
#include <iostream>

using namespace std;
int main(){
//num1 and num2 are numbers entered by users will be compared later.
	int num1;
	int num2;
//a1 - f1 are the value of first - last digit of the first number entered
//a2 - f2 are the value of first - last digit of the second number entered.
	int a1;
	int b1;
	int c1;
	int d1;
	int e1;
	int f1;
	int a2;
	int b2;
	int c2;
	int d2;
	int e2;
	int f2;
/*dist is the # of difference positions at which the corresponding symbols are different.*/
	int dist = 0;
//Check if num1 and num2 are within the valid region. Ask the user to enter the number again if the number entered are not in between 0 and 999,999.
	cout <<"Enter two integers between 0 and 999,999: ";
	cin >> num1 >> num2;
		while (num1 < 0){
			cout <<"Number needs to be in between 0 and 999,999: ";
			cin >> num1 >> num2;}
		while (num2 < 0){
			cout <<"Number needs to be in between 0 and 999,999: ";
			cin >> num1 >> num2;}
		while (num1 > 999999){
			cout <<"Number needs to be in between 0 and 999,999: ";
			cin >> num1 >> num2;}
		while (num2 > 999999){
			cout <<"Number needs to be in between 0 and 999,999: ";
			cin >> num1 >> num2;}
//Get the first - last digit from num1 and num2 and store in a1-f1, a2-f2 
//correspondingly. 
	a1 = num1 % 1000000/100000;
	a2 = num2 % 1000000/100000;
		if(a1!=a2)  dist++; 
	b1 = num1 % 100000/10000;
	b2 = num2 % 100000/10000;
		if(b1!=b2)  dist++; 
	c1 = num1 % 10000/1000;
	c2 = num2 % 10000/1000;
		if(c1!=c2)  dist++; 
	d1 = num1 % 1000/100;
	d2 = num2 % 1000/100;
		if(d1!=d2)  dist++; 
	e1 = num1 % 100/10;
	e2 = num2 % 100/10;
		if(e1!=e2)  dist++; 
	f1 = num1 % 10/1;
	f2 = num2 % 10/1;
		if(f1!=f2)  dist++; 
//Print out the result
	cout<<"Hamming distance between "<<num1<<" and "<<num2<<" is "<<dist<<" ."<<endl;
	


return 0;
}
       
