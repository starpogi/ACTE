#include<iostream>

using namespace std;

unsigned hamdists(unsigned, unsigned);
int main()
{
 cout << "Enter two integers between 0 and 999,999: ";
 int int1, int2, count;
 cin >> int1 >> int2;
 count = 0;
 
 if(int1 < 0 || int1 > 999999 || int2 < 0 || int2 > 999999)
	cout << "Error: Only integers from 0 to 999,999 are accepted";
	
 if(int1 > int2)
	int newint = int1 - int2;
 else if(int2 > int1)
	int newint = int2 - int1;
	
 int newint1_1 = int1/1000000;
 
 if(newint1_1 < 1)
	count++;
 
 int newint1_2 = int1/100000;
 
 if(newint1_2  < 1)
	count++;
	
int newint1_3 = int1/10000;
 
 if(newint1_3  < 1)
	count++;
	
	int newint1_4 = int1/1000;
 
 if(newint1_4  < 1)
	count++;
	
	int newint1_5 = int1/100;
 
 if(newint1_5  < 1)
	count++;
	
int newint1_6 = int1/10;
 
 if(newint1_6 < 1)
	count++;
	
 int newint1_7 = int1/int2;
 
 if(newint1_7 ==  1)
	count = 0;
	
 cout << count;
	
 
return 0;
}