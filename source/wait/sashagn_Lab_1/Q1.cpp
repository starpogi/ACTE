
#include <iostream>

using namespace std;
int main() 
{
	cout<<"Enter information for the first triangle: "<<endl;;
	double base1; //declaring all the variables for the two triangles.
	double base2;
	double hight1;
	double hight2;
	cout<<"Base: ";  //prompt for all the variables of the first triangle
	cin>> base1;
	if (base1<0)  //checks for positive value 
		cout <<"must be a positive number for base"<<endl;
	cout<<"Height: ";  
	cin>> hight1;
	if (hight1<0) //checks for positive value 
		cout <<"must be a positive number for hight"<<endl;

	cout<<"Second triangle: "<<endl;
	cout<<"Base: ";  
	cin>> base2;
	if (base2<0) //checks for positive value 
		cout <<"must be a positive number for base"<<endl;
	cout<<"Height: ";  
	cin>> hight2;
	if (hight2<0) //checks for positive value 
		cout <<"must be a positive number for hight"<<endl;

	double area1=base1*hight1/2; //calculate the area of the first triangle
	double area2=base2*hight2/2; //calculate the area of the second triangle

	if ((area1<0) || (area2< 0) ) //If any of the areas an error message will appear
		cout <<"Can't calculate negative areas"<<endl;
			else if (area1>area2) //checks which triangle is bigger.
			{ 
				double difference = area1-area2;
				cout<<"triangle 1 is begger by" << difference << "units"<< endl;
			}
				else if (area1==area2)
				{
					cout<<"the areas are euqal of the two triangle"<< endl;
					
				}
			else  
			{
				double difference = area2-area1;
				cout<<"triangle 2 is begger by " << difference << " units "<< endl;
}
return(0);
}




