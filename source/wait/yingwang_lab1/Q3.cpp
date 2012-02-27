#include <iostream>
using namespace std;

int main(){
	int x,y;
	//error checking the users' input
	do{
		cout << "Enter two integers between 0 and 999999: ";
		cin >> x;
		cin >> y;
	}while((x < 0) || (x >999999) || (y < 0) || (y > 999999));

	//define the variable for every digit
	//initialize the variable to count
	int a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6;
	int count = 0;
	if((x > 99999) || (y > 99999)){
		a1 = x / 100000;
		a2 = x / 10000;
		a3 = x / 1000;
		a4 = x / 100;
		a5 = x / 10;
		a6 = x % 10;
		b1 = y / 100000;
		b2 = y / 10000;
		b3 = y / 1000;
		b4 = y / 100;
		b5 = y / 10;
		b6 = y % 10;

		//following is every possible situations
		if(a1 != b1){
			count++;
		}
	
		if(a2 != b2){
			count++;
		}
	
		if(a3 != b3){
			count++;
		}
	
		if(a4 != b4){
			count++;
		}
	
		if(a5 != b5){
			count++;
		}
	
		if(a6 != b6){
			count++;
		}
	}

	if((x > 9999 && x < 100000) || (y > 9999 && y < 100000)){
		a2 = x / 10000;
		a3 = x / 1000;
		a4 = x / 100;
		a5 = x / 10;
		a6 = x % 10;
		b2 = y / 10000;
		b3 = y / 1000;
		b4 = y / 100;
		b5 = y / 10;
		b6 = y % 10;

		if(a2 != b2){
			count++;
		}
	
		if(a3 != b3){
			count++;
		}
	
		if(a4 != b4){
			count++;
		}
	
		if(a5 != b5){
			count++;
		}
	
		if(a6 != b6){
			count++;
		}
	}

	if((x > 999 && x < 10000) || (y > 999 && y < 10000)){
		a3 = x / 1000;
		a4 = x / 100;
		a5 = x / 10;
		a6 = x % 10;
		b3 = y / 1000;
		b4 = y / 100;
		b5 = y / 10;
		b6 = y % 10;
	
		if(a3 != b3){
			count++;
		}
	
		if(a4 != b4){
			count++;
		}
	
		if(a5 != b5){
			count++;
		}
	
		if(a6 != b6){
			count++;
		}
	}

	if((x > 99 && x < 1000) || (y > 99 && y < 1000)){
		a4 = x / 100;
		a5 = x / 10;
		a6 = x % 10;
		b4 = y / 100;
		b5 = y / 10;
		b6 = y % 10;

		if(a4 != b4){
			count++;
		}
	
		if(a5 != b5){
			count++;
		}
	
		if(a6 != b6){
			count++;
		}
	}

	if((x > 9 && x < 100) || (y > 9) && y < 100){
		a5 = x / 10;
		a6 = x % 10;
		b5 = y / 10;
		b6 = y % 10;

		if(a5 != b5){
			count++;
		}
	
		if(a6 != b6){
			count++;
		}
	}

	if((x > 0 && x < 10) || (y > 0 && x < 10)){
		a6 = x % 10;
		b6 = y % 10;
	
		if(a6 != b6){
			count++;
		}
	}

	//output the result
	cout << "Hamming distance between " << x << " and " << y << " is " << count << ".";

	return 0;
}