#include <iostream>
using namespace std;

int main()
{	
	int num1;
	int num2;

	cout << "Enter two integers between 0 and 999,999: ";  
	cin >> num1;
	cin >> num2;

	while (num1 < 0 || num2 < 0 || num1 > 999999 || num2 > 999999){
		cout << "Please enter valid numbers: ";
		cin >> num1;
		cin >> num2;
	}

	int num1dig1 = (num1 / 100000) % 10;   	// this section of code separates each digit of the numbers
	int num1dig2 = (num1 / 10000) % 10;
	int num1dig3 = (num1 / 1000) % 10;
	int num1dig4 = (num1 / 100) % 10;
	int num1dig5 = (num1 / 10) % 10;
	int num1dig6 = num1 % 10;

	int num2dig1 = (num2 / 100000) % 10;
	int num2dig2 = (num2 / 10000) % 10;
	int num2dig3 = (num2 / 1000) % 10;
	int num2dig4 = (num2 / 100) % 10;
	int num2dig5 = (num2 / 10) % 10;
	int num2dig6 = num2 % 10;
	
	int hammingdist = 0;			

	if (num1dig1 != num2dig1)	// for every difference in the respective digits, we increment the hamming distance
		hammingdist++;

	if (num1dig2 != num2dig2)
		hammingdist++;

	if (num1dig3 != num2dig3)
		hammingdist++;

	if (num1dig4 != num2dig4)
		hammingdist++;

	if (num1dig5 != num2dig5)
		hammingdist++;

	if (num1dig6 != num2dig6)
		hammingdist++;

cout << "The hamming distance is " << hammingdist << "." << endl;

return 0;
} 
