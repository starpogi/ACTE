#include <iostream>
using namespace std;

int main(){
  int base1;
  int height1;
  int base2;
  int height2;
  double area1;
  double area2;
  double  result;


  cout<<"Enter the information for the first triangle:"<<endl;
  cout<<"Base:";
  cin>>base1;
 if(base1<=0){
    cout<<"Please enter a positive integer"<<endl;
    cout<<"Base:";
    cin>>base1;
  }//check input value

  cout<<"Height:";
  cin>>height1;
 if(height1<=0){
    cout<<"Please enter a positive integer"<<endl;
    cout<<"Height:";
    cin>>height1;
   
  } //check the input value

  cout<<"Second triangle "<<endl;
  cout<<"Base:";
  cin>>base2;
 if(base2<=0){
    cout<<"Please enter a positive integer"<<endl;
    cout<<"Base:";
    cin>>base2;
  } //check the input value

  cout<<"Height:";
  cin>>height2;
 if(height2<=0){
    cout<<"Please enter a positive integer"<<endl;
    cout<<"Height:";
    cin>>height2;
  } //check the input value

 
  area1= base1*height1/2.0;
  area2= base2*height2/2.0;
  //calculate area of two triangle
  result =area1-area2;
  cout<<result<<endl;

  if(result>=0)
    {
      cout<<"Triangle 1 is bigger by "<<result<<" units"<<endl;
    }
  if(result<0)
    {
      result=result*(-1);
      cout<<"Triangle 2 is bigger by "<<result<<" units"<<endl;
    }
  //show the output
 
  return 0;
}

