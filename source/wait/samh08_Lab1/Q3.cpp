#include <iostream>
#include <cmath>
using namespace std;






int main()
{
	//Initialize Variables
	string numA;
	string numB;
	int num1;
	int num2;
	int dist = 0;
	
	//Take integer 1 and make sure it's in the proper format
	cout << "Please enter two integers between 0 and 999999:" << endl;
	cout << "Integer 1:";
	cin >> numA;
	
	num1 = atoi(numA.c_str());
 	while(num1 < 1 || (num1 == 0 && numA.length() != 1))
 	{
 		cout << "Integer 1:";
 		cin >> numA;
 		num1 = atoi(numA.c_str());
 	}
	
	//Take integer 2 and make sure it's in the proper format
	cout << "Integer 2:";
	cin >> numB;
	
	num2 = atoi(numB.c_str());
	while(num2 < 1 || (num2 == 0 && numB.length() != 1))
 	{
 		cout << "Integer 2:";
 		cin >> numB;
 		num2 = atoi(numB.c_str());
 	}
	
	//Calculated hamming distance
	for(int i = 0;i < 6;i++)
	{
		//cout << "num1%10:"<< num1%10<< endl;
 		//cout << "num2%10:"<< num2%10<< endl;
		if(num1 % 10 != num2 % 10)
			dist++;
		num1 = num1/10;
		//cout<< "num1:" << num1<< endl;
		num2 = num2/10;
		//cout<< "num2:"<< num2<<endl;
	}
	
	cout<< "Hamming distance between " << numA << " and " << numB << " is " << dist << endl;
	
	
	return 0;
}

