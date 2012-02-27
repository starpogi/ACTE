#include <iostream>

using namespace std;
int main()
 {
	
	char ch,result; //declaring variables for the program
	int oset;
	cout << "enter a character : "; //promts for a character from a use
	cin >> ch;
	cout << " offset (enter '0' to convert case): "; // asking for an offset number
	cin >> oset;
	if (oset>0) 
	
	{
	result = oset+ch;
	cout << " New character :" << result<<  endl;
	}
	else if (oset==0) //if the offset is zero, it will check if the letter is upper case or lower case and increase or decrease 32 accordingly.
	{
		if ((ch >= 65) && (ch <= 90))
		{
			result=	ch+32;	
			cout << " New character : " << result<<  endl;
		}
		else if ((ch >= 97) && (ch <= 122))
		{
			result=	ch-32;
			cout << " New character : " << result<<  endl;
		}
		else
			cout<< "Cannot use offset function for numbers and figures" << endl; // error for 0 offset for number and characters other than letters
		}

	else
	cout<< "Cannot enter a negative number as an offset"<<endl; //error for a negative offset


}

