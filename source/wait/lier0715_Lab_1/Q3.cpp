#include <iostream>
using namespace std;

int main(){
	int input1;
	int input2;
	int tmp1;
	int tmp2;
	int count=0;
	int array1[6];
	int array2[6];


	
	 cout<<"Enter two integers between 0 and 999999"<<endl;
     cin>>input1;

	if(input1<0||input1>999999){
	 	cout<<"The input value is out of range"<<endl;
	    cout<<"Enter two integers between 0 and 999999"<<endl;
        cin>>input1;
	}//error checking
	
	
	  cin>>input2;
	if(input2<0||input2>999999){
		cout<<"The input value is out of range"<<endl;
		cout<<"Enter the second integer"<<endl;
	    cin>>input2;
	}//error checking
	
	tmp1=input1;
	tmp2=input2;//store the input value in tmp1 tmp2
	

	

	for(int i=5;i>=0;i--){

		array1[i]=input1%10;
		input1 /=10;

	}
	for(int i=5;i>=0;i--){

		array2[i]=input2%10;
		input2 /=10;

	}
	//put each character of the input into array
	
	for(int i=5;i>=0;i--){
		if(array1[i]==array2[i]){
			count++;
		}
	}
	//compare the corresponding element in array and calculate the Hamming distance


	cout<<"Hamming distance between "<<tmp1
	<<" and "<<tmp2<<" is "<<count<<endl;


	
	return 0;

}