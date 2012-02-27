#include<iostream>
using namespace std;

int main ()
{
    int choice;
    float cups, pints, liters, answer;

    cout<<"Please enter a choice: 0 - pints to liters, 1 - pints to cups, 2 - cups to pints, 3 - cups to liters, 4 - liters to pints, 5 - liters to cups:";
    cin>>choice;
    while (choice<0 || choice>5)
    {
        cout<<"Please try again. Only enter a number between 0 and 5:";
        cin>>choice;
    }
    if (choice == 0)
    {
        cout<<"Enter pints:";
        cin>>pints;
        answer = pints*.473176473;
        cout<<pints<<" pints equals "<<answer<<" liters."<<endl;
    }
    else if (choice == 1)
    {
        cout<<"Enter pints:";
        cin>>pints;
        answer = pints*2;
        cout<<pints<<" pints equals "<<answer<<" cups."<<endl;
    }
    else if (choice == 2)
    {
        cout<<"Enter cups:";
        cin>>cups;
        answer = cups*.5;
        cout<<cups<<" cups equals "<<answer<<" pints."<<endl;
    }
    else if (choice == 3)
    {
        cout<<"Enter cups:";
        cin>>cups;
        answer = cups*.236588236;
        cout<<cups<<" cups equals "<<answer<<" liters."<<endl;
    }
    else if (choice == 4)
    {
        cout<<"Enter liters:";
        cin>>liters;
        answer = liters*2.11337642;
        cout<<liters<<" liters equals "<<answer<<" pints."<<endl;
    }
    else if (choice == 5)
    {
        cout<<"Enter liters:";
        cin>>liters;
        answer = liters*4.22675284;
        cout<<liters<<" liters equals "<<answer<<" cups."<<endl;
    }
    else
    cout<<"Error.";

    return 0;
}
