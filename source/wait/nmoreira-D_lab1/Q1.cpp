#include <iostream>
using namespace std;

int main (){

//Initial all variables
int base1;
int base2;
int height1;
int height2;
double area1;
double area2;
double diff;
bool check;

//prompts user for dimentions of the two triangles and assignes them to corresponding variables.
cout << "Enter the information for the first triangle: " << endl << "Base: ";

cin >> base1;

cout << "Height: ";
cin >> height1;

cout << "Second Triangle: "<<endl<<"Base: ";

cin >> base2;
cout << "Height: ";
cin >> height2;

//error checks to make sure numbers are valid. And gives variable check the value of true or false.
if(base1 >= 1 && base2 >= 1 && height1 >= 1 && height2 >=1){
	check =1;
	area1= static_cast<double>(base1*height1)/2;
	area2= static_cast<double>(base2*height2)/2;
	}
else{
	check = 0;
	}

	//determines which triangle is bigger, calculate difference, and displays it to the user.
	//If their data was invalid, it will say so
	if (check==1){
		if (area1 > area2){
			diff = area1 - area2;
			cout << "Triangle 1 is bigger by " << diff << " units. " << endl;
			}
		else if(area2 > area1){
			diff = area2 - area1;
			cout << "Triangle 2 is bigger by " << diff << " units. " << endl;
			}
		else{
			cout << "The areas are equal. " << endl;
			}
		}
	else{
		cout << "You entered invalid data!" << endl;
		}
	}


