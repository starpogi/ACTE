#include <iostream> 
using namespace std;
int main()
{
	
	int base1;
	//prompt user for info, and store their input
	cout<<"Enter the information for the first triangle:"<<endl;
	cout<<"Base:";
	cin>>base1;
		//Error check
		while (base1 <= 0){
		cout<<"Please enter a positive integer:";
		cin>>base1;}
	int height1;
	cout<<"Height:";
	cin>>height1;
		//Error check
		while (height1 <= 0){
		cout<<"Please enter a positive integer:";
		cin>>height1;}
	int base2;
	cout<<"Second Triangle:"<<endl;
	cout<<"Base:";
	cin>>base2;
		//Error check
		while (base2 <= 0){
		cout<<"Please enter a positive integer:";
		cin>>base2;}
	int height2;
	cout<<"Height:";
	cin>>height2;
		//Error check
		while (height2<= 0){
		cout<<"Please enter a positive integer:";
		cin>>height2;}
	//calculate areas
	float area1= 0.5*base1*height1;
	float area2= 0.5*base2*height2;
	float difference;
	//Compare areas and difference, then print which one is bigger by how much
	if (area1 > area2){
		difference= area1 - area2;
		cout<<"Triangle 1 is bigger by "<<difference<<" units"<<endl;}
	else if (area2 > area1){
		difference= area2 - area1;
		cout<<"Triangle 2 is bigger by "<<difference<<" units"<<endl;}
	else 
		{difference=0;
		cout<<"The areas are equal"<<endl;}
return 0;
}
