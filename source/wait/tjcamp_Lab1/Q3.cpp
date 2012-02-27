# include <iostream>
using namespace std;





int main()
{

cout << "Enter two integers between 0 and 999,999: ";
int num1, num2;
cin >> num1 >> num2;

while (num1<0 || num1>999999)
{
cout << "Selection out of range, please enter a valid selection for the first integer: ";
cin >> num1;
}


while (num2<0 || num2>999999)
{ 
cout << "Selection out of range, please enter a valid selection for the second integer: ";
cin >> num2;
}


int int1=num1;  //original identities of the inputted intergers kept for display
int int2=num2;



int check=0; // indicates the distance between two numbers
int tally1, tally2; // the result of mod

tally1= num1 % 10;
tally2= num2 % 10;

if (tally1 != tally2)
{ check++;
}


num1 = num1 - tally1;
num2 = num2 - tally2;


tally1 = num1 % 100;
tally2 = num2 % 100;

if (tally1 != tally2)
{ check++;
}


num1 = num1 - tally1;
num2 = num2 - tally2;



tally1 = num1 % 1000;
tally2 = num2 % 1000;


if (tally1 != tally2)
{ check++;
}


num1 = num1 - tally1;
num2 = num2 - tally2;


tally1 = num1 % 10000;
tally2 = num2 % 10000;


if (tally1 != tally2)
{ check++;
}



num1 = num1 - tally1;
num2 = num2 - tally2;


tally1 = num1 % 100000;
tally2 = num2 % 100000;


if (tally1 != tally2)
{ check++;
}

num1 = num1 - tally1;
num2 = num2 - tally2;


tally1 = num1 % 1000000;
tally2 = num2 % 1000000;


if (tally1 != tally2)
{ check++;
}





cout << "The hamming distance between "<<int1<<" and "<<int2<<" is "<<check<<endl;

return 0;

}












