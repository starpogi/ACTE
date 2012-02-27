//
//  Lab1_Q4.cpp
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

int main(){

    char charinput,charoutput;
    int overflow,offset,newchar,intoutput;
    

    cout << "Enter Character: ";
    cin >> charinput;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;
    

    //Error checks that offset is either 0 or positive integer
    while (offset<0) {
        cout <<"Error! please input a postive integer";
        cout << "Offset (enter 0 to convert case): ";
        cin >> offset;

    }
    overflow=charinput+offset;
    //error check if the resulting char code (original code + offset) is  greater than X
    while (overflow>127) {
        cout <<"Error! The offset cannot result in anything greater than X";
        cout << "Offset (enter 0 to convert case): ";
        cin >> offset;
        overflow=charinput+offset;
    }
    
    
    //offset has been chosen as capitalization    
    if(offset == 0){
        //if input is lowercase 
        if (charinput>96 && charinput<123) {
            //converts to uppercase
            newchar=charinput-32;
        }
        //if instead input is uppercase
        else if(charinput<90 && charinput>64){
            //converts to lowercase
            newchar=charinput+32;


        }
        // if input is a symbol returns same symbol
        else{
            newchar=charinput;
        }
        //returns uppercase or lowercase or same symbol version of input
        charoutput=newchar;
        
    }
    //if the offset was intended to shift character
    else{
        //char is represented in ASCII equivalent as int increases this int by offset inputed
        intoutput=newchar+offset;
        //converst new ASCII equivalent back into a character
        charoutput=intoutput;
        
    }
    //output
    cout << "New character: " << charoutput << endl;





    return 0;
}
