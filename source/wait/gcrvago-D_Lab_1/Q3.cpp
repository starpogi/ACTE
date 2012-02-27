//Hamming Distance Program

#include <iostream>
using namespace std;

int main() {
	int a,b;

	cout<<"Enter two integers between 0 and 999,999: ";	//read in two inputs
	cin>>a>>b;
	
	//while loops error check both inputs until proper int's entered
	while (a<0||a>999999){
		cout<<"ERROR: Please enter an integer between 0 and 999,999: ";
		cin>>a;
	}
	
	while (b<0||b>999999){
		cout<<"ERROR: Please enter an integer between 0 and 999,999: ";
		cin>>b;
	}

	int d1,d2,ans=0;
	
	//prints first part of statement while a and b are still their initial values
	cout<<"Hamming distance between "<<a<<" and "<<b<<" is ";

	//works by obtaing the last digit of a and b with %10 then comparing them
	//if they're not equal increment the hamming distance
	//End the loop by eliminating the last digit
	for (int i=1;i<7;i++) {
		d1=a%10;
		d2=b%10;
		if (d1!=d2)
			++ans;
		a=(a-d1)/10;
		b=(b-d2)/10;
	}
	
	cout<<ans<<"."<<endl;

	return 0;
}

