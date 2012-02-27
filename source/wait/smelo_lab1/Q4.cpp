/* Shayla Melo
u14-87-2468
EC 327 Lab 1: Question 4
2/21/2012*/
#include <iostream>
using namespace std;

int main()  {


	char letter;
	int Newletter;
	int offset;

		cout<<"Please enter a character:";

		cin>>letter;

		Newletter=letter;

		cout<<"Plese enter an offset (enter 0 to change case):  ";

		cin>>offset;



		//To change lowercase letter to Uppercase letter:

		if (Newletter>=97 && offset==0) {

			Newletter=Newletter-32;

			letter=Newletter;

			if (Newletter>129){

		      cout<<" Character + Offset is too large!";

                return 0;}

		    else{

        cout<<"The corresponding character is: " <<letter<< endl;


		    }}




        //To change Upercase letter to Lowercase letter:

		else if (Newletter<97 &&  Newletter>64 && offset==0){

			Newletter=Newletter+32;

			letter=Newletter;

			if (Newletter>129){

		      cout<<" Character + Offset is too large!";

                return 0;}

		    else{

        cout<<"The corresponding character is: " <<letter<< endl;


		    }}


        //To not change value when offset == 0:

        else if (Newletter<65 && offset==0){

            Newletter=Newletter+offset;

            letter=Newletter;

            if (Newletter>129){

		      cout<<" Character + Offset is too large!";

                return 0;}

		    else{

        cout<<"The corresponding character is: " <<letter<< endl;


		    }}



        //To change upercase letters or any character by cooresponding offset:

        else if((Newletter<97) && (offset>0)){

            Newletter=Newletter+offset;

            letter=Newletter;


                if (Newletter>129){

		      cout<<" Character + Offset is too large!";

                return 0;}

		    else{

        cout<<"The corresponding character is: " <<letter<< endl;


		    }}


        //To change lowercase letters by cooresponding offset:

		else if (Newletter>=97 && Newletter && offset>0){

		    Newletter=Newletter+offset;

		    letter=Newletter;

		    if (Newletter>129){

		      cout<<" Character + Offset is too large!";

                return 0;}

		    else{

        cout<<"The corresponding character is: " <<letter<< endl;


		    }}


         if(offset<0){

        cout<<"Invalid Offset! Must be a non-negtive interger!";


                    }
		return 0;

 }









