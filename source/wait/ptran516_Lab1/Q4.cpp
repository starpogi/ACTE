#include <iostream>
using namespace std;

int main()
{
  // Initialize the variables
  char user;
  int offset;
  char newch;
  
  // Prompt user for character and offset
  cout << "Enter character: ";
  cin >> user;

  cout << "Offset (enter 0 to convert case and within the limits of ASCII table/0-127): ";
  cin >> offset;

  // Error checking variable
  int charch = user + offset;

  // Reprompt if user + offset are greater than 128
  while (charch > 127 || charch < 0)
    {
      cout << "Offset (enter 0 to convert case and within the limits of ASCII table/0-127): ";
      cin >> offset;

      // Error checking variable
      charch =(int) (user + offset);  
    }

  // In the case that an ASCII character is entered and the offset is zero, change the character case
  // For lower case
  if (offset == 0 && (int)(user) >= 65 && (int)(user) <= 90)
    user += 32;

  // For uppercase
  else if (offset == 0 && (int)(user) >= 97 && (int)(user) <= 122)
    user -= 32;

  // Add the offset to the character entered by the user and the resulting ASCII equivalent should be displayed
  newch = (char)(user + offset);
    
  cout << "New character: " << newch << endl;
}
