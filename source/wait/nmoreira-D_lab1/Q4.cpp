#include <iostream>
using namespace std;

int main(){

  char letter;//letter entered by user
  char newletter;//letter after coversion
  int numlet;//holds the acsii value of letter 
  int num;// the offser


  cout<<"Enter Character: ";
  cin>>letter;

  numlet=static_cast<int>(letter);//casting to ascii value

  cout<<"Offset(enter 0 to convert case): ";
  cin>>num;

  //checks that user did not enter negative offset value
  if (num < 0){
    cout<<"Invalid Entry."<<endl;
    return 0;
  }
  //checks to see if the character entered is a letter. If it is not
  //it will check to see if the offset is zero. If it is non zero,
  //the program will say it is invalid, or do change nothing if it is zero.

  if(numlet< 65 || numlet > 90 && numlet < 97 || numlet > 122){
    if (num!= 0){
      cout<<"Invalid Entry "<<endl;
      return 0;
    }
  } //for CAPTIAL letters, checks that offset does not exceed range. 
  else if(numlet<=90){
    if (num>0 && num < ( 26-(numlet-65))){
      numlet=numlet+num;
      letter=static_cast<char>(numlet);
    }   //converts to lower case
    else if(num==0){
      numlet=numlet+32;
      letter=static_cast<char>(numlet);
    } //entry is invalid if num exceeds rangle of captial letters.
    else{
      cout<<"Entry Invalid. "<<endl;
      return 0;
    }
  }    //For lower case letters, checkss that offset is within range.
  else{ 
    if (num>0 && num < (26-(numlet-97))){
      numlet=numlet+num;
      letter=static_cast<char>(numlet);
    }   //converts to captial
    else if(num==0){
      numlet=numlet-32;
      letter=static_cast<char>(numlet);
    } //invalid entry if offset is not in range
    else{
      cout<<"Entry Invalid. "<<endl;
      return 0;
    }

  }
    cout<<"New Character: "<< letter<< endl;
  }
