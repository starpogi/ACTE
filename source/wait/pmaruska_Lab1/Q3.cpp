/* 
 * File:   Q3.cpp
 * Author: Patrick Maruska
 * 
 * This is a program to find the hamming distance between two number that must
 * be between 0 and 999,999 inclusive.  It uses division by increasing powers
 * of 10 and modulo 10 to find each pair of numbers and compare them.  It has
 * a known error when the input number is larger than an int can hold there
 * is an overflow problem which causes the program to enter an infinite loop,
 * but I believe that this can be ignored since we can assume they will just
 * and int, meaning we don't need to deal with anything out of an int's range.
 * 
 * Ham I love you
 * Yes I do
 * Numbers as well
 * I love them too
 * 
 * So what should I do
 * With numbers and ham
 * "Put them together?"
 * Sounds like a plan!
 *
 * Created on February 20, 2012, 3:39 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;


int main(int argc, char** argv)
{
    int num1;
    int num2;
    cout << "Enter 2 integers between 0 and 999,999:";
    
    do
    {
        cin >> num1;
        if ((num1 > 999999) || (num1 < 0))
            cout << "Please input a number between 0 and 999,999." << endl;
    } while ((num1 > 999999) || (num1 < 0));
    
    do
    {
        cin >> num2;
        if ((num2 < 0) || (num2 > 999999))
            cout << "Please input a number between 0 and 999,999." << endl;
    } while ((num2 < 0) || (num2 > 999999));
    
    int ham = 0;
    for(int x = 0 ; x < 6 ; x++)
    {
        //here we take num/10^x%10 to get each number in the 1's, 10's, 100's, etc. place
        int test1 = num1/(int)pow(10,x)%10;
        int test2 = num2/(int)pow(10,x)%10;
        bool test = test1 != test2;
        //If they're not equal then add one to the hamming distance
        if(test)
            ham++;
    }
    
    cout << "Hamming distance between " << num1 << " and " << num2 << " is " << ham << ".";
    
    return 0;
}

