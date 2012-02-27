#include <iostream>
using namespace std;

int main()
{
    //Initialize variables
    int base1,base2,height1,height2;
    double area1,area2,diff;

    //Prompt for inputs
    cout<<"Enter the information for the first triangle: "<<endl;
    cout<<"Base: ";
    cin>>base1;
    cout<<"Height: ";
    cin>>height1;
    cout<<"Second Triangle: "<<endl;
    cout<<"Base: ";
    cin>>base2;
    cout<<"Height: ";
    cin>>height2;

    //Error check for negative or zero values
    while(base1 <= 0)
    {
        cout<<"The base of a triangle cannot be zero. Enter a new base for triangle 1: ";
        cin>>base1;
    }
    while(height1 <= 0)
    {
        cout<<"The height of a triangle cannot be zero. Enter a new base for triangle 1: ";
        cin>>height1;
    }
    while(base2 <= 0)
    {
        cout<<"The base of a triangle cannot be zero. Enter a new base for triangle 2: ";
        cin>>base2;
    }
    while(height2 <= 0)
    {
        cout<<"The height of a triangle cannot be zero. Enter a new base for triangle 2: ";
        cin>>height2;
    }

    //calculate area of both triangles
    area1 = .5*base1*height1;
    area2 = .5*base2*height2;

    //Calculate difference depending on which triangle is larger and outputs difference
    if (area1>area2)
    {
        diff = area1-area2;
        cout<<"Triangle 1 is bigger by "<<diff<<" units"<<endl;
    }
    else if (area2>area1)
    {
        diff = area2-area1;
        cout<<"Triangle 2 is bigger by "<<diff<<" units"<<endl;
    }
    else
    {
        cout<<"The triangles are of equal area"<<endl;
    }

    return 0;
}
