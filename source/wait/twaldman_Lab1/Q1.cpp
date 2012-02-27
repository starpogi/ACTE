/*Thomas Waldman U19049962*/
#include <iostream>
using namespace std;

int main()
{
	int base1, height1, base2, height2;
	double area1, area2, diff;
	//read in base and height for both triangels and error check input
	cout<<"Enter the information for the first triangle: "<<endl;
	cout<<"Base: ";
	cin>> base1;
	
	while (base1 <= 0)
	{
		cout<<"Error, value must be > 0"<<endl;
		cout<<"Base: ";
		cin>> base1;
	}

	cout<<"Height: ";
	cin>> height1;
	while (height1 <= 0)
	{
		cout<<"Error, value must be > 0"<<endl;
		cout<<"Height: ";
		cin>> height1;
	}
	

	cout<<"Second Triangle"<<endl;
	cout<<"Base: ";
	cin>> base2;

	while (base2 <= 0)
	{
		cout<<"Error, value must be > 0"<<endl;
		cout<<"Base: ";
		cin>> base2;
	}

	cout<<"Height: ";
	cin>> height2;
	while (height2 <= 0)
	{
		cout<<"Error, value must be > 0"<<endl;
		cout<<"Height: ";
		cin>> height2;
	}
	
	//calculate the areas
	area1 = 0.5*base1*height1;
	area2 = 0.5*base2*height2;
	
	//decide which is bigger
	if (area1 > area2)
	{
		diff = area1 -area2;
		cout<<"Triangle 1 is bigger by "<< static_cast<int>(diff*100)/100.<<" units."<<endl;
	}
	else if (area1 < area2)
	{
		diff = area2 -area1;
		cout<<"Triangle 2 is bigger by "<< static_cast<int>(diff*100)/100.<<" units."<<endl;
	}
	else
	{
		cout<<"Triangle 1 and triangle 2 have equal areas"<<endl;
	}
	return 0;
}
