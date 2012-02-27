#include <iostream>
using namespace std;
int main()
{int num1;
int num2;
int num3;
int num4;
int digit1;
int digit2;
cout<<"Enter two integers between 0 and 999999: ";
cin>>num1>>num2;
if (num1<0||num1>999999||num2<0||num2>999999) //Checks for error
{cout<<"Error!  Please enter a number between 0 and 999999!  Restart code!"<<endl;
}
else // else will carry on
{
num3=num1; // The initial values for num1 and num2 are saved
num4=num2;
int count;
int distance;
count=0;
int i;
for(i=1;i<7;i++)
{
digit1=num1%10;
digit2=num2%10;
if (digit1==digit2)
{count=count+1;
}
else
{count=count;
}
num1=num1/10;
num2=num2/10;
}
distance=6-count;
cout<<"Hamming distance between "<<num3<<" and "<<num4<<" is "<<distance<<endl;
}
return 0;
}
