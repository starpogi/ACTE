#include <iostream>
using namespace std;

int main()
{
//Initialize Variables
    int num1,num2,dig1,dig2,start,exp,copy1,copy2;
    int modby = 1;
    int count = 0;

//Prompt for 2 integers within the range
    cout<<"Enter two integers between 0 and 999999: " <<endl;
    cin>>num1;
    cin>>num2;

//Error check for number outside range
    while(num1<0 || num1>999999)
    {
        cout<<"The first integer is not between 0 and 999999. Enter a new integer: " <<endl;
        cin>>num1;
    }
    while(num2<0 || num2>999999)
    {
        cout<<"The second integer is not between 0 and 999999. Enter a new integer: " <<endl;
        cin>>num2;
    }
    copy1=num1;
    copy2=num2;

//Calculate the two integers digit by digit
    for(start=5; start>=0; start--)
    {
//Reset the modby integer to 1
        modby=1;
//Exponentially increase the modby integer
        for(exp=start; exp>=1; exp--)
        {
            modby*=10;
        }
        dig1=num1-(num1%modby);
        dig2=num2-(num2%modby);
//Compare the two integers digit by digit. Add to counter if not equal
        if(dig1!=dig2)
        {
            count++;
        }
        num1=num1-dig1;
        num2=num2-dig2;
    }
//Display the Hamming distance
    cout<<"Hamming distance between "<<copy1<<" and "<<copy2<<" is "<<count<<"."<<endl;
    return 0;
}
