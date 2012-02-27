//
//  Lab1_Q2.cpp
//  EC327
//
//  Created by Jonathan Kolnik on 2/8/12.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main(){
    
    int conv;
    double amount, convamount;
    
    //Receive conversion type
    printf("Pints to Liters (enter 0)\n Pints to Cups (enter 1)\n Cups to Pints (enter 2)\n Cups to Liters (enter 3)\n Liters to Pints (enter 4)\n Liters to Cups (enter 5)\n ?: ");
    
    cin>>conv;
    
    //Error check for 1 of the supplied options
    while (conv>5 || conv<0) {
        printf("Error!");
        printf("Pints to Liters (enter 0)\n Pints to Cups (enter 1)\n Cups to Pints (enter 2)\n Cups to Liters (enter 3)\n Liters to Pints (enter 4)\n Liters to Cups (enter 5)\n ?: ");
        
        cin>>conv;

    }
    
    //Based on option selected jumps to appropriate conversion
    switch (conv) {
        case 0:
            printf("Enter the amount in Pints: ");
            cin>>amount;
            //Conversion
            convamount=amount*.473176473;
            //Output
            printf("%f Pints is %.2f Liters\n",amount,convamount);
            break;
        case 1:
            printf("Enter the amount in Pints: ");
            cin>>amount;
            convamount=amount*2;
            printf("%f Pints is %.2f Cups",amount,convamount);

            break;
        case 2:
            printf("Enter the amount in Cups: ");
            cin>>amount;
            convamount=amount*.5;
            printf("%f Cups is %.2f Pints",amount,convamount);

            break;
        case 3:
            printf("Enter the amount in Cups: ");
            cin>>amount;
            convamount=amount*.236588236;
            printf("%f Cups is %.2f Liters",amount,convamount);

            break;
        case 4:
            printf("Enter the amount in Liters: ");
            cin>>amount;
            convamount=amount*2.11337642;

            printf("%f Liters is %.2f Pints",amount,convamount);

            break;
        case 5:
            printf("Enter the amount in Liters: ");
            cin>>amount;
            convamount=amount*4.22675284;
            printf("%f Liters is %.2f Cups",amount,convamount);

            break;
            
        default:
            break;
    }
    
    cout<<endl;
    
    
    return 0;
}
