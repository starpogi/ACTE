#include <iostream>
using namespace std;
int main()
{int number;
float amount1;
float amount2;
cout <<"Pints to Liters (enter 0)"<<endl<<"Pints to Cups (enter 1)"<<endl<<"Cups to Pints (enter 2)"<<endl<<"Cups to Liters (enter 3)"<<endl<<"Liters to Pints (enter 4)"<<endl<<"Liters to Cups (enter 5)"<<endl<<"?: ";
cin >>number;
while (number<0||number>5) //Checks for error.
{cout <<"Pints to Liters (enter 0)"<<endl<<"Pints to Cups (enter 1)"<<endl<<"Cups to Pints (enter 2)"<<endl<<"Cupts to Liters (enter 3)"<<endl<<"Liters to Pints (enter 4)"<<endl<<"Liters to Cups (enter 5)"<<endl<<"?: ";
cin >>number;
}
if (number==0)
{cout <<"Enter the amount in Pints: ";
cin>>amount1;
amount2=amount1*0.47317;
cout<<amount1<<" Pints is "<<amount2<<" Liters"<<endl;
}
if (number==1)
{cout <<"Enter the amount in Pints: ";
cin>>amount1;
amount2=amount1*2;
cout<<amount1<<" Pints is "<<amount2<<" Cups"<<endl;
}
if (number==2)
{cout <<"Enter the amount in Cups: ";
cin>>amount1;
amount2=amount1/2;
cout<<amount1<<" Cups is "<<amount2<<" Pints"<<endl;
}
if (number==3)
{cout <<"Enter the amount in Cups: ";
cin>>amount1;
amount2=amount1*0.23658;
cout<<amount1<<" Cups is "<<amount2<<" Liters"<<endl;
}
if (number==4)
{cout <<"Enter the amount in Liters: ";
cin>>amount1;
amount2=amount1*2.11337;
cout<<amount1<<" Liters is "<<amount2<<" Pints"<<endl;
}
if (number==5)
{cout <<"Enter the amount in Liters: ";
cin>>amount1;
amount2=amount1*4.22675;
cout<<amount1<<" Liters is "<<amount2<<" Cups"<<endl;
}
return 0;
}
