// Question 2
# include <iostream>
using namespace std;

int main() {
double p,c,l,pl,pc,cp,cl,lp,lc;	// sets the variables to type double
int keyin;	// sets keyin to an integer

cout<<"Sample run:"<<endl;	// displays the statement and moves to the next line
cout<<"Pints to Liters (Enter 0)"<<endl;
cout<<"Pints to Cups (Enter 1)"<<endl;
cout<<"Cups to Pints (Enter 2)"<<endl;
cout<<"Cups to Liters (Enter 3)"<<endl;
cout<<"Liters to Pints (Enter 4)"<<endl;
cout<<"Liters to Cups (Enter 5)"<<endl;
cout<<"?: ";
cin>>keyin;	// promps the user to input a value for keyin

if(keyin!=0 && keyin!=1 && keyin!=2 && keyin!=3 && keyin!=4 && keyin!=5)	// if the input for keyin is not a number between 0 and 5 this if statement executes
{
cout<<"Please enter a value between 0 and 5"<<endl;	// displays the statement and moves to the next line
return 0;	// terminates the program
}

if(keyin==0)	// if the keyin value is a 0 this statement executes
{
cout<<"Enter the amount in Pints:";	// displays the statement
cin>>p;	// allows the user to input a value for p
pl=0.4731764725*p;	// calculates the conversion between pints and liters
cout<<p<<" Pints is "<<pl<<" Liters"<<endl;	// displays the conversion in the terminal window
}

if(keyin==1)	// if the keyin value is a 1 this statement executes
{
cout<<"Enter the amount in Pints:";	// displays the statement
cin>>p;	// allows the user to input a value for p
pc=2*p;	// calculates the conversion between pints and cups
cout<<p<<" Pints is "<<pc<<" Cups"<<endl;	// displays the conversion in the terminal window
}

if(keyin==2)	// if the keyin value is a 2 this statement executes
{
cout<<"Enter the amount in Cups:";	// displays the statement
cin>>c;	// allows the user to input a value for c
cp=.5*c;	// calculates the conversion between cups and pints
cout<<c<<" Cups is "<<cp<<" Pints"<<endl;	// displays the conversion in the terminal window
}

if(keyin==3)	// if the keyin value is a 3 this statement executes
{
cout<<"Enter the amount in Cups:";	// displays the statement
cin>>c;	// allows the user to input a value for c
cl=0.23658823625*c;	// calculates the conversion between cups and liters
cout<<c<<" Cups is "<<cl<<" Liters"<<endl;	// displays the conversion in the terminal window
}

if(keyin==4)	// if the keyin value is a 4 this statement executes
{
cout<<"Enter the amount in Liters:";	// displays the statement
cin>>l;	// allows the user to input a value for l
lp=2.11337642109837*l;	// calculates the conversion between liters and pints
cout<<l<<" Liters is "<<lp<<" Pints"<<endl;	// displays the conversion in the terminal window
}

if(keyin==5)	// if the keyin value is a 5 this statement executes
{
cout<<"Enter the amount in Liters:";	// displays the statement
cin>>l;	// allows the user to input a value for l
lc=4.22675284219673*l;	// calculates the conversion between liters and cups
cout<<l<<" Liters is "<<lc<<" Cups"<<endl;	// displays the conversion in the terminal window
}

return 0;	// terminates the program
}