#include <iostream>
using namespace std;

int main()
{
	int num1,num2;
	//ask two integers
	cout<<"Please enter two integers between 0 and 999999: ";
	cin>>num1>>num2;
	//check if the integers are in range
	while ((num1<0||num1>999999)||(num2<0||num2>999999))
	{
		cout<<"Please enter two integers between 000000 and 999999: ";
		cin>>num1>>num2;
	}
	//find each number in the integer
	int a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,f2;
	a1=num1/100000;
	b1=num1/10000-a1*10;
	c1=num1/1000-a1*100-b1*10;
	d1=num1/100-a1*1000-b1*100-c1*10;
	e1=num1/10-a1*10000-b1*1000-c1*100-d1*10;
	f1=num1-a1*100000-b1*10000-c1*1000-d1*100-e1*10;
	
	a2=num2/100000;
	b2=num2/10000-a2*10;
	c2=num2/1000-a2*100-b2*10;
	d2=num2/100-a2*1000-b2*100-c2*10;
	e2=num2/10-a2*10000-b2*1000-c2*100-d2*10;
	f2=num2-a2*100000-b2*10000-c2*1000-d2*100-e2*10;
	
	//compare, if not equal, plus one
	int count=0;
	if ((a1-a2)!=0)
	{	count=count+1;}
	if ((b1-b2)!=0)
	{	count=count+1;}
	if ((c1-c2)!=0)
	{	count=count+1;}
	if ((d1-d2)!=0)
	{	count=count+1;}
	if ((e1-e2)!=0)
	{	count=count+1;}
	if ((f1-f2)!=0)
	{	count=count+1;}
	
	cout<<"Hamming distance between "<<num1<<" and "<<num2<<" is "<<count<<"."<<endl;
	return 0;
}
