/* Stephen Brogan U17692771*/

// Problem 1

#include <iostream>
using namespace std;

int main() {
	double base_A,height_A,base_B,height_B;//Defining the bases and heights as doubles.
	int end;
do{	
	cout << " Enter base of triangle A:";
	cin >> base_A;
	cout << " Enter height of triangle A:";
	cin >> height_A;
	double area_1 = (base_A*height_A)/(2);//Computes area of triangle A.
	cout << " The area of triangle A is " << area_1 << endl;

	cout << " Enter base of triangle B:";
	cin >> base_B;
	cout << " Enter height of triangle B:";
	cin >> height_B;
	double area_2 = (base_B*height_B)/(2);// Computes area of triangle B.
	cout << " The area of triangle B is " << area_2 << endl;

	if (base_A < 1 || base_B < 1 || height_A <1 || height_B < 1){
		cout<< " Error. Unable to compute areas. Ignore statement below stating the difference between the two triangles." << endl;// Error message if a base or a height is enetered less than 1.
	}
	

	if (area_1 > area_2)
		{
		float Difference = (area_1)/(area_2);//Computes how many times greater area 1 is tha area 2.
		cout << " The area of triangle A is greater than the area of triangle B by " << Difference << " times " << 				endl;
		}
	if (area_2 > area_1)
		{
		float Diff = (area_2)/(area_1);//Computes how many times greater area 2 is tha area 1.
		cout << " The area of triangle B is greater than the area of triangle A by " << Diff << " times " << 				endl;
		}
	if (area_1==area_2)
		{
			cout<< " The area of triangle A is equal to the area of triangle B. " << endl;
		} 
	cout << "If you would like to do more area calculations press 0, if not press 1: ";
	cin >> end;
	}while (end==0);
	return 0;

}
