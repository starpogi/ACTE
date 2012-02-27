#include <iostream>
using namespace std ;

int main()
{
/*
letter conversion
shifting in ASCII
*/

// declarations
char chr0 , chr1 ;
int off ;
bool isup , islow ;
bool err = false ;

cout << "Enter character: " ;
cin >> chr0 ;

// reprompt if offset negative
cout << "Offset (enter 0 to convert case): " ;
cin >> off ;
 while ( off < 0 )
   {
     cout << "ERROR: offset < 0 , re-enter: " ;
     cin >> off ;
   }


isup = ( ( chr0 >= 'A' ) && ( chr0 <= 'Z' ) ) ;
islow = ( ( chr0 >= 'a' ) && ( chr0 <= 'z' ) ) ;

// change case or zero offset
if ( off == 0 )
{
	chr1 = chr0 ;
	if ( isup )
		chr1 = chr0 + ( 'a' - 'A' ) ;
	if ( islow )
		chr1 = chr0 + ( 'A' - 'a' ) ;
}
// nonzero offset, check within ASCII range
else
{
	int x = chr0 + off ;
	if ( ( x >= 32 ) && ( x <= 126 ) )
	{
		chr1 = chr0 + off ;
	}
	else
	{
		err = true ;
	}
}

// print output
if ( ! err )
{
	cout << "New character: " << chr1 << endl ;
}
else
{
	cout << "ERROR: New character out of range." << endl ;
}

return 0 ;

} 
