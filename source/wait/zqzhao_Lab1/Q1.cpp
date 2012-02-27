#include<iostream>
using namespace std;

int main(){

  double base1,height1,base2,height2,area1,area2;
  
  cout<<"Enter the information for the first triangle:\nBase: ";
  cin>>base1;
  while(base1<=0){
    cout<<"Invalid input. Please try again.\nEnter the base of the first triangle: ";
    cin>>base1;
  }
  
  cout<<"Height: ";
  cin>>height1;
  while(height1<=0){
    cout<<"Invalid input. Please try again.\nEnter the height of the first triangle: ";
    cin>>height1;
  }

  cout<<"Second triangle:\nBase: ";
  cin>>base2;
  while(base2<=0){
    cout<<"Invalid input. Please try again.\nEnter the base of the second triangle: ";
    cin>>base2;
  }
  
  cout<<"Height: ";
  cin>>height2;
  while(height2<=0){
    cout<<"Invalid input. Please try again.\nEnter the height of the second triangle: ";
    cin>>height2;
  }

  area1 = base1*height1/2;
  area2 = base2*height2/2;
  cout.precision(3);

  if (area1 > area2){
    cout<<fixed<<"Triangle 1 is bigger by "<<(area1-area2)<<" units."<<endl;
  } else if (area1 < area2){
    cout<<fixed<<"Triangle 2 is bigger by "<<(area2-area1)<<" units."<<endl;
  } else {
    cout<<fixed<<"The area of triangle 1 is the same as that of triangle 2."<<endl;
  }
  
  return 0;

}
