#include<iostream>
using namespace std;

int main(){

  double c=0,d=0;
  
  do{

    cout<<"Enter two integers between 0 and 999999 (enter -1 to exit):  ";
    cin>>c;
    if(c<0 || c>999999){
      if(c == -1){cout<<"Program terminated by user. \n";break;} 
      cout<<"Values out of range!"<<endl; continue;
    }

    cin>>d;
    if(d<0 || d>999999){
      if(d == -1){cout<<"Program terminated by user.\n";break;}
      cout<<"Values out of range!"<<endl; continue;
    } 

    int a=static_cast<int>(c), b=static_cast<int>(d);

    int count=0;
    
    if(a/100000%10 != b/100000%10)  {count++;}
    if(a/10000%10 != b/10000%10)    {count++;}
    if(a/1000%10 != b/1000%10)      {count++;}
    if(a/100%10 != b/100%10)        {count++;}
    if(a/10%10 != b/10%10)          {count++;}
    if(a/1%10 != b/1%10)            {count++;}
    
    cout<<"Hamming distance between "<<a<<" and "<<b<<" is "<<count<<"."<<endl;

  }while(true);

  return 0;
}




