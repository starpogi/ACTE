/*Shayla Melo
u14-87-2468
EC 327 Lab 1: Question 1
Last Updated: 2/16/2012
Due Date: 2/21/2012*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()  {



	double base1;
	double height1;
	double base2;
	double height2;
	double Diff;
	double Triangle1;
	double Triangle2;


		cout<<"Please enter base for triangle 1: ";

			cin>>base1;

			if(base1<=0){
                cout<<"Invalid Input!";
                        return 0;
                        }

		cout<<"Please enter height for triangle 1:";

			cin>>height1;

			if(height1<=0){
                cout<<"Invalid Input!";
                           return 0;
                            }

			       Triangle1 = (height1*base1*0.500);

		cout<<"Please enter base for triangle 2: ";

			cin>>base2;

			if(base2<=0){
                cout<<"Invalid Input!";
                        return 0;
                        }

		cout<<"Please enter height for triangle 2:";

			cin>>height2;

			if(height2<0){
                cout<<"Invalid Input!";
                        return 0;
                        }

				Triangle2 = (height2*base2*0.500);



			if (Triangle2>Triangle1) {

				Diff = (Triangle2 - Triangle1);

				cout<<setprecision(3);

                cout<< "Triangle 2 is bigger by " << showpoint <<Diff<< " units " << endl;
									  }


	        else if (Triangle1>Triangle2) {

	            Diff = (Triangle1 - Triangle2);

	            cout<<setprecision(3);

                cout<< "Triangle 1 is bigger by " << showpoint <<Diff<< " units " << endl;
										   }


			else if(Triangle1=Triangle2){

                cout<<"Triangle 1 and Triangle 2 have the same area!"<<endl;

                                       }

				return 0;

}









