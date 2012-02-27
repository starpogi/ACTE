// Kate Thurmer U24179971
// Lab 1, Question 4.
// This program takes in a character and an offset.
// An offset of 0 changes case for letters, does nothing for other characters.
// A positive offset is added to the character, and the new ASCII value is returned.
// Offset must be small enough to stay in ASCII range (2^7 -1).

#include <iostream>
using namespace std;

int main()
{
  // Ask the user to enter a character and an offset.
  char c;
  cout<<"Enter a character:";
  cin>>c;

  int offset;
  cout<<"Enter an offset (or a 0 to convert case):";
  cin>>offset;

  while (offset<0)  // keep whining until you get a valid offset.
  {
    cout<<"Please enter a valid positive offset (or a 0 to convert case):";
    cin>>offset;
  }

  while ((c+offset)>127)  // get an offset such that c+offset stays in range.
  {
    cout<<"That offset is too large.  Please enter another:";
    cin>>offset;
  }


  if (offset==0)    // case changes:
  {
    if ((c>='A')&&(c<='Z'))  // case change for uppercase input.
      c+=32;
    else if ((c>='a')&&(c<='z'))  // case change for lowercase input.
      c-=32;
  }   // for 
  else
    c+=offset;    // for offsets > 0.

  cout<<"New Character:"<<c<<endl;

  return 0;
}
