#include <iostream>
#include <string>
using namespace std;

int main()
{ int n,m,count,dif,i;
char str[6], str2[6];
  	cout << "Enter two integers between 0 and 999999: ";
    cin >> n; 
		if (n>999999 || n<0){
		cout << "Error: Number must be between 0 and 999999" << endl;
		cin >> n;}
    cin >> m;
	    if (m>999999 || m<0){
		cout << "Error: Number must be between 0 and 999999" << endl;
		cin >> m;}

	itoa(n,str,10);
	itoa(m,str2,10);
	
	count=0;
	string str3="000000";
		
	if (strlen(str)==strlen(str2)){  //hamming distance when two strings are equal length 
		for (i=0; i < strlen(str); i++)
			if (str[i] != str2[i]){ 
				count++;}
	}

	else if (strlen(str) > strlen(str2)){  //hamming distance when the first string is longer than the second one
		dif=strlen(str)-strlen(str2);
		str3.replace(dif,strlen(str2),str2);  //adds a 0 for the amount of different sizes of the strings
		for (i=0; i < strlen(str); i++)
			if (str[i] != str3[i]){ 
				count++;}
	}

	else {      //hamming distance when the second string is longer than the first one
		dif=strlen(str2)-strlen(str);
		str3.replace(dif,strlen(str),str);  
		for (i=0; i < strlen(str2); i++)
			if (str2[i] != str3[i]){ 
				count++;}
	}
	
	cout << "Hamming distance between " << n << " and " << m << " is " << count << endl;

	system("pause"); //required for visual studios
return 0;
}

