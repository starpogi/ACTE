#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int in1, in2;
    cout << "Enter two integers between 0 and 999999: ";
    cin >> in1 >> in2;

    /* This part ensures the inputs have 6 digits.
    If its a number less than 100000 then it fills the first
    empty spaces with zeros. */

    // First store the original inputs into separate variables
    int original1=in1, original2=in2;
    int array1[6], array2[6], i;
    if ((in1 > 999999) || (in1 < 0) || (in2 > 999999) || (in2 < 0))
        {
            cout << "Error: Integer out of range" << endl;
            return 0;
        }
    else
        {for (i=5; i>=0; i--)
            {
                array1[i]=in1 % 10;		// Creates arrays of input values by using mod 10.
                array2[i]=in2 % 10;		// Ex:  123456 % 10 = 6
                in1 = in1 / 10;			//      123456 / 10 = 12345
                in2 = in2 / 10;			//	12345 % 10  = 5  etc...
            }

    	/* Initiate a final loop which compares the two arrays.
	   When they're unequal, the loop adds to the counter. */
            int counter=0;
            for (i=0; i<6; i++)
            {
                if (array1[i]!=array2[i])
                counter++;
            }
            cout << "Hamming distance between " << original1 << " and " << original2 << " is " << counter <<endl;
        }
   return 0;
}
