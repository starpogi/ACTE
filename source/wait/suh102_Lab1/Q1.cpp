#include <iostream>

using namespace std;

int main(){
	double a;
	double b;
	double c;
	double d;
	double area1;
	double area2;
	
	cout<< "Enter the information for the first triangle:"<<endl;
	cout<< "Base: ";
	cin>>a;
	while (a <= 0.0){
		cout<<"Please re-enter the base value:";
		cin >> a;
	}

	cout<<"Height: ";
	cin>>b;
	while (b<=0){
		cout<<"Please re-enter the height value:";
		cin>>b;
	}
	
	cout<<"Second Triangle: "<<endl;
	cout<<"Base: ";
	cin>>c;
	while (c<=0){
		cout<<"Please re-enter the base value:";
		cin>>c;
	}
	
	cout<<"Height: ";
	cin>>d;
	while (d<=0){
		cout<<"Please re-enter the height value:";
		cin>>d;
	}
	
	area1=a*b/2;
	area2=c*d/2;
	
	if (area1>area2){
		cout<<"Triangle 1 is bigger by "<< area1-area2 <<"units."<<endl;
	}  else if (area1<area2){
		cout<<"Triangle 2 is bigger by "<< area2-area1 <<"units."<<endl;
	}	else {
		cout<<"Triangle 1 and 2 are equal!!"<<endl;
	}
	
return 0;
}
