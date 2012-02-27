#include <iostream>
using namespace std;

int main()

{
    //display conversion types
    cout <<"Pints to Liters (enter 0)"<<endl;
    cout <<"Pints to Cups (enter 1)"<<endl;
    cout <<"Cups to Pints (enter 2)"<<endl;
    cout <<"Cups to Liters (enter 3)"<<endl;
    cout <<"Liters to Pints (enter 4)"<<endl;
    cout <<"Liters to Cups (enter 5)"<<endl;
    
    //prompt user to select conversion type
    int conv;
    cout <<"?: ";
    cin >> conv;
    
    ////Error check the user input, prompt user again to enter a valid number
        while (conv < 0 || conv > 5)
        {
            cout <<"Enter a number 0-5: ";
            cin >> conv;
            if (conv >= 0 && conv <= 5) break;
        }
    
    switch (conv)
    {
        double Pints, Cups, Liters;
            
        //Pints to Liters    
        case 0: cout <<"Enter the amount in Pints: ";
                cin >> Pints;
            
                //Error check the user input, prompt user again to enter valid amount
                while (Pints <= 0)
                {
                    cout <<"Enter a valid amount: ";
                    cin >> Pints;
                    if (Pints >0) break;
                }
            
                if (Pints==1)
                {
                    cout << Pints << " Pint is " << Pints*0.473 << " Liters."<<endl;
                    break;
                }
                else
                {
                    cout << Pints << " Pints is " << Pints*0.473 << " Liters."<<endl;
                    break;
                }
        
        //Pints to Cups    
        case 1: cout <<"Enter the amount in Pints: ";
                cin >> Pints;
                
                //Error check the user input, prompt user again to enter valid amount
                while (Pints <= 0)
                {
                    cout <<"Enter a valid amount: ";
                    cin >> Pints;
                    if (Pints >0) break;
                }
            

                if (Pints==1)
                {
                    cout << Pints << " Pint is " << Pints*2 << " Cups."<<endl;
                    break;
                }
                else
                {
                    cout << Pints << " Pints is " << Pints*2 << " Cups."<<endl;
                    break;
                }
        
        //Cups to Pints    
        case 2: cout <<"Enter the amount in Cups: ";
                cin >> Cups;
                
                //Error check the user input, prompt user again to enter valid amount
                while (Cups <= 0)
                {
                    cout <<"Enter a valid amount: ";
                    cin >> Cups;
                    if (Cups >0) break;
                }

                if (Cups==1)
                {
                    cout << Cups << " Cup is " << Cups*0.5 << " Pints."<<endl;
                    break;
                }
                else
                {
                    cout << Cups << " Cups is " << Cups*0.5 << " Pints."<<endl;
                    break;
                }
                
        //Cups to Liters
        case 3: cout <<"Enter the amount in Cups: ";
                cin >> Cups;
                
                //Error check the user input, prompt user again to enter valid amount
                while (Cups <= 0)
                {
                    cout <<"Enter a valid amount: ";
                    cin >> Cups;
                    if (Cups >0) break;
                }

                if (Cups==1)
                {
                    cout << Cups << " Cup is " << Cups*0.237 << " Liters."<<endl;
                    break;
                }
                else
                {
                    cout << Cups << " Cups is " << Cups*0.237 << " Liters."<<endl;
                    break;
                }
                
        //Liters to Pints
        case 4: cout <<"Enter the amount in Liters: ";
                cin >> Liters;
            
                //Error check the user input, prompt user again to enter valid amount
                while (Liters <= 0)
                {
                    cout <<"Enter a valid amount: ";
                    cin >> Liters;
                    if (Liters >0) break;
                }

                if (Liters==1)
                {
                    cout << Liters << " Liter is " << Liters*2.113 << " Pints."<<endl; 
                    break;
                }
                else
                {
                    cout << Liters << " Liters is " << Liters*2.113 << " Pints."<<endl;
                    break;
                }
                
        //Liters to Cups
        case 5: cout <<"Enter the amount in Liters: "; 
                cin >> Liters;
            
                //Error check the user input, prompt user again to enter valid amount
                while (Liters <= 0)
                {
                    cout <<"Enter a valid amount: ";
                    cin >> Liters;
                    if (Liters >0) break;
                }

                if (Liters==1)
                {
                    cout << Liters << " Liter is " << Liters*4.227 << " Cups."<<endl;
                    break;
                }
                else
                {
                    cout << Liters << " Liters is " << Liters*4.227 << " Cups."<<endl;
                    break;
                }
    }
    
    return 0;
}
