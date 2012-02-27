/*Michelle So U57477532

This script computes the area of two triangles, and prints out the larger of the two as well as the difference in area. Also error checks to find if the inputs are positive integers. */

#include <iostream>
using namespace std;
int main() { 
	int base1, height1, base2, height2, area1, area2, diff, num;
	
	//Ask user for inputs; error check
	cout<<"Enter the information for the first triangle: \nBase: ";
	cin>>base1;
	cout<<"Height: ";
	cin>>height1;
	cout<<"Second Triangle: \nBase: ";
	cin>>base2;
	cout<<"Height: ";
	cin>>height2;
	while (base1 <= 0 || base2 <= 0 || height1<= 0 || height2<= 0)
		{cout<< "Error! Please enter positive integers:\nBase: ";
		cin>>base1;
		cout<<"Height: ";
		cin>>height1;
		cout<<"Second Triangle: \nBase: ";
		cin>>base2;
		cout<<"Height: ";
		cin>>height2; }
	
	//Cast variables as floats to show decimal places; do calculations
	static_cast<float>(base1,height1,base2,height2);
	area1 = base1*height1*.5;
	area2 = base2*height2*.5;
	
	//Compare triangles, print
	if (area1 > area2) 
		{diff = area1-area2;
		num = 1;
		cout<< "Triangle" <<num<<" is bigger by "<<diff<<" units."<<endl;}
	else if (area1 < area2)
		{diff = area2-area1;
		cout<< "Triangle " <<num<<" is bigger by "<<diff<<" units."<<endl;}
	else {diff = 0;
		cout<< "The triangles are the same size!"<<endl;}
return 0;
}
