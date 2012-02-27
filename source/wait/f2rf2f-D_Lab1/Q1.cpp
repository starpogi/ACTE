/*David Zou, U49526734, 2/11/2012
 *This program gets the dimensions of two triangles from the user, computes
 *the area, and displays which one is larger and by how much.
 */

#include <iostream>

using namespace std;

int main(){
	//initiates the dimensions and the areas of the triangles
	double base1,height1,base2,height2,area1,area2;

	
	//Gets the bases and the heights from user and error check to make sure
	//that they are greater than 0.
	cout<<"Enter the information for the first triangle: "<<endl;
	
	cout<<"Base: ";
	cin>>base1;
	if (base1<=0){
		cout<<"Error, value must be greater than 0."<<endl;
		return 0;
	}

	cout<<"Height: ";
	cin>>height1;
	if (height1<=0){
		cout<<"Error, value must be greater than 0."<<endl;
		return 0;
	}

	cout<<"Second Triangle:"<<endl;
	cout<<"Base: ";
	cin>>base2;
	if (base2<=0){
		cout<<"Error, value must be greater than 0."<<endl;
		return 0;
	}

	cout<<"Height: ";
	cin>>height2;
	if (height2<=0){
		cout<<"Error, value must be greater than 0."<<endl;
		return 0;
	}

	//computes the area
	area1=0.5*base1*height1;
	area2=0.5*base2*height2;

	//compares the areas and display the different
	if (area1>area2){
		cout<<"Triangle 1 is bigger by "<<area1-area2<<endl;
	}else if (area1==area2){
		cout<<"Both Triangles have the same area."<<endl;
	}else{
		cout<<"Triangle 2 is bigger by "<<area2-area1<<endl;
	}


	return 0;
}
