//
//  main.cpp
//  lab1-4
//
//  Created by Ramzi Lahoud on 2/21/12.
//  Copyright (c) 2012 Boston University. All rights reserved.
//

#include <iostream>
using namespace std;

//First we take the user input
int main(){

Character:    
cout<<"Enter character:";
char char1;
cin>>char1;

Offset:
cout<<"Offset (enter 0 to convert case):";
int offset;
cin>>offset;

//Error check
if (offset<0){
cout<<"Error. The offset can't be negative. Try again.";
goto Offset;
}

//Next we convert to ascii values  
int char2;
char2 = static_cast<int>(char1);

//then add the offset 
char newchar;
if(offset > 0)
newchar = char2 + offset;

//error check if out of ascii range
if(newchar >127 || newchar< 0){
    cout << "Out of range, enter new offset: " <<endl;
    goto Offset;
    }
//Next we deal with the offset=0 case
if(offset==0){
        //upper case range is 97-122 and difference is 32
        if(char2 >=97 && char2 <= 122){
        newchar = char2 - 32;
        }
        //lower case is 65-90
        else if(char2 >=65 && char2 <= 90){
                newchar = char2 +32;
        }
        else  {newchar = char2;}
        }

//give the final output
cout << "New character:" << (char)newchar<<endl;
        
return 0;   
}

