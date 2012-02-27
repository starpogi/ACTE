#include<iostream>
using namespace std;

int main()
{
	int finished;
	double base1,base2,height1,height2,area1,area2,difference;			//variable declaration.

	do
	{
		cout<<"Please enter data for the first triangle. "<<endl;

		do																//inputs first base, loops if negative.
		{
			cout<<"Base 1: ";
			cin>>base1;
				if (base1 < 0)
					cout<<"Please enter a POSITIVE value."<<endl;
		} while (base1 < 0);

		do																//inputs first height, loops if negative.
		{
			cout<<"Height 1: ";
			cin>>height1;
				if (height1 < 0)
					cout<<"Please enter a POSITIVE value."<<endl;
		} while (height1 < 0);

		do																//inputs second base, " "
		{
			cout<<"Base 2: ";
			cin>>base2;
				if (base2 < 0)
					cout<<"Please enter a POSITIVE value."<<endl;
		} while (base2 < 0);
			
		do																//inputs second height, " "
		{
			cout<<"Height 2: ";
			cin>>height2;
				if (height2 < 0)
					cout<<"Please enter a POSITIVE value."<<endl;
		} while (height2 < 0);

		area1 = (.5*base1*height1);										//calulates the two areas.
		area2 = (.5*base2*height2);
		
		cout<<"The area of triangle 1 is equal to: "<<area1<<endl;
		cout<<"The area of triangle 2 is equal to: "<<area2<<endl;

		if (area1>area2)												//case statements determine output.
		{
			difference = (area1 - area2);
			cout<<"Triangle one is larger by "<<difference<<" units."<<endl;
		}
		else if (area1==area2)
		{
			cout<<"The two triangles are equal in area."<<endl;
			difference = 0;
		}
		else if (area2>area1)
		{
			difference = (area2 - area1);
			cout<<"Triangle two is larger by "<<difference<<" units."<<endl;
		}
		else															//just in case :)
		{
			cout<<"Unknown Error; Try again."<<endl;
		}

		cout<<"Enter 1 to reiterate."<<endl;
		cin>>finished;													//inputs finished to loop or quit.
	} while (finished == 1);

	return 0;

}

			
