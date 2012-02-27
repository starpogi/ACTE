#include <iostream>
using namespace std;

int main() {
        int a, b;
	cout<<"Enter two integers between 0 and 999999: ";

	cin>> a;
	cin>> b;

	while (a<0 || a>999999 || b<0 || b>999999){ 
		cout<<"Please re-enter the two digits (0~999999 only): ";	
		cin>> a;
		cin>> b;
	}
	
        int c=0;	
       
	if((a/100000 % 10 - b/100000%10) !=0){
	  ++c;
	}
        if ((a/10000 % 10 - b/10000%10) !=0){
	  ++c;
	}
	if ((a/1000 % 10 - b/1000%10) !=0){
	  ++c;
	}
	if ((a/100 % 10 - b/100%10) !=0){
	  ++c;
	}
        if ((a/10 % 10 - b/10%10) !=0){
	  ++c;
	}
        if ((a % 10 - b%10) !=0){
	  ++c;
	}
	cout<< "Hamming distance between "<<a<< " and "<<b<<" is "<<c<<"."<<endl;

return 0;
}
