#include <iostream>
using namespace std;

int main()
{
	//Assign all variables.
	double num1,num2,num3,num4,num5,are1,are2;
	cout<<"Enter the information for the firstriangle:"<<endl;
	cout<<"Base:";
	cin>>num1;
	cout<<"Height:";
	cin>>num2;	
	//Check the numbers wether they are integers or not
	while (num1<=0 || num2<=0)
		{
		cout<<"Enter a positive integer!"<<endl;
		cout<<"Base:";
		cin>>num1;
		cout<<"Height:";
		cin>>num2;
		}
	cout<<"Second Triangle:"<<endl<<"Base:";
	cin>>num3;
	cout<<"Height:";
	cin>>num4;
		while (num3<=0 || num4<=0)
		{
		cout<<"Enter a positive integer!"<<endl;
		cout<<"Second Triangle:"<<endl<<"Base:";
		cin>>num3;
		cout<<"Height:";
		cin>>num4;
		}
	//calculate triangle 1's and 2's area
	are1=num1*num2/2;
	are2=num3*num4/2;
		if(are1>=are2)
		{num5=are1-are2;
		cout.precision(2);
		cout<<"Triangle 1 is bigger by "<<fixed<<num5<<" units."<<endl;}
		if(are1<are2)
		{num5=are2-are1;
		cout.precision(2);
		cout<<"Triangle 2 is bigger by "<<fixed<<num5<<" units."<<endl;}
	return 0;
}
