/*Ita Kane. lab1, question 2, EC327, Spring 2012*/
#include <iostream>
using namespace std;

int main() {
        int var= 1;
        int contype;
        //While loop error checkes for int values between 0 and 5
        while (var)
        {
                //Promts user to enter 0-5 depedning on the conversion they wish to make
                cout<<"Pint to Liters (enter 0)"<< endl <<"Pints to Cups (enter 1)"<<endl<< "Cups to Pints (enter 2)"<< endl<< "Cups to Liters(enter 3)"<< endl<< "Liters to Pints (enter 4)"<< endl<< "Liters to Cups (enter 5)"<< endl<< "?:";
                cin>> contype;
                if (contype>5 || contype<0)
                cout<<"Enter an integer between 0 and 5"<< endl;
                else
                var=0;
        }
        float pints, cups, liters;
        //Switch statemnt makes conversion and outputs the result depeding on which conversion was chosen
        switch (contype) {
                //Pints to liters
                case 0:
                cout<< "Enter the amount in Pints: ";
                cin>> pints;
                liters= .47 * pints;
                cout<< pints <<" Pints is "<< liters << " Liters."<<endl;
                break;
                //Pints to cups
                case 1:
                cout<< "Enter the amount in Pints: ";
                cin>> pints;
                cups= 2 * pints;
                cout<< pints <<" Pints is "<< cups << " Cups."<<endl;
                break;
                //Cups to pints
                case 2:
                cout<< "Enter the amount in Cups: ";
				 cin>> pints;
                cups= 2 * pints;
                cout<< pints <<" Pints is "<< cups << " Cups."<<endl;
                break;
                //Cups to pints
                case 2:
                cout<< "Enter the amount in Cups: ";
                cin>> cups;
                pints= .5 * cups;
                cout<< cups <<" Cups is "<< pints << " Pints."<<endl;
                break;
                //cups to liters
                case 3:
                cout<< "Enter the amount in Cups: ";
                cin>> cups;
                liters= .24 * cups;
                cout<< cups <<" Cups is "<< liters << " Liters."<<endl;
                break;
                //liters to pints
                case 4:
                cout<< "Enter the amount in Liters: ";
                cin>> liters;
                pints= 2.11 * liters;
                cout<< liters <<" Liters is "<< pints << " Pints."<<endl;
                break;
                //liters to cups
                case 5:
                cout<< "Enter the amount in Liters: ";
                cin>> liters;
                cups= 4.23 * liters;
                cout<< liters <<" Liters is "<< cups << " Cups."<<endl;
                break;
        }
return 0;
}

