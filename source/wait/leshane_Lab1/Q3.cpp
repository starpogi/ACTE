/* Kevin LeShane - EC327 - Lab 1 - Q3 */

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
  int n1;
  int n2;
  char number1[6];
  char number2[6];
  int len1;
  int len2;

  /* Prompt for two integers to be entered and check to be sure they are within the defined bounds. */

  cout << "Enter two integers between 0 and 999999: ";
  cin >> n1 >> n2;

  while (n1 >= 999999 || n1 <= 0 || n2 >= 999999 || n2 <= 0)
    {
      cout << "One or both of these integers is not within the permitted range of values." << endl;
      cout << "Please enter two numbers between 0 and 999999: ";
      cin >> n1 >> n2;
    }

  char num1[6];
  char num2[6];
  sprintf(num1,"%d", n1);
  sprintf(num2,"%d", n2);
  
  len1 = strlen(num1);
  len2 = strlen(num2);

  /* Creating number string 1 of length six using entered value to compare six numbers from number1 to six numbers from number2 */
 
 int adder1 = 6-len1;

  for(int i=0; i<=adder1-1; i++)
    {
      number1[i] = '0';
    }

  for(int i=adder1; i<6; i++)
    {
      number1[i] = num1[i-adder1];
    }

  
  /* Repeating the above process for number string 2 */

  int adder2 = 6-len2;

  for(int i=0; i<=adder2-1; i++)
    {
      number2[i] = '0';
    }

  for(int i=adder2; i<6; i++)
    {
      number2[i] = num2[i-adder2];
    }

  
  /* Compare the two sequences (number1 and number2) for hamming distance. */
  
  int hamdist = 0;

  for(int i=0; i<6; i++)
    {
      if( number1[i] != number2[i] )
	{
	  hamdist++;
	}
    }

  
  /* Output  hamming difference text */

  cout << "Hamming distance between " << num1 << " and " << num2 << " is " << hamdist << "." << endl;
 

  return 0;
}
