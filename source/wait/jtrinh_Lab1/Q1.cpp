//jtrinh_Lab_1
//Jeannie Trinh
//Lab 1, Q1
//Program: Solves and compares the areas of two triangles

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double baseTriangleOne, heightTriangleOne, baseTriangleTwo,
		heightTriangleTwo, areaTriangleOne, areaTriangleTwo, difference;

	//Prompt user for values of Triangle One & Error check for values <= 0
	cout << "Enter the information for the first triangle:\nBase: ";
	cin >> baseTriangleOne;
	
		while (baseTriangleOne <= 0){
			cout << "Entered value must be greater than 0. Please try again.\nBase: ";
			cin >> baseTriangleOne;
		}

	cout << "Height: ";
	cin >> heightTriangleOne;

		while (heightTriangleOne <= 0){
			cout << "Entered value must be greater than 0. Please try again.\nHeight: ";
			cin >> heightTriangleOne;
		}

	//Prompt user for values of Triangle Two & Error check for values <= 0
	cout << "Second Triangle:\nBase: ";
	cin >> baseTriangleTwo;

		while (baseTriangleTwo <= 0){
			cout << "Entered value must be greater than 0. Please try again.\nBase: ";
			cin >> baseTriangleTwo;
		}

	cout << "Height: ";
	cin >> heightTriangleTwo;

			while (heightTriangleTwo <= 0){
			cout << "Entered value must be greater than 0. Please try again.\nHeight: ";
			cin >> heightTriangleTwo;
		}

	//Calculate the areas of both triangles
			areaTriangleOne = baseTriangleOne * heightTriangleOne * 0.5;
			areaTriangleTwo = baseTriangleTwo * heightTriangleTwo * 0.5;

	//Compare the areas and print results (including rounding to two decimal places)
			if (areaTriangleOne > areaTriangleTwo){
				difference = areaTriangleOne - areaTriangleTwo;
				cout << fixed << setprecision(2) << "Triangle 1 is bigger by " << difference << " units" <<endl;
			}

			else if (areaTriangleOne < areaTriangleTwo){
				difference = areaTriangleTwo - areaTriangleOne;
				cout <<  fixed << setprecision(2) << "Triangle 2 is bigger by " << difference << " units." << endl;
			}

			return 0;
}