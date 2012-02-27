/*Naveen Gupta; U39-84-0240*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
  char user;
  int offset;
  cout<< "Please enter a character: ";
  cin>>user;
  cout<< "Please enter an integer offset (No negatives; 0s will change the case): "<<endl;
  cin>>offset;
  if(offset < 0) //The program will terminate if the offset is negative;
    {
      cout<< "You entered a negative integer, the program will terminate!"<<endl;
      exit(1);
    }
  else if(offset == 0) //The below else if/nested else if statements will convert cases and will return the same value if it is a non-alphabetical character i.e. ~ = ~ for a 0 offset;
    {
      if(user <= 'Z' && user >= 'A')
	{
	  user +=32; 
	  cout<< "The lowercase of your letter is: " <<user<<endl;
	}
      else if(user >= 'a' && user <= 'z')
	{
	  user -= 32;
	  cout<< "The uppercase of your letter is: " <<user<<endl;
	}
      else if((user >= '!' && user <= '@'))
	{
	  cout<<"New character: "<<user<<endl;
	}
      else if((user >= '[' && user <= '`'))
	{
	  cout<<"New character: " <<user<<endl;
	}
      else if((user >= '{' && user <= '~'))
	{
	  cout<<"New character: " <<user<<endl;
	}
      user++;
    }
  else if(offset > 0)
    {
      char usernew = (char)((char)user+offset);
	if(usernew >= '!' && usernew <= '~') //This ensures the range of values is not an ASCII value that is along the lines of a "SPACE" or "DEL" key;
	  {
	     cout<< "New character: " << usernew <<endl;
	  }
	else 
	  {
	  cout<<"The offset value was too high!"<<endl; //If a value that results in the final character being a key other than a character, i.e. "DEL" or "SPACE", this message will print.
	  }
    }
  return 0;
}
