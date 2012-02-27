/* Naveen Gupta; U39-84-240*/
#include <iostream>
#include <stdio.h> 
#include <stdlib.h> //Standard libraries for using the exit command below;
using namespace std;

int main() 
{
  float base1; 
  float base2; 
  float height1;
  float height2;
  float area1;
  float area2; 
  float diff1;
  float diff2;
  cout<< "Please enter the base of your first triangle(Note: it can't be less than or equal to zero):";
  cin>> base1;
  if (base1 <= 0)
    {cout<< "You entered a value less than or equal to 0!"<<endl;
    exit(1); //Exit command from stdio.h and stdlib.h; program will exit upon incorrect values.
    }
  else if (base1 > 0)
    {
      cout<< "Now enter the height of that triangle(Note: it can't be less than or equal to zero):";
      cin>> height1;
    }
    if (height1 <= 0)
	{
	  cout<< "You entered a value less than or equal to 0!"<<endl;
	  exit(1); 
	}
      else if (height1 > 0)
	{
	  cout<< "Please enter the base of your second triangle(Note: it can't be less than or equal to zero):";
	  cin>> base2;
	}
	   if (base2 <= 0)
	     {
	       cout<< "You entered a value less than or equal to 0!"<<endl;
	       exit(1);
		 }
	       else if (base2 > 0)
	         {
		   cout<< "Now enter the height of the second triangle:";
		   cin>> height2;
		 }
	            if (height2 <= 0)
		      {
			cout<< "You entered a value less than or equal to 0!"<<endl;
			exit(1);
		 }
		    else if (height2 > 0)
		      {
		        area1 = (base1*height1/(2.0));
			area2 = (base2*height2/(2.0)); 
			diff1 = (area2)/(area1); //When area 2 is greater, calculatess the units by which it is greater
			diff2 = (area1)/(area2); // When area 1 is greater, calculates the units by which it is greater
		      }
		    if (area1 > area2)
		      {
			cout<< "Triangle 1 is bigger than Triangle 2 by " << diff2 << " units" <<endl;
		      }
		    else if (area2 > area1)
		      {
			cout<< "Triangle 2 is bigger than Triangle 1 by " << diff1 << " units" <<endl;
		      }
		    else if (area1 = area2)
		      {
			cout<< "Both triangles are equal in area." <<endl;      
		      }
		    return 0;
}
  
