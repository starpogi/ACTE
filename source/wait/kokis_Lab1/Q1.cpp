#include <iostream>
using namespace std;

int main()
{ double base, height, base2, height2;     //define the variables

	cout << "Enter the information for the first triangle:" << endl;   

			cout <<"Base: ";  //asks for the value of the base
			cin >> base;    //stores the value in the variable "base"

     		       if (base < 0)   {
				cout << "Error: Base needs to be larger than 0. Please Try Again! "; 
				cin >> base;   //if the base is a negative value it prints out an error message and asks for the value again
			} 
			cout <<"Height: "; 
			cin >> height; 

			if (height < 0) {
				cout << "Error: Height needs to be larger than 0. Please Try Again! ";
				cin >> height;
                     }
	cout << "Second Triangle:" << endl;

			cout <<"Base: "; 
			cin >> base2; 

			if (base2 < 0) {
				cout << "Error: Base needs to be larger than 0. Please Try Again! ";
				cin >> base2;
                     }
			cout <<"Height: "; 
			cin >> height2; 

			if (height2 < 0) {
				cout << "Error: Height needs to be larger than 0. Please Try Again! ";
				cin >> height2;
                     }
			cout << "Triangle 1 is bigger by " << (base*height/2)-(base2*height2/2) << " units. ";  
			//calculates both triangles and calculate the difference and prints it out

			system("pause"); //required for visual studios
return 0;
}