#include <iostream>
using namespace std;
int main()
{char foo;
int num;
cout<<"Enter character: ";
cin>>foo;
cout<<"Offset(enter 0 to convert case): ";
cin>>num;
if (num<0)// Checks for error
{
cout<<"Error!  Enter a positive integer! Restart code!"<<endl;
}
else
{
if(num==0)
	{if(foo>='A'&&foo<='Z')
		{foo=foo+32;
		cout<<"New character: "<<foo<<endl;
}
	else if(foo>='a'&&foo<='z')
		{foo=foo-32;
		cout<<"New character: "<<foo<<endl;
}
	else 
		{cout<<"New character: "<<foo<<endl;
}
}
else
	{foo=foo+num;
	cout<<"New character: "<<foo<<endl;
}
}
return 0;
}
