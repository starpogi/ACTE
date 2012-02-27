// Question 1
# include <iostream>
using namespace std;

int main() {
double b1,h1,b2,h2;	// déclares variables as type double
cout<<"Enter the information for the first triangle:"<<endl;	// displays phrase
cout<<"Base:";
cin>>b1;	// allows user to enter variable
cout<<"Height:";
cin>>h1;
cout<<"Second Triangle:"<<endl;
cout<<"Base:";
cin>>b2;
cout<<"Height:";
cin>>h2;

if(b1<=0 || b2<=0 || h1<=0 || h2<=0)	// error checker
{
cout<<"Please enter dimensions that are greater than 0"<<endl;
return 0;
}

double a1 = (.5*b1*h1);	// sets area of a triangle formula to type double
double a2 = (.5*b2*h2);
double da1;	// sets da1 to type double
double da2;
if(a1<a2)
{
da1=a2-a1;	// calculates difference in area
cout<<"Triangle 2 is bigger by "<<da1 <<" units.";	// displays phrase replacing da1 with difference in area
}
else
{
da2=a1-a2;
cout<<"Triangle 1 is bigger by "<<da2<<"units.";
}
return 0;	// terminates program
}










