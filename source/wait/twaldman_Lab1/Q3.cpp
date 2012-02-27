/*Thomas Waldman U19049962*/
#include <iostream>

using namespace std;

int main()
{

	//Read in the two ints
	int int1, int2;
	cout<< "Enter two integers between 0 and 999999: "<<endl;
	cin>> int1;
	cin>> int2;
	//Ensure they are within the range
	while ((int1 <0 || int1>999999)||(int2 <0 || int2>999999))
	{
		cout<< "Error: Enter integers in the range of 0 to 999999"<<endl;
		cout<< "Enter two integers between 0 and 999999: "<<endl;
		cin>> int1;
		cin>> int2;
	}
	//Declare necessary variables
	int ham = 0;		//Hamming #
	int jj = int1;		//the integers, last number to be dropped off
	int kk = int2;		
	int ii = 0;		//counter of how many times loop runs through for reference
	double j, k;		//Number w/ decimal point to be dropped off

	
	while(jj != 0 || kk !=0)
	{
		j = jj%10; //find units digit
		k = kk%10;
		jj = jj/10; // drop off last digit
		kk = kk/10;

		if (j!=k)	//are they different?
			ham++;
		ii++;
	}

	cout<< "Hamming distance between "<< int1 << " and " << int2 << " is " << ham << "."<<endl;
	return 0;
}
