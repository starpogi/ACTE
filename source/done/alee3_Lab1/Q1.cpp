#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  	cout << "Enter the information for the first triangle:\n";
  	double b1,h1;

  	cout << "Base: ";
  	cin >> b1;
  	cout << "Height: ";
  	cin >> h1;
	
	while (b1 <= 0 || h1 <= 0)
	{
		cout << "Enter values that are strictly greater than 0:\n";
		cout << "Base: ";
	 	cin >> b1;
	  	cout << "Height: ";
	  	cin >> h1;
	}

  	cout << "Enter the information for the second triangle:\n";
  	double b2,h2;

  	cout << "Base: ";
  	cin >> b2;
  	cout << "Height: ";
  	cin >> h2;
	
	while (b2 <= 0 || h2 <= 0)
	{
		cout << "Enter values that are strictly greater than 0:\n";
		cout << "Base: ";
	  	cin >> b2;
	  	cout << "Height: ";
	  	cin >> h2;
	}
  
  	double a1=0.5*b1*h1;
  	double a2=0.5*b2*h2;
  	double diff=a1-a2;

  	if (a1 == a2)
    	cout << "Both Triangles are the same size.\n";
  	else if (a1 > a2)
    	printf("Triangle 1 is bigger by %.2f units. \n", abs(diff));
  	else
    	printf("Triangle 2 is bigger by %.2f units. \n", abs(diff));
  
  	return 0;
}
