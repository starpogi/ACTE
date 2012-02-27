// Question 3
# include <iostream>
using namespace std;

int main() {
cout<<"Enter two integers between 0 and 999999:";	// displays the statement in the terminal window
int i1,i2;	// declares i1 and i2 as integers
cin>>i1>>i2;	// allows the user to input a value for i1 and i2

if(i1<0 || i1>999999 || i2<0 || i2>999999)	// if the inputted number is not between 0 and 999999 this if statement will execute
{
cout<<"Please enter two integers between 0 and 999999"<<endl;	// displays the statement in the terminal window
return 0;	// terminates the program
}

int a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6,tot=0;	// declares the following varaibles as integers

a1=i1/100000 % 10;	// sets the 100000's place digit of i1 to a1
a2=i1/10000 % 10;	// sets the 10000's place digit of i1 to a2
a3=i1/1000 % 10;	// sets the 1000's place digit of i1 to a3
a4=i1/100 % 10;	// sets the 100's place digit of i1 to a4
a5=i1/10 % 10;	// sets the 10's place digit of i1 to a5
a6=i1/1 % 10;	// sets the 1's place digit of i1 to a6

b1=i2/100000 % 10;	// sets the 100000's place digit of i2 to b1
b2=i2/10000 % 10;	// sets the 10000's place digit of i2 to b2
b3=i2/1000 % 10;	// sets the 1000's place digit of i2 to b3
b4=i2/100 % 10;	// sets the 100's place digit of i2 to b4
b5=i2/10 % 10;	// sets the 10's place digit of i2 to b5
b6=i2/1 % 10;	// sets the 1's place digit of i2 to b6


if(a1!=b1)	// if the 100000's place digits are not equal execute this if statement
tot += 1;	// add 1 to the total

if(a2!=b2)	// if the 10000's place digits are not equal execute this if statement
tot += 1;	// add 1 to the total

if(a3!=b3)	// if the 1000's place digits are not equal execute this if statement
tot += 1;	// add 1 to the total

if(a4!=b4)	// if the 100's place digits are not equal execute this if statement
tot += 1;	// add 1 to the total

if(a5!=b5)	// if the 10's place digits are not equal execute this if statement
tot += 1;	// add 1 to the total

if(a6!=b6)	// if the 1's place digits are not equal execute this if statement
tot += 1;	// add 1 to the total


cout<<"Hamming distance between "<<i1<<" and "<<i2<<" is "<<tot<<endl;	// displays the statement filling in the two inputted numbers for i1 and i2 and the tot which is the hamming distance


return 0;	// terminates the program
}