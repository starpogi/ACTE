//
//  Lab1_Q2.cpp
//  EC327
//
//  Created by Kris Ni on 2/8/12.
//  Copyright (c) 2012 Boston University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    double vol1,vol2;
    
   //user inputs which unit trandformation the program will run
    printf("pints to Liters(enter 0)\nPints to Cups(enter 1)\nCups to Pints(enter 2)\nCups to Liters(enter 3)\nLiters to Pints(enter 4)\nLiters to Cups(enter 5)\n?:");
    cin >> num;
    
    //error check if the user input is out of the range
    while (num < 0 || num > 5) {
        printf("Error!Please enter an integer between 0 and 5: ");
        cin >> num;
    }
    
    //switch the cases and prompt user enter volumn in the first unit and conver to the second unit
    switch (num) {
            //case 0: convert volumn in pints to liters
        case 0: 
            printf("Enter the amount in Pints: ");
            cin >> vol1;
            vol2 = vol1;
            vol2 *= 0.473176473;
            printf("%.2f Pints is %.2f Liters.\n",vol1,vol2);
            break;
            //case 1: convert volumn in pints to cups
        case 1:
            printf("Enter the amount in Pints: ");
            cin >> vol1;
            vol2 = vol1;
            vol2 *= 2;
            printf("%.2f Pints is %.2f Cups.\n",vol1,vol2);
            break;
            //case 2: convert volumn in cups to pints
        case 2:
            printf("Enter the amount in Cups: ");
            cin >> vol1;
            vol2 = vol1;
            vol2 *= 0.5;
            printf("%.2f Cups is %.2f Pints.\n",vol1,vol2);
            break;
            //case 3: convert volumn in cups to liters
        case 3:
            printf("Enter the amount in Cups: ");
            cin >> vol1;
            vol2 = vol1;
            vol2 *= 0.236588236;
            printf("%.2f Cups is %.2f Liters.\n",vol1,vol2);
            break;
            //case 4: convert volumn in liters to pints
        case 4:
            printf("Enter the amount in Liters: ");
            cin >> vol1;
            vol2 = vol1;
            vol2 *= 2.11337642;
            printf("%.2f Liters is %.2f Pints.\n",vol1,vol2);
            break;
            //last case: convert volumn in liters to cups
        default:
            printf("Enter the amount in Liters: ");
            cin >> vol1;
            vol2 = vol1;
            vol2 *= 4.22675284;
            printf("%.2f Liters is %.2f Cups.\n",vol1,vol2);
            break;
    }
    
    
    return 0;
}

