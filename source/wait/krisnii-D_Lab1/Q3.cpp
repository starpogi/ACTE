//
//  Lab1_Q3.cpp
//  EC327
//
//  Created by Kris Ni on 2/8/12.
//  Copyright (c) 2012 Boston University. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3,num4;
    int dif = 0;
    
    //user input two integers and error check if the integers are within the range of 0 to 999999
    printf("Enter two integers between 0 and 999999: ");
    cin >> num1;
    while (num1 < 0 || num1 > 999999) {
        printf("Error! Enter integer between 0 and 999999: ");
        cin >> num1;
    }
    
    cin >> num2;
    while (num2 < 0 || num2 > 999999) {
        printf("Error! Enter integer between 0 and 999999: ");
        cin >> num2;
    }
    
    //duplicate the inputs for output 
    num3 = num1;
    num4 = num2;
    
    //compare integers module by 10 ( the last digit )
    //if they are different, add count 'dif' by 1
    //loop through for 6 times
    for (int i = 0; i < 6; i++) {
        if (num1 % 10 != num2 % 10) {
            dif++;
        }
        num1 /= 10;
        num2 /= 10;
    }
    
    //print out the hamming distance between two integers
    printf("Hamming distance between %d an %d is %d.\n",num3,num4,dif);
    
    return 0;
}

