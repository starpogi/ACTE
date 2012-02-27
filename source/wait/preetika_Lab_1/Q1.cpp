/* Program that takes parameters of two triangles and gives you 
the difference in thier areas */

#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	int h1, h2, b1, b2;		// height and base of triangles

	cout<<"Enter the information for the first triangle:"<<endl;
	cout<<"Base: ";
	cin>>b1;
	
	if (b1 < 0)			//error checking
	{
		cout<<"Enter non negative base: ";
		cin>>b1;
	}

	cout<<"Height: ";
	cin>>h1;

	if (h1 < 0)			//error checking
	{
		cout<<"Enter non negative height: ";
		cin>>h1;
	}

	cout<<"Second Triangle:"<<endl<<"Base: ";
	cin>>b2;

	if (b2 < 0)			//error checking
	{
		cout<<"Enter non negative base: ";
		cin>>b2;
	}

	cout<<"Height: ";
	cin>>h2;

	if (h2 < 0)			//error checking
	{
		cout<<"Enter non negative height: ";
		cin>>h2;
	}


	double area1 = 0.5*b1*h1;
	double area2 = 0.5*b2*h2;

	if ( area1 > area2 )
		cout<<"Triangle 1 is bigger by "<<(area1/area2)<<" units";
	else
		cout<<"Triangle 2 is bigger by "<<(area2/area1)<<" units";

	getch();

	return 0;
}

