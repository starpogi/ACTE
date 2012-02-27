/*
 * q1.cpp
 *	Lab 1 EC 327
 *  Created on: Feb 8, 2012
 *      Author: joerafalak
 */



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//dimensions of first triangle
	int base1;
	int height1;
	cout<<"Enter the base of the first triangle: "<<endl;
	cin>>base1;

	while (base1 < 0)
	{
		cout<<"The value you entered was invalid, please re-enter: "<<endl;
		cin>>base1;
	}

	cout<<"Enter the height of the first triangle: "<<endl;
	cin>>height1;

	while (height1 < 0)
	{
		cout<<"The value you entered was invalid, please re-enter: "<<endl;
		cin>>height1;
	}

	//dimensions of second triangle
	int base2;
	int height2;
	cout<<"Enter the base of the second triangle: "<<endl;
	cin>>base2;

	while (base2 < 0)
	{
		cout<<"The value you entered was invalid, please re-enter: "<<endl;
		cin>>base2;
	}

	cout<<"Enter the height of the second triangle: "<<endl;
	cin>>height2;

	while (height2 < 0)
	{
		cout<<"The value you entered was invalid, please re-enter: "<<endl;
		cin>>height2;
	}

	//calculating the area of the two triangles
	double area1 = (0.5)*(base1*height1);
	double area2 = (0.5)*(base2*height2);
	double difference;

	//determining which triangle is bigger and by how much
	if(area1>area2)
	{
		difference = area1 - area2;
		cout<<"Triangle 1 is "<<setprecision(4)<<difference<<" unit(s) larger than triangle 2."<<endl;
	}
	else if(area2>area1)
	{
		difference = area2 - area1;
		cout<<"Triangle 2 is "<<setprecision(4)<<difference<<" unit(s) larger than triangle 1."<<endl;
	}
	else
	{
		cout<<"The triangles are the same size."<<endl;
	}

	return 0;
}
