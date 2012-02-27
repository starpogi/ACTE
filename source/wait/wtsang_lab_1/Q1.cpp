#include <iostream>

using namespace std;

int main()
{
	// Assign variables to triangle parameters
	double base1;
	double height1;
	double area1;
	double base2;
	double height2;
	double area2;

	// Prompt 1
	cout<< "Enter the information for the first triangle:"<<endl;
	//  Input value for base (triangle 1)
	cout<< "Base:";
	cin>>base1;
	//Check if input value is valid
	while (base1 <= 0.0)
		{
			cout<<"Enter the base value again:";
			cin>> base1;
		}
	
	// Input value  for height (traingle 1)
	cout<< "Height:";
	cin>>height1;
	//check if input value is valid
	while (height1 <= 0.0)
		{
			cout<<"Enter the height value again:";
			cin>>height1;
		}
	
	// Compute Area 1
	area1=base1*height1/2;
	
	// Prompt 2
	cout<< "Enter the information for the second triangle:"<<endl;
	// Input value for base (triangle 2)
	cout<< "Base:";
	cin>>base2;
	// Check if input value is valid
	while (base2 <= 0.0)
		{
			cout<<"Enter the base value again:";
			cin>> base2;
		}
	
	// Input value for height (traingle 2) 
	cout<< "Height:";
	cin>>height2;
	// Check if input value is valid
	while (height2 <= 0.0)
		{
			cout<<"Enter the height value again:";
			cin>>height2; 
		}

	// Compute area 2
	area2=base2*height2/2;

	// Compare the two traingles
	if (area1>area2)
		{
		cout<<"Triangle 1 is bigger by "<< area1-area2 << " units." <<endl;
		}
	else if (area1<area2)
		{
		cout<<"Triangle 2 is bigger by " << area2-area1 <<" units." <<endl;
		}
	else if (area1==area2)
		{
		cout<<"Triangle 1 and Triangle 2 have the same area"<<endl;
		}
return 0;
}












