#include <iostream>
using namespace std;

int main()
{
    //Initialize vaiables
    int switchnum;
    double innum;

    //Prompt for values
    cout<<"Pints to Liters (enter 0)"<<endl;
    cout<<"Pints to Cups (enter 1)"<<endl;
    cout<<"Cups to Pints (enter 2)"<<endl;
    cout<<"Cups to Liters (enter 3)"<<endl;
    cout<<"Liters to Pints (enter 4)"<<endl;
    cout<<"Liters to Cups (enter 5)"<<endl;
    cout<<"?: ";

    //Read desired function
    cin>>switchnum;

    //Error check for values outside range
    while(switchnum<0 || switchnum>5)
    {
        cout<<"Input was not between 0 and 5. Please choose again."<<endl;
        cin>>switchnum;
    }
    //Compute value depending on which function was selected
    switch (switchnum)
    {
        case 0:
        cout<<"Enter the amount in Pints: ";
        cin>>innum;
        cout<<innum<<" Pints is "<<innum*.47<<" Liters."<<endl;
        break;
        case 1:
        cout<<"Enter the amount in Pints: ";
        cin>>innum;
        cout<<innum<<" Pints is "<<innum*2<<" Cups."<<endl;
        break;
        case 2:
        cout<<"Enter the amount in Cups: ";
        cin>>innum;
        cout<<innum<<" Cups is "<<innum/2<<" Pints."<<endl;
        break;
        case 3:
        cout<<"Enter the amount in Cups: ";
        cin>>innum;
        cout<<innum<<" Cups is "<<innum*.24<<" Liters."<<endl;
        break;
        case 4:
        cout<<"Enter the amount in Liters: ";
        cin>>innum;
        cout<<innum<<" Liters is "<<innum*2.11<<" Pints."<<endl;
        break;
        default:
        cout<<"Enter the amount in Liters: ";
        cin>>innum;
        cout<<innum<<" Liters is "<<innum*4.23<<" Cups."<<endl;
    }
    return 0;


}
