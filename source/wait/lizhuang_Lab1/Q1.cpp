# include <iostream>
# include <iomanip>
using namespace std;

int main()

{

int b1,h1,b2,h2;

//check if the user input valid value. If not it prompts user to enter numbers again.
do{
//prompt user to enter the information of two triangles.	
	cout<<"Enter the information for the first triangle:"<<endl;
	cout<<"Base: ";
	cin>>b1;
	cout<<"Height: ";
	cin>>h1;

	cout<<"Second Triangle:"<<endl;
	cout<<"Base: ";
	cin>>b2;
	cout<<"Height: ";
	cin>>h2;

} while (b1<=0 || h1<=0 || b2<=0 || h2<=0);

//calculate the areas of each triangle
double area1=b1*h1*1.0/2;
double area2=b2*h2*1.0/2;


//compare the areas of two triangles
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
	cout<<"Two triangles have same area."<<endl;
}

return 0;
}
