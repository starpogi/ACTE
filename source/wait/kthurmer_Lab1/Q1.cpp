// Kate Thurmer U24179971
// Lab 1, Question 1.
// This program takes in integer bases and heights for two traingles
// and says which is larger in area and by how much (to three decimal places).


#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  // get all the bases and heights from the user and make sure they're positive.
  // Note: I'm using doubles to make sure the area doesn't truncate (as it might if
  // both arguments are integers).  I think it's ok either way though.

  double b1,h1,b2,h2;

  cout<<"Enter the information for the first triangle:"<<endl;
  
  cout<<"Base:";  //get the base of the first triangle
  cin>>b1;

  while (b1<=0)  //keep whining until you get a valid input
    {
      cout<<"Not a valid length.  Try again."<<endl<<"Base:";
      cin>>b1;
    }

  cout<<"Height:";  //get the height of the first triangle
  cin>>h1;

  while (h1<=0)  //keep whining until you get a valid input
    {
      cout<<"Not a valid length.  Try again."<<endl<<"Height:";
      cin>>h1;
    }

  cout<<"Enter the information for the second triangle:"<<endl;
  
  cout<<"Base:";  //get the base of the second triangle
  cin>>b2;

  while (b2<=0)  //keep whining until you get a valid input
    {
      cout<<"Not a valid length.  Try again."<<endl<<"Base:";
      cin>>b2;
    }

  cout<<"Height:";  //get the height of the second triangle
  cin>>h2;

  while (h2<=0)  //keep whining until you get a valid input
    {
      cout<<"Not a valid length.  Try again."<<endl<<"Height:";
      cin>>h2;
    }

// compute and compare areas. 

  double a1 = (0.50)*b1*h1;
  double a2 = (0.50)*b2*h2;
  double d = abs(a1-a2);


// set variable "bigger" as the number of the larger triangle 

  int bigger;
  if (a1>a2)
     bigger=1;
   else
     bigger=2;

// output results with exactly three decimal places

  cout.setf(ios::fixed,ios::floatfield);
  cout.precision(3);

  cout<<"Triangle "<<bigger<<" is bigger by "<<d<<" units."<<endl;
  
  return 0;
}

