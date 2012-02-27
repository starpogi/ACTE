//
//  main.cpp
//  lab1-3
//
//  Created by Ramzi Lahoud on 2/21/12.
//  Copyright (c) 2012 Boston University. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    //We start by asking the user for two numbers and store them
Start:   
    cout<<"Enter two integers between 0 and 999999:";
    int int1, int2;
    cin>>int1>>int2;
    
    //Now we have to make sure that the two numbers have the same amount of digits
    int div1, div2;
    div1=int1/int2;
    div2=int2/int1;
    
    if (div1>10||div2>10){
        cout<<"Error.Try again.\n";
        goto Start;
    }
    //Next, we have to find the Hamming distance by creating an array that separates the digits of the ints and then finding the amounts of mismatches
    
    int array1[6], array2[6];
    
    for(int a=5; a>=0; a--){
        array1[a]=int1%10;
        int1 = int1/10;
    }
    
    for(int b=5; b>= 0; b--){
        array2[b] = int2%10;
        int2 = int2/10;
    }
    
    //after this wecompare the two arrays and increase the counter for every mismatch
    
    int counter;
    counter = 0;
    for(int mis = 0; mis<=5; mis++){
        if(array1[mis] != array2[mis]){
            counter = counter + 1;}
    }
    
    cout << "Hamming distance is " << counter;
    
    return 0;
}
