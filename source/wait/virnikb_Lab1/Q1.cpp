#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Initialize Variables.
	int base1, base2, height1, height2;
	
	// Prompt Users to input values for first triangle variables.
	cout << "Enter the information for the first triangle: " << endl;


	cout << "Base: ";
	cin  >> base1;
	while (base1 <= 0){
		cout << "Base Must Be >0 : ";
		cin  >> base1;}
	cout << "Height: ";
	cin  >> height1;
	while (height1 <= 0){
		cout << "Height Must Be >0: ";
		cin  >> height1;}
	
	// Prompt Users to input values for second triangle variables.
	cout << "Second Triangle: " << endl;
	cout << "Base: ";
	cin  >> base2;
	while (base2 <=0){
		cout << "Base Must Be >0: ";
		cin  >> base2;}
	cout << "Height: ";
	cin  >> height2;
	while (height2 <= 0){
		cout << "Height Must Be >0: ";
		cin  >> height2;}
		
	// Calculate Area of Both Triangles.
	double area1, area2;
	area1 = (1/2.0) * base1 * height1 ;
	area2 = (1/2.0) * base2 * height2 ;

	
	//Output which triangle is bigger, and by how many units.
	if (area1 > area2)
		cout << "Traingle 1 is bigger by " << setprecision(2) << fixed << area1-area2 << " unit(s)." <<endl;
	else if  (area2 > area1)
		cout << "Traingle 2 is bigger by " << setprecision(2) << fixed << area2-area1 << " unit(s)." << endl;
	else 
		cout << "Traingle 1 and 2 have the same area" << endl;
				

	return 0;

}