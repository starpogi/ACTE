//Takes in measurements for two triangles and outputs which triangle is bigger and by how much

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int b1, b2, h1, h2;	//triangle inputs
	double a1,a2; //areas
	bool test;

	do {	//Triangle 1
		cout<<"Enter the information for the first triangle:\nBase: ";
		cin>>b1;
		cout<<"Height: ";
		cin>>h1;
		test=b1<=0||h1<=0; //error check
		if (test)
			cout<< "Try again"<<endl;
	} while (test);

	do {	//triangle 2
		cout<<"Second triangle:\nBase: ";
		cin>>b2;
		cout<<"Height: ";
		cin>>h2;
		test=b2<=0||h2<=0;
		if (test)
			cout<< "Try again"<<endl;
	} while (test);

	//area calculation
	a1=0.5*b1*h1;
	a2=0.5*b2*h2;

	int big;
	double diff;

	//check for equality case
	test = a1!=a2;

	if (test)	{
		if (a1>a2)	{
			big=1;
			diff=a1-a2;
		}
		else	{
			big=2;
			diff=a2-a1;
		}
		cout<<"Triangle "<<big<<" is bigger by "<<setprecision(6)<<showpoint<<diff<<" units."<<endl;
	}
	else
		cout<<"The triangles have the same area."<<endl;
		
	return 0;
}
