# include <iostream>
# include <iomanip>

using namespace std;

int main()

{

	char in,out;
	int con;
	
	cout<<"Enter character: ";
	cin>>in;
	
	do
	{
	cout<<"Offset (enter 0 to convert case): ";
	cin>>con;
	} while (con<0);
	//Error check


	int innum=static_cast<int>(in);
	int outnum;	

	if (innum>64 && innum<91)
	{
		if (con==0)
			outnum=innum+32;
		else
			outnum=innum+con;
	}
	else if (innum>96 && innum<128)
	{
		if (con==0)
			outnum=innum-32;
		else
			outnum=innum+con;
	}
	else
		outnum=innum+con;
	
	//check if num>127
	while (outnum>127)
		outnum=outnum-128;
	
	cout<<"New character: "<<(static_cast<char>(outnum))<<endl;

	return 0;
}
