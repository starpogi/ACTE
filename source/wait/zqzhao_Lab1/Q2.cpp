#include<iostream>
using namespace std;

int main(){

  double quant,result,downscale,upscale;
  int source,target;
  cout<<"\n**** Liquid Units Converter ****\n"<<endl;

  cout<<"Please select the SOURCE unit:\n(1)Pints\n(2)Liters\n(3)Cups"<<endl;
  cin>>source;
  while(source<1 || source>3){
    cout<<"\nInvalid option.\n Please select the SOURCE unit again:\n(1)Pints\n(2)Liters\n(3)Cups"<<endl;
    cin>>source;
  }

  cout<<"Please select the TARGET unit:\n(1)Pints\n(2)Liters\n(3)Cups"<<endl;
  cin>>target;
  while(target<1 || target>3){
    cout<<"\nInvalid option.\n Please select the TARGET unit again:\n(1)Pints\n(2)Liters\n(3)Cups"<<endl;
    cin>>target;
  }

  do {
    switch(source){
    case 1:
      cout<<"Enter the amount in Pints: ";
      cin>>quant;
      if(quant<0){cout<<"Amount cannot be negative!\n";continue;}
      downscale=0.473176473;
      cout<<quant<<" Pints is ";
      break;
    case 2:
      cout<<"Enter the amount in Liters: ";
      cin>>quant;
      if(quant<0){cout<<"Amount cannot be negative!\n";continue;}
      downscale=1;
      cout<<quant<<" Liters is ";
      break;
    case 3:
      cout<<"Enter the amount in Cups: ";
      cin>>quant;
      if(quant<0){cout<<"Amount cannot be negative!\n";continue;}
      downscale=0.236588236;
      cout<<quant<<" Cups is ";
      break;
    }
    
    cout.precision(5);
    switch(target){
    case 1:
      upscale=2.11337642;
      result = quant*downscale*upscale;
      cout<<fixed<<result<<" Pints."<<endl;
      break;
    case 2:
      upscale=1;
      result = quant*downscale*upscale;
      cout<<fixed<<result<<" Liters."<<endl;
      break;
    case 3:
      upscale=4.22675284;
      result = quant*downscale*upscale;
      cout<<fixed<<result<<" Cups."<<endl;
      break;
    }
  
    break;
    
  }while(true);
  
  return 0;
  
}
