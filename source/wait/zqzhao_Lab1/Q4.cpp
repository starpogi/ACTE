#include <iostream>
#include <string>
using namespace std;

int main(){

  bool exit = false;
  do{  // an infinite loop that keeps asking user inputs until "exit" is entered which will terminate the program.
    char ch; 
    bool vld = true;
    string input;
    do{              // ask for user input and check if input is valid.
      cout<<"Enter character: ";
      cin>>input;
      if (input.compare("exit")==0){abort ();} // exits the program on demand.
      if (input.length() != 1) {
	cout<<"Invalid input. Please provide valid input format."<<endl;
	vld = false;
      } else {
	vld = true;
	ch = input[0];
      }
    }while (!vld);
    
    int off;
    
    do{
      cout<<"Offset (enter 0 to convert case): ";
      cin>>off;
      if (off<0) {cout<<"Offset should be non-negative."<<endl; continue;}
      
    }while(off<0);
    
    if (off == 0){ // off = 0
      
      if(ch>64 && ch<91) {
	ch+=32;
      } else if(ch>96 && ch<123) {
	ch-=32;
      }
    } else { // off != 0.
      off += ch;
      ch = off;
    }
    if (off>126){
      cout<<"Result undefined/exceeds ASCII value range!"; 
    } else {
      cout<<"New character:  "<<ch<<endl;
    }
    cout<<"Enter \"exit\" to terminate program."<<endl<<endl;

  }while(true);

  return 0;

}
