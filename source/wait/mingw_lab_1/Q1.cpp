/***********************************************************************
* Yingming Wang U82513434
* Lab 1 Question #1
* Computing the area of triangles and give the area difference.
***********************************************************************/
#include <iostream>
using namespace std;
int main(){
	double base_1;
	double height_1, base_2, height_2, area_1, area_2, difference;
	cout <<"Enter the information for the first triangle:\nBase: ";
	cin >> base_1 ;
		while (base_1 <= 0){
		cout <<"Positive integers only pretty please:)Try again:\nBase: ";
		cin >> base_1 ;}
	
	cout << "Height: ";
	cin >> height_1;
		while (height_1 <= 0){
		cout <<"Positive integers only pretty please:)Try again:\nHeight: ";
		cin >> height_1;}
	cout <<"Second Triangle: \nBase: ";
	cin >> base_2 ;
		while (base_2 <= 0){
		cout <<"Positive integers only pretty please:)Try again:\nBase: ";
		cin >> base_2 ;}
	cout << "Height: ";
	cin >> height_2;
		while (height_2 <= 0){
		cout <<"Positive integers only pretty please:)Try again:\nHeight: ";
		cin >> height_2;}
	
	area_1 = base_1 * height_1 / 2;
	area_2 = base_2 * height_2 / 2;
	if (area_1 > area_2){
	difference = area_1 - area_2;
	cout << "Triangle 1 is bigger by "<< difference << " units."<<endl;}
	else if (area_1 == area_2)
	cout << "Triangle 1 and Triangle 2 has the same size."<<endl;
	else {
	difference = area_2 - area_1;
	cout << "Triangle 2 is bigger by "<< difference << " units."<<endl; }
		

	return 0;
}
