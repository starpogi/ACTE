#include <iostream> 
using namespace std;
int main()
{
//Prompt user for integers and save their values in num1 and num2 
cout<<"Enter two integers between 0 and 999999: "<<endl;
int num1;
int num2;

cin>>num1;
cin>>num2;

//Error check to make sure num1 and num2 are positive
while (num1<0 || num1>999999){
cout<<"First integer must be between 0 and 999999, try again: "<<endl;
cin>>num1;}

while (num2<0 || num2>999999){
cout<<"Second integer must be between 0 and 999999, try again: "<<endl;
cin>>num2;}


//declare arrays, each with size 6
int array1[6];
int array2[6];

//declare variable to use in for loops
int i;
int j;
int k;
int counter=0;



//seperate num1 into its digits: store them in array1

for (i=5;i>=0;i--){
array1[i]=num1 % 10;
num1=num1/10;}


//seperate num2 into its digits: store them in array2

for (j=5;j>=0;j--){
array2[j]=num2 % 10;
num2=num2/10;}



//Compare array1 and array2, counter is increased when there is a difference
for (k=0;k<=5;k++){
	if (array1[k] != array2[k]){
	counter=counter+1;}
	else{
	counter=counter;}}

//Display hamming distance
cout<<"Hamming distance is "<<counter<<endl;

return 0;
}
