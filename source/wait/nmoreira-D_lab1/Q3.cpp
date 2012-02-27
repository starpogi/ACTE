#include<iostream>
using namespace std;

int main(){
  int num1; //stores first number entered
  int num2; // stores second number entered
  int val1; // tracks digits of first #
  int val2; //tracks digits of second #
  int test =100000;//used to seperate individual digits
  int match; // keeps track of when digits aren't tje same

  cout<<"Enter two integers between 0 and 999999: ";
  cin>>num1>>num2;

  // error checks to see if numbers entered are between 000000-999999

  if (num1< 0 || num1 > 999999 || num2 < 0 || num2 > 999999){
    cout<<"Invalid Entry. "<<endl;
    return 0;
  }
  // loops through each number and compares corresponding digits,
  //before moving onto the next digit.  
  for (int i = 0; i<=5; i++){
    val1=num1/test;
    val2=num2/test;
    test=test/10;
    if (val1 != val2)
      match++;
    
}

  cout<<"Hamming distance between "<<num1<<" and "<<num2<<" is "<< match<<endl;

}
