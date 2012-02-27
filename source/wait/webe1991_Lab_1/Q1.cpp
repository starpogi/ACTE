#include<iostream>
using namespace std;
int main()
{
double base;
double height;
double base2;
double height2;
cout <<"Enter the information for the first triangle: "<<endl;
cout <<"Base: ";
cin >>base;
cout <<"Height: ";
cin >>height;
cout<<"Second Triangle:"<<endl;
cout<<"Base: ";
cin >>base2;
cout <<"Height: ";
cin >>height2;
if (height<0||base<0||height2<0||base2<0) //Checks for error!
{cout<<"Error! Restart the code!"<<endl;
}
else
{float area1, area2, remainder; //Solves for area
area1=((base*height)/2);
area2=((base2*height2)/2);
if (area1>area2)
{remainder=area1-area2;
cout <<"Triangle 1 is bigger by "<<remainder<<" units."<<endl;
}
else if (area1<area2)
{remainder=area2-area1;
cout <<"Triangle 2 is bigger by "<<remainder<<" units."<<endl;
}
else if (area1==area2)
{cout <<"Triangle 1 is the same size as triangle 2!"<<endl;
}
}
return 0;
}
