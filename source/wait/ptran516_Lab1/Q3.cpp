#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // Initialize the variables
  // Values entered by the user
  int num1;
  int num2;

  // Values for determining Hamming distance
  int counter = 0;
  int num1sub = 0;
  int num2sub = 0;

  // Prompt the user for the two integers
  cout << "Enter two integers between 0 and 999999: ";
  cin >> num1 >> num2;

  // For loop to compare to each place value of the number
  for (int i = 5; i >= 0; i--)
    {
      // Store the divising value in a variable
      int div1 = (int) pow(10,(double)i);
      
      // Store each number place in a variable (starting with hundred thousand)
      // This is done by dividing the input numbers then subtracting the previous place number * 10
      int num1place = (num1 / div1) - num1sub;
      int num2place = (num2 / div1) - num2sub;

      // Use if statement to add to counter
      if (num1place != num2place)
	counter++;

      // Store the place values for next place value calculation
      num1sub = (num1sub * 10) + (num1place * 10);
      num2sub = (num2sub * 10) + (num2place * 10);
    }

  // Display the Hamming distance between the numbers
  cout << "Hamming distance between " << num1 << " and " << num2 << " is " << counter << "." << endl;
}
