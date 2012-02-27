#include <iostream>
using namespace std;
int main()
{
  //Assign all variables
  char num;
  int num1;
  int num2;
  int num4;
  char num3;
  //outputs and inputs
  cout<<"Enter character: ";
  cin>>num;
  cout<<"Offset (enter 0 to convert case): ";
  cin>>num2;
  //chenck inputs, if the inputs is out of range then type again for suitable numbers
  while (num1+num2>127)
    {
      cout<<"Wrong! Enter character: ";
      cin>>num;
      cout<<"Offset (enter 0 to convert case): ";
      cin>>num2;
    }		
  if (num2==0)
    { num1=num;
      //From upper case to lower case
      if(num1>=65 && num1<=90)
	{
	  num4=num1+32;
	  num3=num4;
	  cout<<"New character1: "<<num3<<endl;
	}
      //From lower case to upper case
      else if(num1>=97 && num1<=122)
	{
	  num4=num1-32;
	  num3=num4;
	  cout<<"New character2: "<<num3<<endl;
	}
      //If nothing keeps the same		
      else
	{
	  num4=num1;
	  num3=num4;
	  cout<<"New character3: "<<num3<<endl;
	}
    }
  //add the two numbers together.
  if (num2!=0)
    { num1=num;
      num4=num1+num2;
      num3=num4;
      cout<<"New character4: "<<num3<<endl;
    }
}
		
		
