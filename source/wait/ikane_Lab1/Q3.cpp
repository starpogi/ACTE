/* Ita Kane, lab 1, question 3, EC327, Spring 3*/
#include <iostream>
using namespace std;

int main() {
        /*Prompt the user to enter the two intergers that will be compared*/
        int num1, num2;
        int var=1;
        //while loop error checks for intergers not between 0 and 999999
        while (var) {
                cout<< "Enter two integers between 0 and 999999: "<<endl;
                cin>> num1>> num2;
                if (num1<0||num2<0||num1>999999||num2>999999)
                        cout<< "Intergers must be between 0 and 999999"<<endl;
                else
                        var=0;
        }
        //sets values for variables that will be used to calc hamming distance
        int num1cp=num1;
        int num2cp=num2;
        int num=10;
        int rem1, rem2;
        int count=0;
        //while loop calculate the remander after dividing by incresing powers of ten.  If the reaminder from the two numbers is equal the count is increamnted.
        while (num <= 1000000)
        {
                rem1=num1%num;
                rem2=num2%num;
                if (rem1==rem2)
                        count++;
                num1=num1-rem1;
                num2=num2-rem2;
                num=num*10;
        }
        //Outputs the hamming distance
        cout<<"Hamming Distance between "<< num1cp<<" and "<< num2cp<< " is "<<count<<"."<<endl;
return 0;
}