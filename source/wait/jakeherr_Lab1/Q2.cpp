#include <iostream>
#include <string>
using namespace std ;

int main()
{
/*
menu for conversion
*/

// declarations
int choice ;
double num0 , num1 , conv ;
string name0 , name1 ;
bool err = false ;

// menu choices
cout
<< "Pints to Liters  (enter 0)" << endl
<< "Pints to Cups    (enter 1)" << endl
<< "Cups to Pints    (enter 2)" << endl
<< "Cups to Liters   (enter 3)" << endl
<< "Liters to Liters (enter 4)" << endl
<< "Liters to Cups   (enter 5)" << endl
<< "?: "
;

// choose unit conversion
// error and continue looping if out of range
do
{
	if ( err )
	{
		cout << "ERROR: invalid choice, re-enter: " ;
		err = false ;
	}

	cin >> choice ;

	// assign conversion constants
	switch ( choice )
	{
	case 0 :
		name0 += "Pints" ;
		name1 += "Liters" ;
		conv = 0.473176473 ;
		break ;
	case 1 :
		name0 += "Pints" ;
		name1 += "Cups" ;
		conv = 2.0 ;
		break ;
	case 2 :
		name0 += "Cups" ;
		name1 += "Pints" ;
		conv = 0.5 ;
		break ;
	case 3 :
		name0 += "Cups" ;
		name1 += "Liters" ;
		conv = 0.236588236 ;
		break ;
	case 4 :
		name0 += "Liters" ;
		name1 += "Pints" ;
		conv = 2.11337642 ;
		break ;
	case 5 :
		name0 += "Liters" ;
		name1 += "Cups" ;
		conv = 4.22675284 ;
		break ;
	default :
		err = true ;
		break ;
	}

} while ( err ) ;


cout << "Enter the amount in " << name0 << ": " ; 
cin >> num0 ;
num1 = num0 * conv ;
cout << num0 << " " << name0 << " is " << num1 << " " << name1 << "." << endl ;

return 0 ;

}
