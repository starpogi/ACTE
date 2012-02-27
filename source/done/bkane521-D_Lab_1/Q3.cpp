#include<iostream>
using namespace std;

int main()
{
	int finished;
	int num1,num2,ones1,tens1,huns1,thou1,ttho1,htho1,ones2,tens2,huns2,thou2,ttho2,htho2,hdcount;
	do
	{	
		hdcount = 0;

		cout<<"Enter two integers between 0 and 999999."<<endl;
		
		do 
		{
				cout<<"First number: ";
				cin>>num1;
				if (num1<0 || num1>999999)
					cout<<"Please enter an integer BETWEEN 0 and 999999."<<endl;
		} while (num1<0 || num1>999999);
	
			do 
			{
				cout<<"Second number: ";
				cin>>num2;
				if (num2<0 || num2>999999)
					cout<<"Please enter an integer BETWEEN 0 and 999999."<<endl;
			} while (num2<0 || num2>999999);
	
			ones1 = num1 %10;
			tens1 = (num1/10) %10;
			huns1 = (num1/100) %10;
			thou1 = (num1/1000) %10;
			ttho1 = (num1/10000) %10;
			htho1 = (num1/100000) %10;
			ones2 = num2 %10;
			tens2 = (num2/10) %10;
			huns2 = (num2/100) %10;
			thou2 = (num2/1000) %10;
			ttho2 = (num2/10000) %10;
			htho2 = (num2/100000) %10;
	
			if (ones1 != ones2)
				hdcount=hdcount+1;
			if (tens1 != tens2)
				hdcount=hdcount+1;
			if (huns1 != huns2)
				hdcount=hdcount+1;
			if (thou1 != thou2)
				hdcount=hdcount+1;
			if (ttho1 != ttho2)
				hdcount=hdcount+1;
			if (htho1 != htho2)
				hdcount=hdcount+1;
			cout<<"The hamming distance between "<<num1<<" and "<<num2<<" is "<<hdcount<<endl;
			cout<<"Enter 1 to rerun."<<endl;
			cin>>finished;
	} while (finished == 1);

	return 0;

}