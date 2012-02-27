#include <iostream> 
using namespace std;
int main()
{
//Display Choices
cout<<"Pints to Liters (enter 0)"<<endl
<<"Pints to Cups (enter 1)"<<endl
<<"Cups to Pints (enter2)"<<endl
<<"Cups to Liters (enter 3)"<<endl
<<"Liters to Pints (enter 4)"<<endl
<<"Liters to Cups (enter5)"<<endl;
int code;
cin>>code;
	//Error check for int between 0 and 5
	while (code<0 || code>5){
	cout<<"Please Enter an integer between 0 and 5:";
	cin>>code;}
float num1;
float num2;
//Check which code was entered
if (code == 0){
	cout<<"Enter the amount in Pints:"<<endl;
	cin>>num1;
	//Make conversion
	num2= num1*0.473176;
	//Print Result
	cout<<num1<<" Pints is "<<num2<<" Liters."<<endl;}

else if (code == 1){
	cout<<"Enter the amount in Pints:"<<endl;
	cin>>num1;
	num2= num1*2;
	cout<<num1<<" Pints is "<<num2<<" Cups."<<endl;}

else if (code == 2){
	cout<<"Enter the amount in Cups:"<<endl;
	cin>>num1;
	num2= num1*0.5;
	cout<<num1<<" Cups is "<<num2<<" Pints."<<endl;}

else if (code == 3){
	cout<<"Enter the amount in Cups:"<<endl;
	cin>>num1;
	num2= num1*0.23659;
	cout<<num1<<" Cups is "<<num2<<" Liters."<<endl;}

else if (code == 4){
	cout<<"Enter the amount in Liters:"<<endl;
	cin>>num1;
	num2= num1*2.11338;
	cout<<num1<<" Liters is "<<num2<<" Pints."<<endl;}

else    {cout<<"Enter the amount in Liters:"<<endl;
	cin>>num1;
	num2= num1*4.22675;
	cout<<num1<<" Liters is "<<num2<<" Cups."<<endl;}

return 0;
}
