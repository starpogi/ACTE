/*Michelle So U57477532 
This program converts among the measurements cups, pints, and liters.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
int code;
string starttype, endtype;
float start, end;

//Prompt for conversion code, make sure code is valid, assign units to convert from
cout<< "Pints to Liters (enter 0)\nPints to Cups (enter 1)\nCups to Pints (enter 2)\nCups to Liters (enter 3)\nLiters to Pints (enter 4)\nLiters to Cups (enter 5)\n?: ";
cin>>code;
if (code== 0 || code==1)
	{starttype= "pints";}
else if (code ==2 || code ==3)
	{starttype= "cups";}
else if (code ==4 || code==5)
	{starttype= "liters";}
else
	{cout<<"Error! Please enter a number from 0-5: "<<endl;
	cin>>code;}

//Prompt for input; assign what units we will convert to 
cout<< "Enter the amount in "<<starttype<< ":"<<endl;
cin>>start;

switch (code){
	case 0:
		end = start*.473176;
		endtype = "liters";
		break;
	case 1:
		end = start*2;
		endtype = "cups";
		break;
	case 2:
		end = start/2;
		endtype = "pints";
		break;
	case 3:
		end = start*.236588;
		endtype = "cups";
		break;
	case 4:
		end = start*2.113376;
		endtype = "pints";
		break;
	case 5:
		end = start*4.22675;
		endtype = "cups";
		break;}

	//print answer
cout<< ""<<start<<" "<<starttype<< " is " <<end<<" "<<endtype<<"."<<endl;
return 0;
}
