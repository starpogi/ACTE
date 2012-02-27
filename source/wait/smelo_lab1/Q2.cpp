/*Shayla Melo
u14-87-2468
EC 327 Lab 1: Question 2
Last Updated: 2/16/2012
Due Date: 2/21/2012*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()  {


	double pint1, new0;
	double pint2, new1;
	double cup1, new2;
	double cup2, new3;
	double liter1, new4;
	double liter2, new5;
	double answer;




		cout<<"Please choose one of the following conversions: "<<endl;

				cout<<"Pints to Liters (enter 0)  " <<endl;
				cout<<"Pints to Cups   (enter 1)  " <<endl;
				cout<<"Cups to Pints   (enter 2)  " <<endl;
				cout<<"Cups to Liters  (enter 3)  " <<endl;
				cout<<"Liters to Pints (enter 4)  " <<endl;
				cout<<"Liters to Cups  (enter 5)  " <<endl;

				cin>>answer;




		// Pints to Liters Conversion:

		if (answer==0) {

			cout<<"Please enter the amount in Pints: " <<endl;

			cin>>pint1;

			new0=(pint1*0.473);

                cout<<setprecision(3);

                cout<< showpoint << pint1 << " Pints is " << new0 << " Liters." <<endl;

					}
		// Pints to Cups Conversion:

		else if (answer==1) {

			cout<<"Please enter the amount in Pints: " <<endl;

			cin>>pint2;

			new1=(pint2*2.000);

                cout<<setprecision(3);

                cout<< showpoint<< pint2 << " Pints is "<< new1 << " Cups." <<endl;

					}
		// Cups to Pints Conversion:

		else if (answer==2) {

			cout<<"Please enter the amount in Cups: " <<endl;

			cin>>cup1;

			new2=(cup1*0.500);

                cout<<setprecision(3);

                cout<< showpoint << cup1 << " Cups is " << new2 << " Pints." <<endl;

					}
		// Cups to Liters Conversion:

		else if (answer==3) {

			cout<<"Please enter the amount in Cups: " <<endl;

			cin>>cup2;

			new3=(cup2*0.237);

                cout<<setprecision(3);

                cout<< showpoint<< cup2 << " Cups is " << new3 << " Liters." <<endl;

					}

		//Liters to Pints Conversion:

		else if (answer==4) {

			cout<<"Please enter the amount in Liters: " <<endl;

			cin>>liter1;

			new4=(liter1*2.113);

                cout<<setprecision(4);

                cout<< showpoint << liter1 << " Liters is " << new4 << " Pints." <<endl;

					}

		//Liters to Cups Conversion:

		else if (answer==5) {

			cout<<"Please enter the amount in Liters: " <<endl;

			cin>>liter2;

			new5=(liter2*4.23);

                cout<<setprecision(3);

                cout<< showpoint<< liter2 << " Liters is " << new5 << " Cups." <<endl;

					}

		else  {

			cout<<"Invalid Input by User!";

			 }

				return 0;

}









