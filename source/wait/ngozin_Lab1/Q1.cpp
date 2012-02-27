//this function compares the area of two triangles
// Ngozi Nwogwugwu
#include <iostream>
using namespace std;
int main() {

	//declaring variables...
	double b1,b2,h1,h2,
	a1,a2,out;

	//for triangle one:
	cout << "Please enter information for triangle one." << endl;
	cout << "Base: " << endl;
	cin >> b1;
	cout << "Height: " << endl;
	cin >> h1;
	
	//for triangle two:
	cout << "Pleae enter information for triangle two." << endl;
	cout << "Base: " << endl;
	cin >> b2;
	cout << "Height: " << endl;
	cin >> h2;
	
	//check to make sure nothing is negative
	if (b1<0 || b2<0 || h1<0 || h2<0)
	cout << "please enter positive numbers." << endl;
	else{
	
		// calculations
		a1 = b1*h1*0.5;
		a2 = b2*h2*0.5;

		// find the bigger triangle and display the difference
		if (a1 > a2){
			out = a1 - a2;
			cout << "triangle one is bigger by "<< out 
			<< " units" <<endl;
		}
	
		if (a1 < a2){
			out = a2 -a1;
			cout << "triangle two is bigger by "<< out 
			<< " units" <<endl;
		}

		if (a1 == a2){
			cout << "both triangles are the same size." << 			endl;
		}
	}
return 0;
}
