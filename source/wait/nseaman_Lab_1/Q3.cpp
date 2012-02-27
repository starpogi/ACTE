#include<iostream>
using namespace std;

int main ()
{
    int num1, num2, number1, number2, hundredthousands1, hundredthousands2, tenthousands1, tenthousands2, thousands1, thousands2, hundreds1, hundreds2, tens1, tens2;
    int count = 0;

    cout<<"Enter two integers between 0 and 999999"<<endl;
    cout<<"number 1:";
    cin>>number1;
      while (number1<0 || number1>999999)
    {
        cout<<"Please try again. Please enter a number between 0 and 999999:";
        cin>>num1;
    }
    cout<<"number 2:";
    cin>>number2;
    while (number2<0 || number2>999999)
    {
        cout<<"Please try again. Please enter a number between 0 and 999999:";
        cin>>num2;
    }
    //calculates all the individual values for each place in the 6 digit number
    num1 = number1;
    num2 = number2;
    hundredthousands1 = num1/100000;
    num1 = num1-(hundredthousands1*100000);
    tenthousands1 = num1/10000;
    num1 = num1-(tenthousands1*10000);
    thousands1 = num1/1000;
    num1 = num1-(thousands1*1000);
    hundreds1 = num1/100;
    num1 = num1-(hundreds1*100);
    tens1 = num1/10;
    num1 = num1-(tens1*10);

    hundredthousands2 = num2/100000;
    num2 = num2-(hundredthousands2*100000);
    tenthousands2 = num2/10000;
    num2 = num2-(tenthousands2*10000);
    thousands2 = num2/1000;
    num2 = num2-(thousands2*1000);
    hundreds2 = num2/100;
    num2 = num2-(hundreds2*100);
    tens2 = num2/10;
    num2 = num2-(tens2*10);

    //compares each individual digit of number 1 and number 2 and keeps track of how many digits the number differs by
    if (hundredthousands1 != hundredthousands2)
        count++;
    if (tenthousands1 != tenthousands2)
        count++;
    if (thousands1 != thousands2)
        count++;
    if (hundreds1 != hundreds2)
        count++;
    if (tens1 != tens2)
        count++;
    if (num1 != num2)
        count++;

    cout<<"The hamming distance between "<<number1<<" and "<<number2<<" is "<<count<<"."<<endl;

    return 0;
}
