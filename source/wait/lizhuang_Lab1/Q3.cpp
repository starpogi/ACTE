# include <iostream>
# include <iomanip>
# include <cmath>
using namespace std;

int main()

{
	int i,num1,num2;
	int n=0;
	double j=5.0;
	int n1,n2,m1,m2;

	do
	{
		cout<<"Enter two integers between 0 and 999999: ";
		cin>>num1>>num2;
		//prompt user to enter two numbers

	} while (num1<0 || num1>999999 || num2<0 || num2>999999);
	//Input error checking

	double k = 10;
	for (i=6;i>0;i--)
	{
		
		// num/10^k
		m1=num1/(static_cast<int>(pow(k,j)));
		m2=num2/(static_cast<int>(pow(k,j)));
		
		// (num/10^k)%10
		n1=m1%10;
		n2=m2%10;
		

		if (n1!=n2)
		{
			//count
			n++;
		}
		j=j-1;
	}
	
	cout<<"Hamming distance between "<<num1<<" and "<<num2<<" is "<<n<<"."<<endl;
	
	return 0;
}


