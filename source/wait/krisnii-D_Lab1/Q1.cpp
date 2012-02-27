//
//  Lab1_Q1.cpp
//  EC327
//
//  Created by Kris Ni on 2/7/12.
//  Copyright (c) 2012 Boston University. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int base, height, num;
    double area, area2, dif;
    
    //user enter the dimensions of the first triangle, and error check if the entered numbers are positive integers
    cout << "Enter the information for the first triangle: " << endl;
    cout << "Base: ";
    cin >> base;
    while (base <= 0) {
        printf("Error!Please enter positive number: ");
        cin >> base;
    }
    cout << "Height: ";
    cin >> height;
    while (base <= 0) {
        printf("Error!Please enter positive number: ");
        cin >> height;
    }
    
    //calculate the area of the first triangle
    area = base * height / 2;
    
    //user enter the dimensions of the second triangle, and error check if the entered numbers are positive integers
    cout << "Second Triangle: " << endl;
    cout << "Base: ";
    cin >> base;
    while (base <= 0) {
        printf("Error!Please enter positive number: ");
        cin >> base;
    }
    cout << "Height: ";
    cin >> height;
    while (base <= 0) {
        printf("Error!Please enter positive number: ");
        cin >> height;
    }
    
    //calculate the area of the second triangle
    area2 = base * height / 2;
    
    //check which area is larger and calculate the difference
    if (area <= area2) {
        dif = area2 - area;
        num = 2;
    }
    else {
        dif = area - area2;
        num = 1;
    }
    
    //print out the output
    printf("Triangle %d is bigger by %.2f units.\n",num,dif);
    
    return 0;
    
}

