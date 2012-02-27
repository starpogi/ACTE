#include <iostream>
using namespace std;
int main ()
{
	int num1;
	int num2;
	cout << "Enter two integers between 0 and 999999: " ;
	cin >> num1;
	cin >> num2;
	int rem1;
	int rem2;
	int hamm = 0;
	int count=0;
	
	if (num1 % 10 != num2 % 10)
	{
		hamm++;
	}

	rem1= num1;
	rem2= num2;
	while (count != 6)
	{
		rem1 = rem1 / 10;
		rem2= rem2 / 10;
		count++;
	if (rem1 % 10 != rem2 % 10)
	{
	hamm++;
	}
	}
		
	cout << "Hamming distance between " << num1 << " and " << num2 << " is " << hamm << "." << endl;
	
	return 0;
}