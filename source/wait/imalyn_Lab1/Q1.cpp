#include <iostream>
using namespace std;

int main()
{
	// prompts the user and checks whether input is valid
	cout<< "Enter the information for the first triangle: "<< endl;
	cout<< "Base: "<< endl;
	int base1;
	cin>> base1;
		if (base1<=0)
		{
			cout << "Enter a base value greater than 0:" << endl;
			cin>>base1;
		}
	cout<< "Height: "<< endl;
	int height1;
	cin>> height1;
		if (height1<=0)
		{
			cout << "Enter a height value greater than 0:" << endl;
			cin>> height1;
		}
	cout<< "Second Triangle: "<<endl;
	cout<< "Base: "<< endl;
	int base2;
	cin>> base2;
		if (base2<=0)
		{
			cout << "Enter a base value greater than 0:" << endl;
			cin>> base2;
		}
	cout<< "Height: "<< endl;
	int height2;
	cin>> height2;
		if (height2<=0)
		{
			cout << "Enter a height value greater than 0:" << endl;
			cin>> height2;
		}
	
	//calculate the areas
	double area1 = base1*height1*0.5;
	double area2 = base2*height2*0.5;
	
	//compare two areas and return difference
	if (area1>area2)
	{
		double diff=area1-area2;
		cout << "Triangle 1 is bigger by "<< diff << " units" <<endl;
	}
	else if (area1<area2)
	{
		double diff=area2-area1;
		cout << "Triangle 2 is bigger by "<< diff << " units"<<endl;
	}
	else if (area1==area2)
		cout << "Both triangles are equal in area."<< endl;
	
	return 0;
}
	
	
	
	

