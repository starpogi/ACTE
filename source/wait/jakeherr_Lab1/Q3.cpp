#include <iostream>
using namespace std ;

int pow10( int x )
{
  int out = 1 ;
  for ( int ii = 0 ; ii < x ; ii++ )
    { out = out * 10 ; }
  return out ;
}

int main()
{
/*
hamming distance
# substitutions to change one string into another
*/

// declarations
int num0, num1 , dig0 , dig1 ;
int hd = 0 ;

// prompt user
// error and reprompt if out of range
cout << "Enter two integers between 0 and 999999: " ;
cin >> num0 ;
while ( ( num0 < 0 ) || ( num0 > 999999 ) )
{
	cout << "ERROR: value out of range, re-enter: " ;
	cin >> num0 ;
}
cin >> num1 ;
while ( ( num1 < 0 ) || ( num1 > 999999 ) )
{
	cout << "ERROR: value out of range, re-enter: " ;
	cin >> num1 ;
}

// loop to compare individual decimal digits
for ( int ii = 1 ; ii <= 6 ; ii++ )
{
	dig0 = num0 % static_cast <int> ( pow10( ii ) ) ;
	dig0 = static_cast <int> ( dig0 / pow10( ii-1 ) ) ;
	dig1 = num1 % static_cast <int> ( pow10( ii ) ) ;
	dig1 = static_cast <int> ( dig1 / pow10( ii-1 ) ) ;

	( dig0 != dig1 ) ? hd++ : hd ;
}

// print output
cout << "Hamming distance between " << num0 << " and " << num1 << " is " << hd << "." << endl ;

return 0 ;

}
