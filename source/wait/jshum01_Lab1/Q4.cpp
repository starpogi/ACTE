//Jason Shum U13401786

#include <iostream>
using namespace std;

int main(){ 

  char charvalue;
  int integer;

  //Initial output that error checks if the integer is positive or not
  cout << "Enter character: ";
  cin >> charvalue;
  cout << "Offset (enter 0 to convert case): ";
  cin >> integer; 
  while (integer < 0){
    cout << "Please enter a different integer: ";
    cin >> integer ;
      }

 

  //Initiates the 0 function 
  if(integer == 0){
    charvalue = static_cast<int>(charvalue);
    if ((charvalue >= 65) && (charvalue <= 90)){
      charvalue = charvalue + 32;
    cout << "New charcter: "<< static_cast<char>(charvalue)<< endl;
    }
    else if((charvalue >= 97) && (charvalue <= 122)){
      charvalue = charvalue -32; 
      cout << "New charcter: "<< static_cast<char>(charvalue)<< endl;
    }
    else 
	cout << "New charcter: "<< static_cast<char>(charvalue)<< endl;
    }


  // Adds to the character and error checks to see if added value is valid
  else if( integer !=0){
    if ((static_cast<int>(charvalue) + integer) > 127)
      cout << "Please restart program " << endl; 
    else {
      charvalue = static_cast<int>(charvalue);
      charvalue = charvalue + integer;
      cout << "New charcter: " << static_cast<char>(charvalue)<<endl;
    }
    
  }

  return 0;
}

