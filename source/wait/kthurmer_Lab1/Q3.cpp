// Kate Thurmer U24179971
// Lab 1, Question 3.
// This program takes in two integers between 0 and 999999
// and returns the hamming distance between them.

#include <iostream>
#include "string"
using namespace std;

int main()
{
  // ask the user for two integers. 
  // Take them in as strings, so length isn't an issue.
  string aa;
  string bb;

  cout<<"Enter two integers between 0 and 999999:";
  cin>>aa>>bb;

  // make sure they're in range.

  int lenA = aa.length();
  int lenB = bb.length();

  while ((aa[0]=='-')||(lenA>6))
  {
    cout<<"Your first entry is out of range."<<endl
	 <<"Please replace it with an integer between 0 and 999999:";
    cin>>aa;
    lenA = aa.length();
  }

  while ((bb[0]=='-')||(lenB>6))
  {
    cout<<"Your second entry is out of range."<<endl
	 <<"Please replace it with an integer between 0 and 999999:";
    cin>>bb;
    lenB = bb.length();
  }  

  // once you have legal inputs, convert to integers.
  int a = atoi(aa.c_str());
  int b = atoi(bb.c_str());
  
  // For each decimal place, compare a & b and count non-matches.
  int c=0;
  int adigit, bdigit;
  int atemp=a;
  int btemp=b;

  for (int i=100000;i>0;i=i/10)
  {
    if (atemp/i == 0)  // Unused decimal places count as zeroes.
      adigit=0;
    else
    {
      adigit= atemp/i;
      atemp-= adigit*i;
    }

    if (btemp/i == 0)  // Unused decimal places count as zeroes.
      bdigit=0;
    else
    {
      bdigit=btemp/i;
      btemp-= bdigit*i;
    }

    if (adigit != bdigit)  // Compare digits of a and b.
      c++;                 // Count non-matches.
  } 

  // Report results.

  cout<<"The hamming distance between "<<a<<" and "<<b<<" is "
      <<c<<"."<<endl;

  return 0;
}
