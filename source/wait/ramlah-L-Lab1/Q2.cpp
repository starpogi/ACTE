//
//  Q2.cpp
//  lab1ec327
//
//  Created by Ramzi Lahoud on 2/19/12.
//  Copyright (c) 2012 Boston University. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
//start by giving the user options
Menu:
cout<<
    "Pints to Liters (enter 0) \nPints to Cups (enter 1) \nCups to Pints (enter 2) \nCups to Liters (enter 3)\nLiters to Pints (enter 4)\nLiters to Cups (enter 5)\n";
    double Resp;
    cin >> Resp;
    
    //Error checking
    if (Resp!=0 && Resp!=1 && Resp!=2 && Resp!=3 && Resp!=4 && Resp!=5){
        cout<<"Error, please try again. \n";
        goto Menu;}
// Option0
    if (Resp==0){
        Option0:        
        cout<<"Enter the amount in Pints:";
        double Resp0;
        cin >> Resp0;
        if (Resp0<0)
            goto Option0;
        
        int Conv0=0.473*(Resp0);
        cout<<Resp0<<" Pint(s) is "<<Conv0<<" Litre(s).";
    }
    
// Option1
    if (Resp==1){
    Option1:        
        cout<<"Enter the amount in Pints:";
        double Resp1;
        cin >> Resp1;
        if (Resp1<0)
            goto Option1;
        
        int Conv1=2*(Resp1);
        cout<<Resp1<<" Pint(s) is "<<Conv1<<" cup(s).";
    }
    
// Option2
    if (Resp==2){
    Option2:        
        cout<<"Enter the amount in Cups:";
        double Resp2;
        cin >> Resp2;
        if (Resp2<0)
            goto Option2;
        
        int Conv2=0.5*(Resp2);
        cout<<Resp2<<" Cup(s) is "<<Conv2<<" Pint(s).";
    }

// Option3
    if (Resp==3){
    Option3:        
        cout<<"Enter the amount in Cups:";
        double Resp3;
        cin >> Resp3;
        if (Resp3<0)
            goto Option3;
        
        int Conv3=0.5*0.473*(Resp3);
        cout<<Resp3<<" Cup(s) is "<<Conv3<<" Liter(s).";
    }

// Option4
    if (Resp==4){
    Option4:        
        cout<<"Enter the amount in Liters:";
        double Resp4;
        cin >> Resp4;
        if (Resp4<0)
            goto Option4;
        
        int Conv4=2.113*(Resp4);
        cout<<Resp4<<" Liter(s) is "<<Conv4<<" Pints(s).";
    }
    
// Option5
    if (Resp==5){
    Option5:        
        cout<<"Enter the amount in Liters:";
        double Resp5;
        cin >> Resp5;
        if (Resp5<0)
            goto Option5;
        
        int Conv5=2*2.113*(Resp5);
        cout<<Resp5<<" Liter(s) is "<<Conv5<<" Cup(s).";
    }



return 0;
}