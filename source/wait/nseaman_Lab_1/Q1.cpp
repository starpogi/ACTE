#include<iostream>
using namespace std;

int main()
{
    int base1, height1, base2, height2;
    double area1, area2, diff1, diff2;
    cout.precision(2); // sets 2 decimal points

    cout<<"Enter the information for the first triangle:"<<endl;
    cout<<"Base:";
    cin>>base1;
    //check to make sure base is greater than 0
    while (base1 <= 0)
    {
        cout<<"Try again! Must enter positive integer:"<<endl;
        cin>>base1;
    }
    cout<<"Height:";
    cin>>height1;
     while (height1 <= 0)
    {
        cout<<"Try again! Must enter positive integer:"<<endl;
        cin>>height1;
    }
    cout<<"Enter the information for the second triangle:"<<endl;
    cout<<"Base:";
    cin>>base2;
     while (base2 <= 0)
    {
        cout<<"Try again! Must enter positive integer:"<<endl;
        cin>>base2;
    }
    cout<<"Height:";
    cin>>height2;
     while (height2 <= 0)
    {
        cout<<"Try again! Must enter positive integer:"<<endl;
        cin>>height2;
    }

    area1 = .5 * base1 * height1;
    area2 = .5 * base2 * height2;
    if (area1>area2)
    {
        diff1=area1-area2;
        cout<<"Triangle 1 is bigger by "<< fixed<<diff1<<" units."<<endl;
    }
    else if (area2>area1)
    {
        diff2=area2-area1;
        cout<<"Triangle 2 is bigger by "<<fixed<<diff2<<" units."<<endl;
    }
    else
    cout<<"Triangle 1 and 2 have the same area."<<endl;

    return 0;
}
