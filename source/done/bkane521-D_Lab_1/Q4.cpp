#include<iostream>
using namespace std;

int main()
{
	char input,output;
	int offset,finished,illegal,legal,checkif,charval;
	int offmax = 25;

	do
	{	
		cout<<"Enter Character: "<<endl;
		cin>>input;
	
		cout<<"Enter Offset (use 0 to convert case): "<<endl;
		do
		{
			cin>>offset;
			charval = static_cast<int>(input);
			if (charval <= 90)
				legal=90;
			if (charval >=97)
				legal=122;
			checkif = charval + offset;
			if (offset>offmax)
			{
				cout<<"Please enter a number between 0 and "<<offmax<<"."<<endl;
				illegal = 1;
			}
			else if (offset<offmax && checkif>legal)
			{
				cout<<"Offset too large for given character; please enter a value between 0 and "<<legal-charval<<"."<<endl;
				illegal = 1;
			}
			else
				illegal = 0;
		} while (offset<0 || offset>offmax || illegal == 1);
	
		if (offset == 0)
			if (charval <= 90)
				checkif = checkif + 32;
			else if (charval >= 97)
				checkif = checkif - 32;
		output = static_cast<int>(checkif);
		cout<<"Your new character is "<<output<<"."<<endl;
		cout<<"To repeat, enter 1."<<endl;
		cin>>finished;
	} while (finished == 1);

	return 0;
}



