
/*Shayla Melo
u14-87-2468
EC 327 Lab 1: Question 3
Last Update: 2/20/2012
Due Date: 2/21/2012*/

#include <iostream>

using namespace std;

int main() {

	int var1;
	int var2;
	int New1;
	int New2;
	int HD=0;


		cout<<"Please enter two intergers between 0-999,999 and press <ENTER> after each: ";

		cin>>var1;

		cin>>var2;


		if (var1>999999 || var1<0){

		cout<<"Invalid Input by user!"<<endl;
                            return 0;
                                }

		if (var2>999999 || var2<0){

		cout<<"Invalid Input by user!"<<endl;
                            return 0;
                                }

		else if (var1>=0 && var1<=999999 && var2>=0 && var2<=999999){

		New1= var1 % 10;
		New2= var2 % 10;

			if (New1!=New2) {

		        	HD++;
			        	}
		var1= var1/10;
		var2= var2/10;

		New1= var1 % 10;
		New2= var2 % 10;


			if (New1!=New2) {

		        	HD++;
			        	}

                var1= var1/10;
		var2= var2/10;

		New1= var1 % 10;
		New2= var2 % 10;


			if (New1!=New2) {

		        	HD++;
			        	}

		var1= var1/10;
		var2= var2/10;

		New1= var1 % 10;
		New2= var2 % 10;


			if (New1!=New2) {

		        	HD++;
			        	}

		var1= var1/10;
		var2= var2/10;

		New1= var1 % 10;
		New2= var2 % 10;


			if (New1!=New2) {

		        	HD++;
			        	}

		var1= var1/10;
		var2= var2/10;

		New1= var1;
		New2= var2;


			if (New1!=New2) {

		        	HD++;
			        	}

		cout<<"The Hamming Distance is "<< HD <<"!"<<endl;

		}


		return 0;
}
