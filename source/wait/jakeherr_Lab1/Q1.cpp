#include <iostream>
using namespace std ;

int main()
{
/*
prompt for information on two triangles
compare areas, print which is greater and by how much
*/


// declarations
int base1 , height1 , base2 , height2 ;
double area1 , area2 ;
int id ;
double diff ;

// get all input information for triangles
// error out if any are negative
cout << "Enter the information for the first triangle: " << endl << "Base: " ;
cin >> base1 ;
if ( base1 <= 0 )
  { cout << "ERROR: input <= 0" << endl ; return 1 ; }

cout << "Height: " ;
cin >> height1 ;
if ( height1 <= 0 )
  { cout << "ERROR: input <= 0" << endl ; return 1 ; }

cout << "Second triangle: " << endl << "Base: " ;
cin >> base2 ;
if ( base2 <= 0 )
  { cout << "ERROR: input <= 0" << endl ; return 1 ; }

cout << "Height: " ;
cin >> height2 ;
if ( height2 <= 0 )
  { cout << "ERROR: input <= 0" << endl ; return 1 ; }

// calculation
area1 = 0.5 * base1 * height1 ;
area2 = 0.5 * base2 * height2 ;

// comparison and output
if ( area1 == area2 )
{
	cout << "Trianges have equal areas." << endl ;
}
else
{
	id = ( area1 > area2 ) ? 1 : 2 ;
	diff = area1 - area2 ;
	diff = ( diff > 0 ) ? diff : -diff ;

	cout << "Triangle " << id << " is bigger by " << diff << " units." << endl ;
}

return 0 ;

}
