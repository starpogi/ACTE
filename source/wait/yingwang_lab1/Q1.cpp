#include <iostream>
using namespace std;

int main(){
	int base1,base2;
	//error checking for the base is an postive integer
	do{
		cout << "Enter the information for the first triangle:";
		cout << "\n";
		cout << "Base: ";
		cin >> base1;
	}while(base1 <= 0);

	int height1,height2;
	//error checking for the height is an postive integer
	do{
		cout << "Height: ";
		cin >> height1;
	}while(height1 <= 0);

	//use the formula to accumulate two triangles' area
	double area1;
	area1 = base1 * height1 / 2.0;

	//error checking
	do{
		cout << "Second Triangle:";
		cout << "\n";
		cout << "Base: ";
		cin >> base2;
	}while(base2 <= 0);

	//error checking
	do{
		cout << "Height: ";
		cin >> height2;
	}while(height2 <= 0);

	double area2;
	area2 = base2 * height2 / 2.0;

	//compare two areas and then output the result
	if(area1 > area2){
		cout << "Triangle 1 is bigger by " << area1-area2 <<" units.";
	}else if(area1 == area2){
		cout << "These 2 triangles are equal.";
	}else{
		cout << "Trangle 2 is bigger by " << area2-area1 <<" units.";
	}

	return 0;
}