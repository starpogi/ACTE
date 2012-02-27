//
//  Lab1_Q1.cpp
//  EC327
//
//  Created by Jonathan Kolnik on 2/7/12.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>


using namespace std;

int main () {

    int base, height, base2, height2;
    double area, area2;
    //default larger triangle
    int pout=1;
    

    // Receives user input for the 2 triangles that are to be compared
    cout << "Enter the information for the first triangle: " << endl;
    cout << "Base: " ;
    cin >> base;
    //Error check for positive integers
    if (base<=0) {
        cout << "Error! Please enter a integer greater than 0" << endl<< "Base: "  ;
        cin >> base;
    }
    cout << "Height: " ;
    cin >> height;
    //Error check for positive integers
    if (height<=0) {
        cout << "Error! Please enter a integer greater than 0" << endl<< "Height: "  ;
        cin >> height;
    }
    cout << "Second Triangle: "<< endl;
    cout << "Base: " ;
    cin >> base2;
    //Error check for positive integers
    if (base2<=0) {
        cout << "Error! Please enter a integer greater than 0" << endl<< "Base: "  ;
        cin >> base2;
    }
    cout << "Height: " ;
    cin >> height2;
    //Error check for positive integers
    if (height2<=0) {
        cout << "Error! Please enter a integer greater than 0" << endl<< "Height: "  ;
        cin >> height2;
    }
    
    //calculates area of each triangle
    area= base * .5 * height;
    area2= base2 * .5 * height2;
    //which triangle is bigger for output text (default is triangle 1)
    if(area < area2){
        pout=2;
    }

    //calculates difference between two triangles
    area=abs(area-area2);

    //answer
    printf("Triangle %d is bigger by %.2f units.\n",pout,area);

    return 0;
}
