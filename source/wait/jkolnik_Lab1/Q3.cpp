//
//  Lab1_Q3.cpp
//  EC327
//
//  Created by Jonathan Kolnik on 2/8/12.
//


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string.h>


using namespace std;

int main() {
    int example1,example2,testexample1,testexample2,digit1,digit2,dist;
    
    
    //Receives input
    printf("Enter two integers between 0 and 999999: ");
    cin >> example1;
    //Error check that first integer is between 0 and 999999
    if(example1>999999 || example1<0){
        printf("Error! please enter a integer between 0 and 999999: ");
        cin >> example1;
    }
    printf("Enter the next integer between 0 and 999999: ");
    cin >> example2;
    //Error check that second integer is between 0 and 999999
    if(example2>999999 || example2<0){
        printf("Error! please enter a integer between 0 and 999999: ");
        cin >> example2;
    }

    //Pass integers to int that will be modified
    testexample1=example1; 
    testexample2=example2;

    //loop for each digit
    for (int i=0; i<6; i++) {
        //takes last digit of each supplied integer
        digit1=testexample1%10;
        digit2=testexample2%10;
        //if these last digits are different then adds to the hamming distance
        if(digit1!=digit2){
            dist++;
        }
        //chops of last integer that already has been tested
        testexample1=testexample1/10;
        testexample2=testexample2/10;
    }
    
    
    
    //Output
    cout << "Hamming distance between " << example1 << " and " << example2 << " is " << dist << endl;
    return 0;
        
}
