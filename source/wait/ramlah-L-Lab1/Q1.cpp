//
//  Q1.cpp
//  lab1
//
//  Created by Ramzi Lahoud on 2/19/12.
//  Copyright (c) 2012 Boston University. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    //ask for input for first triangle
    cout<<"Enter the information for the first triangle: \n";
Triangle1:
    cout<<"Base:";
    double Base1;
    cin >> Base1;
    if (Base1<0){
        cout<<"Error. Please try again.\n";
        goto Triangle1;
    }
    
    cout<<"Height:";
    double Height1;
    cin>>Height1;
    if (Height1<0){
        cout<<"Error. Please try again.\n";
        goto Triangle1;
    }
    
    
    //compute are for triangle 1
    int Area1=Base1*Height1;
    
    //ask for input for second triangle
Triangle2:
    cout<<"Second Triangle: \n";
    cout<<"Base:";
    double Base2;
    cin >> Base2;
    if (Base2<0){
        cout<<"Error. Please try again.\n";
        goto Triangle2;
    }
    
    cout<<"Height:";
    double Height2;
    cin>>Height2;
    if (Height2<0){
        cout<<"Error. Please try again.\n";
        goto Triangle2;
    }
    
    
    //compute are for triangle 2
    int Area2=Base2*Height2;
    
    int Difftri= abs(Area1-Area2);
    
    
    if (max(Area1,Area2)== Area1)
        cout<< "Triangle 1 is bigger by " << Difftri<< " units" <<endl;
    
    if (max(Area1,Area2)== Area2)
        cout<< "Triangle 2 is bigger by " << Difftri<< " units" <<endl;
    
    
    return 0;
}
