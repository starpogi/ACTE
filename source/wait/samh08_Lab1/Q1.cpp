#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Initialize variables (Error checking for non-number input is used)
	string input1;
	string input2;
	string input3;
	string input4;
	
	double base1;
	double height1;
	double base2;
	double height2;
	
	double area1;
	double area2;
	double diff;
	
	//Take first triangle width and check format
 	cout << "Enter the information for the first triangle:" << endl;
	cout << "Base:";
 	cin >> input1;
 	base1 = atoi(input1.c_str());
 	while(base1 <= 0)
 	{
 		cout << "Please enter a positive integer:";
 		cin >> input1;
 		base1 = atoi(input1.c_str());
 	}
	
	//Take first triangle height and check format
	cout << "Height:";
	cin >> input2;
	height1 = atoi(input2.c_str());
	while(height1 <= 0)
 	{
 		cout << "Please enter a positive integer:";
 		cin >> input2;
 		height1 = atoi(input2.c_str());
 	}
 	
 	//Take second triangle width and check format
 	cout << "Enter the information for the second triangle:"<<endl;
 	cout << "Base:";
 	cin >> input3;
 	base2 = atoi(input3.c_str());
 	while(base2 <= 0)
 	{
 		cout << "Please enter a positive integer:";
 		cin >> input3;
 		base2 = atoi(input3.c_str());
 	}
 	
 	//Take second triangle height and check format
 	cout << "Height:";
 	cin >> input4;
 	height2 = atoi(input4.c_str());
 	while(height2 <= 0)
 	{
 		cout << "Please enter a positive integer:";
 		cin >> input4;
 		height2 = atoi(input4.c_str());
 	}
 	
 	//Calculate area difference
 	area1 = base1*height1/2;
 	area2 = base2*height2/2;
 	diff = abs(area1-area2);
 	
 	if(area1 > area2)
 		cout << "Triangle 1 is larger by " << diff << " units." << endl;
 	else if(area2 > area1)
 		cout << "Triangle 2 is larger by " << diff << " units." << endl;
 	else
 		cout << "The two triangles are the same size."<< endl;
	return 0;
}