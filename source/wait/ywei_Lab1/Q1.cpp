#include <iostream>
using namespace std;

int main()
{
	
	int base1, height1,base2, height2;
	double area1,area2;	
	//information for the first triangle
	cout<<"Enter the information for the first triangle:"<<endl;
	cout<<"Base (integer): "<<endl;
	cin>>base1;
	cout<<"Height (integer): "<<endl;
	cin>>height1;
	
	//check and make sure that the base and height are both greater than zero.
	while(base1<=0||height1<=0)
	{	
		cout<<"The number has to be greater than zero"<<endl;
		cout<<"Enter the information for the first triangle:"<<endl;
		cout<<"Base (integer): "<<endl;
		cin>>base1;
		cout<<"Height (integer): "<<endl;
		cin>>height1;
	}
	//find the area of first triangle.
	area1=(1.0/2)*base1*height1;
	
	//enter the information for the second triangle	
	cout<<"Enter the information for the second triangle:"<<endl;
	cout<<"Base (integer): "<<endl;
	cin>>base2;
	cout<<"Height (integer): "<<endl;
	cin>>height2;
	
	//check and make sure that the base and height are both greater than zero.
	while(base2<=0||height2<=0)
	{	
		cout<<"The number has to be greater than zero"<<endl;
		cout<<"Enter the information for the second triangle:"<<endl;
		cout<<"Base (integer): "<<endl;
		cin>>base2;
		cout<<"Height (integer): "<<endl;
		cin>>height2;
	}
	//find the area of the second triangle
	area2=(1.0/2)*base2*height2;
	//find the difference and print out the result
	if (area1>area2)
	{
		double diff=area1-area2;
		cout.precision(2);
		cout<<"Triangle 1 is bigger by "<<fixed<<diff<<" units."<<endl;
	}
	else if (area1<area2)
	{
		double diff=area2-area1;
		cout.precision(2);
		cout<<"Triangle 2 is bigger by "<<fixed<<diff<<" units."<<endl; 
	}
	else
	{
		cout<<"Two triangle's areas are equal"<<endl;
	}
	return 0;
}
