/*Naveen Gupta; U39-84-0240 */
#include<iostream>
#include<stdio.h>
#include<stdlib.h> 
/*The stdio.h and stdlib.h header files are provided in order to exit upon an invalid value.*/
#include<sstream> //This library is for converting the integers to streams.
using namespace std;

int main()
{ 
  cout<<"Please enter two integers from 0 to 999,999: " <<endl;
  string s;
  cin>> s;
  stringstream t;
  t<< s;
  int x;
  t>> x;
  /*The above takes the first integer and converts it into a stringstream for the terminal to read.*/

  string u;
  cin>> u;
  stringstream v;
  v<< u;
  int y;
  v>> y;
  /*The above takes the second integer and converts it into a stringstream for the terminal to read*/
 
  if (x<0 || x>999999)
    { 
      cout<<"You entered an invalid value, the program will exit!";
      exit(1);
    }
  if(y<0 || y>999999)
    {
      cout<<"You entered an invalid value, the program will exit!";
      exit(1);
    }
//The below while and for loops convert the integers to strings and the for loop ensures that both strings are of 6 digits longterm
  while(s.size() < 6)
    {
      s = "0" + s;
    }
  while(u.size() < 6)
    {
      u = "0" + u;
    }
  int hammertime = 0;
  for(int i=0; i < 6; i++)
    if( s[i] != u[i])
      {
	hammertime++;
      }
  cout<<s << "\n"; //Displays the new string with 0s in front (if less than 6 digits long)
  cout<<u << "\n";
  cout<<"The Hamming distance between " << s << " and " << " is " << hammertime << "." <<endl; 
	//Displays the Hamming Distance obtained from the for loop
  return 0;
}

 
