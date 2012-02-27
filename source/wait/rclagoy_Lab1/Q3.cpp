#include <iostream>
using namespace std;

int main() {
//Initialize the integer variables.
	int int1,int2;
//Enter the two integers, send them to their variables.
	cout<<"Enter two integers between 0 and 999,999: "<<endl;
	cin>>int1>>int2;
//Checks to see if the first integer is in the range.
	while (int1<0 || int1>999999){
		cout<<"Error, your first integer is not in the range. Enter another between 0 and 999,999: ";
		cin>>int1;
	}
//Checks to see if the second integer is in the range.
	while (int2<0 || int2>999999){
		cout<<"Error, your second integer is not in the range. Enter another between 0 and 999,999: ";
		cin>>int2;
	}
	 
//Determines the values for each place value in each integer.
	int ones1=int1%10;
	int tens1=((int1-ones1)%100)/10;
	int hun1=((int1-ones1-tens1*10)%1000)/100;
	int thou1=((int1-ones1-tens1*10-hun1*100)%10000)/1000;
	int tenthou1=((int1-ones1-tens1*10-hun1*100-thou1*1000)%100000)/10000;
	int hundthou1=((int1-ones1-tens1*10-hun1*100-thou1*1000-tenthou1*10000)%1000000)/100000;

	int ones2=int2%10;
	int tens2=((int2-ones2)%100)/10;
	int hun2=((int2-ones2-tens2*10)%1000)/100;
	int thou2=((int2-ones2-tens2*10-hun2*100)%10000)/1000;
	int tenthou2=((int2-ones2-tens2*10-hun2*100-thou2*1000)%100000)/10000;
	int hundthou2=((int2-ones2-tens2*10-hun2*100-thou2*1000-tenthou2*10000)%1000000)/100000;


	int sum=0;
//Series of if statements that check to see whether they are the same or not.
//If not the same then add 1 to the sum, which starts out at zero.
        if (ones1!=ones2){
		sum=sum+1;
	}
	if (tens1!=tens2){
		sum=sum+1;
	}
	if (hun1!=hun2){
		sum=sum+1;
	}
	if (thou1!=thou2){
		sum=sum+1;
	}
	if (tenthou1!=tenthou2){
		sum=sum+1;
	}
	if (hundthou1!=hundthou2){
		sum=sum+1;
	}	

//Print out the answer.
	cout<<"Hamming distance between "<<int1<<" and "<<int2<<" is "<<sum<<"."<<endl;;

}

