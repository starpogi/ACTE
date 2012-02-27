// Problem 3

#include <iostream>
using namespace std;

int main()
{
    
    int num_1,num_2,hamm,a,b,c,d,e,f,a2,b2,c2,d2,e2,f2,end;// a,b,c...a2,b2,c2... represents the place in which each digit is located for each number entered. (tens, hundreds, etc.).
    do
    {   
        hamm = 0;//Begins counter "hamm" at 0.

        cout<<"PLease enter two integers between 0 and 999,999."<<endl;
       
        do
        {
                cout<<"1: ";
                cin>>num_1;
                if (num_1<0 || num_1>999999)
                    cout<<"Error. Please enter an integer between 0 and 999,999."<<endl; //This "if" statement will display an error message if the user eneters an integer less than 0 or greater than 999,999 for num_1.
        } 
	while (num_1<0 || num_1>999999);
   
            do
            {
                cout<<"2: ";
                cin>>num_2;
                if (num_2<0 || num_2>999999)
                    cout<<"Error. Please enter an integer between 0 and 999,999."<<endl;//This "if" statement will display an error message if the user eneters an integer less than 0 or greater than 999,999 for num_2.
            } 
	    
	while (num_2<0 || num_2>999999);
   
            a = num_1 %10;
            b = (num_1/10) %10;
            c = (num_1/100) %10;
            d = (num_1/1000) %10;
            e = (num_1/10000) %10;
            f = (num_1/100000) %10;
            a2 = num_2 %10;
            b2 = (num_2/10) %10;
            c2 = (num_2/100) %10;
            d2 = (num_2/1000) %10;
            e2 = (num_2/10000) %10;
            f2 = (num_2/100000) %10;
// The lines above will compute what digit is in each place. Then the "if" statements below will compare the digits of num_1 with the digits of num_2.
            if (a!=a2)
                hamm=hamm+1;
            if (b!=b2)
                hamm=hamm+1;
            if (c!=c2)
                hamm=hamm+1;
            if (d!=d2)
                hamm=hamm+1;
            if (e!=e2)
                hamm=hamm+1;
            if (f!=f2)
                hamm=hamm+1;

            cout<<"The hamming distance between "<<num_1<<" and "<<num_2<<" is "<<hamm<<endl;
    
	cout<< " If you would like to calculate another hamming distance, press 0, if not press 1: ";
	cin >> end;
	}while (end == 0); 

    return 0;

}
