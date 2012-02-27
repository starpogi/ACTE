#include <iostream>
using namespace std;

int main()
{

//declare variables

double base1;
double height1;
double base2;
double height2;
double area1;
double area2;
double result;


// Ask the user to enter the base and height of first triangle

base1 = -1;
while (base1 <= 0)
{
cout << "Enter the information for the first triangle:" << endl;
	cout << "Base: " << endl;
	cin >> base1;
	
/* If the user imputs a number less than or equal to zero, 
promt them to enter another number*/

if (base1 <= 0)
{
	cout << "The number you entered is not a positive integer." << endl;
}
}

height1 = -1;
while (height1 <= 0)
{	
cout << "Height:" << endl;
cin >> height1;

if (height1 <= 0)
{
	cout << "The number you entered is not a positive integer." << endl;
}
}

/*Ask the user to enter the base and height of second triangle
If the user inters a zero or negative number, promt them to enter
a new number that is a positive integer */

base2 = -1;
while (base2 <= 0)
{
cout << "Second Triangle: " << endl;
cout << "Base: " << endl;
cin >> base2;
	
if (base2 <= 0)
{
	cout << "The number you entered is not a positive integer." << endl;
}
}	
	
height2 = -1;
while (height2 <=0)
{
cout << "Height: " << endl;
cin >> height2;
if (height2 <= 0)
{
	cout << "The number you entered is not a positive integer." << endl;
}
}
	
	
	
//Compute the areas of triangle 1 and triangle 2

area1 = (base1*height1)/2;
area2 = (base2*height2)/2;

/*If Tri 1 > Tri 2 then subtract area2 from area1
If not Tri 2 > Tri 1, so subtracnt area 1 from area 1
Display results*/

if(area1 > area2)
{
	result = area1-area2;
	cout << "Triangle 1 is bigger by " << result << " units." << endl;
}
else if(area2 == area1) 
{
	
	cout << "The area of Triangle 1 is equal to the area of Triangle 2" << endl;
}
else 
{
	result = area2-area1;
	cout << "Triangle 2 is bigger by " << result << " units." << endl;
}


	return 0;
}