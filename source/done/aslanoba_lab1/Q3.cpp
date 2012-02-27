#include <iostream>
using namespace std;

int main()
{
    //Prompt the user to enter 2 integers between 0 and 999999, and error check if number in correct range
    
    int number1, number2;
    cout <<"Enter two integers between 0 and 999999: ";
    cin >>number1>>number2;
    while ((number1 >999999 || number2>999999) || (number1 <0 || number2<0))
    {
        cout <<"Out of specified range, please enter two integers between 0 and 999999: ";
        cin >>number1>>number2;
        if ((number1 <=999999 && number1>=0) && (number2 <=999999 && number2>=0)) break;
    }
 
    //store each digit of number 1 in a variable
    //a is the most significant bit while f is the least significant bit
    int a,b,c,d,e,f,aa,bb,cc,dd,ee,ff;
    a=number1 / 100000;    //999999/100000=9
	aa=number1 % 100000;
    b=aa / 10000;
	bb=aa % 10000;      
    c=bb / 1000;
	cc=bb % 1000;
    d=cc / 100;
	dd=cc % 100;
    e=dd / 10;
	ee=dd % 10;
    f=ee / 1;
	ff= ee % 1;
        
   
    //store each digit of number 2 in a variable
    //l is the most significant bit while q is the least significant bit
    int l,m,n,o,p,q,ll,mm,nn,oo,pp,qq;
    l=number2 / 100000;
	ll=number2 % 100000;
   	m=ll / 10000;
	mm=ll % 10000;
    n=mm / 1000;
	nn=mm % 1000;
    o=nn / 100;
	oo=nn % 100;
    p=oo / 10;
	pp=oo % 10;
    q=pp / 1;
	qq=pp  % 1;
    
    //compare the number bit by bit
    int j,k,x,y,z,w;
    
    if (a==l)
    {
        j=0;
    }
    else
    {
        j=1;
    }
    if (b==m)
    {
        k=0;
    }
    else 
    {
        k=1;
    }
    if (c==n)
    {
        x=0;
    }
    else
    {
        x=1;
    }
    if (d==o)
    {
        y=0;
    }
    else 
    {
        y=1;
    }
    if (e==p)
    {
        z=0;
    }
    else
    {
        z=1;
    }
    if (f==q)
    {
        w=0;
    }
    else 
    {
        w=1;
    }
    
    
    int hd=j+k+x+y+z+w;
    cout <<"Hamming distance between " <<number1<<" and "<<number2<<" is "<<hd<<"."<<endl;
    
    return 0;
}



        
