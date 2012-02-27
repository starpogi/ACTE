//
//  Lab1_Q4.cpp
//  EC327
//
//  Created by Kris Ni on 2/8/12.
//  Copyright (c) 2012 Boston University. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char letter;
    int offset;
    
    //user input character and desired offset number
    printf("Enter character: ");
    cin >> letter;
    printf("Offset (enter 0 to convert case): ");
    cin >> offset;
    
    //error check if the offset is a positive integer
    if (offset < 0) {
        printf("Error! Please input a positive integer\n");
        cin >> offset;
    }
    
    //if the offset is 0, convert cases if the input character is a letter, else the character stays the same
    if (offset == 0) {
        if (letter >= 65 && letter <= 90) {
            letter += 32;
        }
        else if (letter >= 97 && letter <= 122) {
            letter -= 32;
        }
	printf ("New character: %c\n",letter);
    }
    //if the offset is not 0, new character is the old character plus the offset
    else {
        //there is no ASCII table for 
        if ((letter + offset) > 127)
            printf("Error! It's out of range!\n");
        else {
	  letter += offset;
            printf("New character: %c\n",letter);
	}
    }
    
    return 0;
}
