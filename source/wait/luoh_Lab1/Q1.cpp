/*
Henry Luo
U47058961
EC327
Q1. Computing the Area of Triangles
*/
#include <iostream>
using namespace std;

int main()
{
	//Create our variables for triangle 1, triangle 2, and their respective areas
	double base1,height1,base2,height2,area1,area2,diff,tri,equal;

	//Ask user to enter values of base and height for triangle 1
	cout<<"Enter the base and height for the first triangle: "<<endl<<"Base: ";
	cin>>base1;
	while (base1<0){
		cout<<"Error, enter a value greater than zero: ";
		cin>>base1;
	}
	cout<<"Height: ";
	cin>>height1;
	while (height1<0){
		cout<<"Error, enter a value greater than zero: ";
		cin>>height1;
	}

	//Ask user to enter values for base and height of triangle 2
	cout<<"Second Triangle: "<<endl<<"Base: ";
	cin>>base2;
	while (base2<0){
		cout<<"Error, enter a value greater than zero: ";
		cin>>base2;
	}
	cout<<"Height: ";
	cin>>height2;
	while (height2<0){
		cout<<"Error, enter a value greater than zero: ";
		cin>>height2;
	}

	//Area of both triangles
	area1=(base1*height1)/2;
	area2=(base2*height2)/2;

	/*Compare triangles and print out difference
	Error check for equality*/
	if (area1>area2){
		diff=area1-area2;
		tri=1;
		cout<<"Triangle "<<tri<<" is bigger by "<<diff<<" units."<<endl;
	}
	else if(area2>area1){
		diff=area2-area1;
		tri=2;
		cout<<"Triangle "<<tri<<" is bigger by "<<diff<<" units."<<endl;
	}
	else if(area1==area2)
		cout<<"Both triangles have the same area."<<endl;
	else
		cout<<"Error"<<endl;

	return 0;
}
