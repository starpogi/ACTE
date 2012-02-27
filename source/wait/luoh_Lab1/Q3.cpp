/*
Henry Luo
U47058961
EC327
Q3. Hamming Distance
*/
#include <iostream>
using namespace std;

int main()
{
	/*Create our variables and for the hamming distance
	We will be using the function mod to find if digits are equal
	We will also be using a count for the size of hamming distance*/
	int int1,int2,inty1,inty2,digit1,digit2,go;
	int modd=1;
	int count=0;

	/*First ask the user for two integers between 0 and 999999
	*************************************************************
	Real time error checks are more efficient than asking for 
	two integers at the same time.
	This is a personal preference.
	*************************************************************
	The while loop will check if the integers are within the specified range*/
	cout<<"Enter an integer between 0 and 999999: ";
	cin>>int1;
	while ((int1<0)||(int1>999999)){
		cout<<"Please re-enter a valid integer between 0 and 999999: ";
		cin>>int1;
	}

	cout<<"Enter another integer between 0 and 999999: ";
	cin>>int2;
	while ((int2<0)||(int2>999999)){
		cout<<"Please re-enter a valid integer between 0 and 999999: ";
		cin>>int2;
	}

	//Let's save our integers so we can print them out later
	inty1=int1;
	inty2=int2;
	
	for (go=0;go<=5;go++){
		modd=modd*10;
		digit1=int1%modd;
		digit2=int2%modd;
		if (digit1!=digit2){
			count++;
		}
		int1=int1-digit1;
		int2=int2-digit2;
	}

	//Display the results
	cout<<"Hamming distance between "<<inty1<<" and "<<inty2<<" is "<<count<<"."<<endl;

	return 0;
}
