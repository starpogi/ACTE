#include <iostream>
using namespace std;

// This program converts values among Cups, Pints, and Liters.

int main()
{
   int choice;
   double startValue, endValue;
   
   // Prompt the user to enter the conversion required.
   cout << "Pints to Liters (enter 0)" << endl;
   cout << "Pints to Cups (enter 1)" << endl;
   cout << "Cups to Pints (enter 2)" << endl;
   cout << "Cups to Liters (enter 3)" << endl;
   cout << "Liters to Pints (enter 4)" << endl;
   cout << "Liters to Cups (enter 5)" << endl;
   cout << "?: ";
   cin >> choice;
   
   // Check the user input.
   while (choice < 0 || choice > 5)
   {
         cout << "Error! Input a choice 0-5." << endl;
         cout << "?: ";
         cin >> choice;
   }
         
   // Declare conversion constants.
   const double LITERS_PER_PINT = 0.473176473;
   const double CUPS_PER_LITER = 4.22675284;
   const double PINTS_PER_CUP = 0.5;
   
   // Convert the starting values and print out statements.
   switch (choice)
   {
          case 0: // Pints to Liters
               cout << "Enter to amount in Pints: ";
               cin >> startValue;
               endValue = startValue * (LITERS_PER_PINT);
               cout << startValue << " Pints is " << ( static_cast<int>(endValue *100) / 100.0 ) << " Liters." << endl;
               break;
          case 1: // Pints to Cups
               cout << "Enter the amount in Pints: ";
               cin >> startValue;
               endValue = startValue * (LITERS_PER_PINT) * (CUPS_PER_LITER);
               cout << startValue << " Pints is " << ( static_cast<int>(endValue *100) / 100.0 ) << " Cups." << endl;
               break;
          case 2: // Cups to Pints
               cout << "Enter the amount in Cups: ";
               cin >> startValue;
               endValue = startValue * (PINTS_PER_CUP);
               cout << startValue << " Cups is " << ( static_cast<int>(endValue *100) / 100.0 ) << " Pints." << endl;
               break;
          case 3: // Cups to Liters
               cout << "Enter the amount in Cups: ";
               cin >> startValue;
               endValue = startValue * (PINTS_PER_CUP) * (LITERS_PER_PINT);
               cout << startValue << " Cups is " << ( static_cast<int>(endValue *100) / 100.0 ) << " Liters." << endl;
               break;
          case 4: // Liters to Pints
               cout << "Enter the amount in Liters: ";
               cin >> startValue;
               endValue = startValue * (CUPS_PER_LITER) * (PINTS_PER_CUP);
               cout << startValue << " Liters is " << ( static_cast<int>(endValue *100) / 100.0 ) << " Pints." << endl;
               break;
          case 5: // Liters to Cups
               cout << "Enter the amount in Liters: ";
               cin >> startValue;
               endValue = startValue * (CUPS_PER_LITER);
               cout << startValue << " Liters is " << ( static_cast<int>(endValue *100) / 100.0 ) << " Cups." << endl;
               break;
   }

   return 0;
}
