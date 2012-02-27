#include <iostream>

using namespace std;
int main() 
{
int num1,num2 ,tempnum1,tempnum2,count=0;  //declaring variables for the program
cout << "Enter two integers between 0 and 999999: " ;
cin >> num1>>num2; //prompts for numbers to be calculated in the hamming distance.
int remd1,remd2;
tempnum1 = num1,tempnum2 = num2; //Using temp variables to check whether the numbers are in the right range

if ((tempnum1<0) || (tempnum2<0) || (tempnum1>999999) || (tempnum2>999999))
    cout<< "Cannot check for negative numbers"<< endl;
else 
{
    if (num1>num2)// Checking which number is larger.
    {
        while (num2>0) //using the smaller number digits, I checked the LSB of the two number till the smaller number ends.
        {
        remd2=num2 % 10; //Taking the reminder from num2
        num2=num2/10;
        remd1=num1 % 10; //Taking the reminder from num1
        num1=num1/10;
        if (remd1!=remd2)
        count++;
        }
        while (num1>0) //Hamming number will be larger as it has numbers different than zero in its values larger than the smaller number.
        {
        remd1=num1 % 10; //Taking the reminder from num1
        num1=num1/10;
        if (remd1!=0)
        count++;
        }
    }
    if (num2>num1)//doing the same operations for the case of num2>num1
    {
        while (num1>0) 
        {
            remd1=num1 % 10; //Taking the reminder from num2
            num1=num1/10;
            remd2=num2 % 10; //Taking the reminder from num1
            num2=num2/10;
            if (remd2!=remd1)
            count++;
        }
        while (num2>0) 
        {
            remd2=num2 % 10; //Taking the reminder from num1
            num2=num2/10;
            if (remd2!=0)
            count++;
        }
    }
    cout<<"Hamming distance between " <<tempnum1<< " and " <<tempnum2<< " is " <<count<< ".";
}



return (0);
}