#include <iostream>
#include <cmath>

using namespace std;

int main()
{	
	cout << "Pints to Liters (enter 0)\n";
	cout << "Pints to Cups (enter 1)\n";
	cout << "Cups to Pints (enter 2)\n";
	cout << "Cups to Liters (enter 3)\n";
	cout << "Liters to Pints (enter 4)\n";
	cout << "Liters to Cups (enter 5)\n?: ";
	
	int i;
	cin >> i;
	
	while (i<0 || i>5)
	{
		cout << "Enter a number from 0 to 5: ";
		cin >> i;
	}
	
	switch (i)
	{
		case 0:
		{
			cout << "Enter the amount in Pints: ";
			double p;
			cin >> p;
			double l=p*0.473176473;
			cout << p << " pint(s) is " << l << " liter(s).\n";
			return 0;
		}
		case 1:
		{
			cout << "Enter the amount in Pints: ";
			double p;
			cin >> p;
			double c=p*2;
			cout << p << " pint(s) is " << c << " cup(s).\n";
			return 0;
		}
		case 2:
		{
			cout << "Enter the amount in Cups: ";
			double c;
			cin >> c;
			double p=c*0.5;
			cout << c << " cup(s) is " << p << " pint(s).\n";
			return 0;
		}
		case 3:
		{
			cout << "Enter the amount in Cups: ";
			double c;
			cin >> c;
			double l=c*0.236588236;
			cout << c << " cup(s) is " << l << " liter(s).\n";
			return 0;
		}
		case 4:
		{
			cout << "Enter the amount in Liters: ";
			double l;
			cin >> l;
			double p=l*2.11337642;
			cout << l << " liter(s) is " << p << " pint(s).\n";
			return 0;
		}
		case 5:
		{
			cout << "Enter the amount in Liters: ";
			double l;
			cin >> l;
			double c=l*4.22675284;
			cout << l << " liter(s) is " << c << " cup(s).\n";
			return 0;
		}
	}
}
