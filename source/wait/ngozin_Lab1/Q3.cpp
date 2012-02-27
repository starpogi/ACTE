// Ngozi Nwogwugwu
#include <iostream>
using namespace std;
int main() {
	//declare input variables
	int inp1, inp2;
	
	//internal variables
	int dig0_1, dig1_1, dig2_1,
	    dig3_1, dig4_1, dig5_1;
	int dig0_2, dig1_2, dig2_2,
	    dig3_2, dig4_2, dig5_2;
	int distance;

	//prompt user for input
	cout << "input two integers between 0 and 999,999" <<endl;
	cin >> inp1;
	cin >> inp2;
	
	//check to see if inputs are valid
	if (inp1 > 999999 || inp1 < 0)
	cout << "input one is invalid" << endl;
	else if (inp2 > 999999 || inp2 < 0)
	cout << "input two is invalid" << endl;
	else{


	//assigning digits...
	dig0_1 = inp1 % 10;
	dig1_1 = ((inp1 - dig0_1) %100)/10;
	dig2_1 = ((inp1 - dig0_1 - dig1_1) %1000)/100;
	dig3_1 = ((inp1 - dig0_1 - dig1_1 - dig2_1) %10000)/1000;
	dig4_1 = ((inp1 - dig0_1 - dig1_1 - dig2_1 - dig3_1) %100000)/10000;
	dig5_1 = ((inp1 - dig0_1 - dig1_1 - dig2_1 - dig3_1 - dig4_1))/100000;


	dig0_2 = inp2 % 10;
	dig1_2 = ((inp2 - dig0_2) %100)/10;
	dig2_2 = ((inp2 - dig0_2 - dig1_2) %1000)/100;
	dig3_2 = ((inp2 - dig0_2 - dig1_2 - dig2_2) %10000)/1000;
	dig4_2 = ((inp2 - dig0_2 - dig1_2 - dig2_2 - dig3_2) %100000)/10000;
	dig5_2 = ((inp2 - dig0_2 - dig1_2 - dig2_2 - dig3_2 - dig4_2))/100000;

	//comparing the numbers
	distance = 0;
	
	if (dig0_1 != dig0_2) distance++;
	if (dig1_1 != dig1_2) distance++;
	if (dig2_1 != dig2_2) distance++;
	if (dig3_1 != dig3_2) distance++;
	if (dig4_1 != dig4_2) distance++;
	if (dig5_1 != dig5_2) distance++;

	//informing the user
	cout << "The Hamming distance between " << inp1 << " and " << inp2 << " is " << distance << endl;
	

}
return 0;
}
