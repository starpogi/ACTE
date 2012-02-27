/* Kevin LeShane - EC327 - Lab 1 - Q4 */

#include<iostream>
using namespace std;

int main()
{ 
  
  char ch;
  int offset;
  int newval;
  char newch;

  /* Prompt user to input a character and an offset integer */

  cout << "Enter character: ";
  cin >> ch;

  cout << "Offset (enter 0 to convert case): ";
  cin >> offset;

  while(offset < 0)
    {
      cout << "Error! Offset value cannot be less than zero." << endl;
      cout << "Please enter an offset value: ";
      cin >> offset;
    }

  int tempnewval = ch + offset;

  while(tempnewval > 127)
    {
      int offlim = 127 - ch;
      cout << "Error! This offset is too large for the chosen character." << endl;
      cout << "Please enter an offset between 0 and " << offlim << ": ";
      cin >> offset;
      
      while(offset < 0)
	{
	  cout << "Error! Offset value cannot be less than zero." << endl;
	  cout << "Please enter an offset value: ";
	  cin >> offset;
	}

      tempnewval = ch + offset;
    }

  
  /* Increment and determine the ASCII character for the given conditions */

  newval = ch + offset;

  if(offset != 0)
    {
      newch = newval;
      cout << "New character: " << newch << endl;
    }

  if((newval >= 65 && newval <= 90) && offset == 0)
    {
      newch = newval + 32;
      cout << "New character: " << newch << endl;
    }

  if((newval >= 97 && newval <= 122) && offset == 0)
    {
      newch = newval - 32;
      cout << "New character: " << newch << endl;
    }

  if(offset == 0 && ((newval >= 0 && newval <= 64) || (newval >= 91 && newval <= 96) || newval >= 123))
    {
      cout << "New character: " << ch << endl;
    }
  
  return 0;

}
