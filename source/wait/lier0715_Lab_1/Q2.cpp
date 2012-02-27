#include <iostream>
using namespace std;

int main(){
 
  double cups;
  double  pints;
  double  liters;
  int  funcNum;

  cout<<"Pints to Liters(enter 0)"<<endl;
  cout<<"Pints to Cups(enter 1)"<<endl;
  cout<<"Cups to Pints(enter 2)"<<endl;
  cout<<"Cups to Liters(enter 3)"<<endl;
  cout<<"Liters to Pints(enter 4)"<<endl;
  cout<<"Liters to Cups(enter 5)"<<endl;
  cout<<"Please select a conversion (enter 0-5):"<<endl;
  cout<<"?:";
  cin>>funcNum;
 
  _input:
	  
  switch(funcNum)
    {
    case 0:
      cout<<"Enter the amount in Pints:";
      cin>>pints;
      liters = pints*0.4731;
      cout<<pints<<" Pints is "<<liters<<" Liters"<<endl;
      break;
    case 1:
      cout<<"Enter the amount in Pints:";
      cin>>pints;
      cups = pints*2.0;
      cout<<pints<<" Pints is "<<cups<<" Cups"<<endl;
      break;
    case 2:
      cout<<"Enter the amount in Cups:";
      cin>>cups;
      pints = cups*0.5;
      cout<<cups<<" Cups is "<<pints<< " Pints"<<endl;
      break;
    case 3:
      cout<<"Enter the amount in Cups:";
      cin>>cups;
      liters = cups*0.2366;
      cout<<cups<<" Cups is "<<liters<<" Liters"<<endl;
      break;
    case 4:
      cout<<"Enter the amount in Liters:";
      cin>>liters;
      pints =liters*2.111;
      cout<<liters<<" Liters is "<<pints<<" Pints"<<endl;
      break;
    case 5:
      cout<<"Enter the amount in Liters:";
      cin>>liters;
      cups =liters*4.222;
      cout<<liters<<" Liters is "<<cups<<" Cups"<<endl;
      break;
    default:
    	 while(true){
		  cout<<"Error: please enter integer(0-5)"<<endl;
		  cout<<"?:";
          cin>>funcNum;
		  if(funcNum<5&&funcNum>0)
		        break;
			  }
		 goto _input;
    // error checking
	
 }
  
  return 0;
}