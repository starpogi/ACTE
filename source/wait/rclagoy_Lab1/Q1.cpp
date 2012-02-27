#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  double  base1, height1, base2, height2, area1, area2, adif12, adif21;

  cout<< "Enter the information for the first triangle: " <<endl;
  //The information for the base of the first triangle  is entered.
  cout<<"Base: ";
  cin>>base1;
  
  //This checks to see if the base is greater than 0, if not request another number.
  while (base1 <=0){
    cout<<"Error: Please enter a value greater than 0: "; 
    cin>>base1;
  }

  //This gets the height for the first triangle.
  cout<<"Height: ";
  cin>>height1;

  while (height1 <=0){
    cout<<"Error: Please enter a value greater than 0: "; 
    cin>>height1;
  }

  //This is basically the same as above.
  cout<< "Second Triangle: "<<endl;

  cout<<"Base: ";
  cin>>base2;

  while (base2 <=0){
    cout<<"Error: Please enter a value greater than 0: "; 
    cin>>base2;
  }

  cout<<"Height: ";
  cin>>height2;

  while (height2 <=0){
    cout<<"Error: Please enter a value greater than 0: "<<endl; 
    cin>>height2;
  }

  //This calculates the area of the two triangles.
  area1=.5*base1*height1;
  area2=.5*base2*height2;

  //This calculates the difference.
  adif12=area1-area2;
  adif21=area2-area1;

  //This determines which triangle is bigger and what the difference is.
  //Setprecision and fixed give me two decimal points.
  if (adif12>0){
    cout<<"Triangle 1 is bigger by "<< fixed << setprecision(2) << adif12 << "." << endl;
  }
  if (adif21>0){
    cout<<"Triangle 2 is bigger by "<< fixed << setprecision(2) << adif21 << "." << endl;
  }
  if (adif12==0) {
    cout<<"Triangle 1 and Triangle 2 are equal."<<endl;
  }
}
