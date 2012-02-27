#include <iostream>
using namespace std;

int main() {
        char a;
	int b;
	cout<<"Enter character: ";
	cin>> a;
	cout<<"Offset (enter 0 to convert case): ";
	cin>> b;
	while (b<0){
	    cout<<"Please re-enter a nonnegative integer offset: ";
	    cin>> b;
	}

	if (b==0){
	  if (a>=65 && a<=90){a+=32;}
	  else if (a>=97 && a<=122){a-=32;}
	} else {
	    a=a+b;
	}
	

	cout<<"New character: "<< a <<endl;

return 0;
}
