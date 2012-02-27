//Jason Shum U13401786

#include <iostream>
using namespace std;

int main(){ 

  // Sets variable: Two variables for the original values, 
  // two value holders for each original value and one counter  
  int integer1;
  int integer2;
  int hold1;
  int holdone = 0;
  int hold2;
  int holdtwo = 0;
  int count1 = 0;
  

  cout<< "Enter two integers between 0 and 999999: ";
  cin >> integer1 >> integer2; 

  //Error checking between 0 and 999999
  while ( integer1 <0 || integer1 > 999999 ){
    cout<< "Please enter the first integer again (between 0 and 999999):";
    cin >> integer1;
  }
  while (integer2 <0 || integer2 > 999999) {
    cout<< "Please enter a second integer again (between 0 and 999999):";
    cin >> integer2;

  }



  // Checks to see if two values are equal
  if( integer1 == integer2){
    cout<< "Hamming distance between "<< integer1 << " and " << integer2 <<
      " is " <<  count1 << "."<<  endl;
  }

  //Uses mod function for each place in the two numbers (ones ,tens ,hundreds,etc)
  // and compares the two numbers to see if they are equal. Uses the holders
  //to store sum and compare
  if(integer1 != integer2) {
    hold1 = integer1 % 10; 
    hold2 = integer2 % 10;
    if((hold1 != hold2)){
	count1++ ;
   }
 
      holdone = (integer1 % 100) - hold1;
      holdtwo = (integer2 % 100) - hold2;
      if(holdone != holdtwo){ 
	count1++ ;

	}

	  
 
      holdone = holdone + hold1;
      holdtwo = holdtwo + hold2;
      hold1 = (integer1 % 1000) - holdone;
      hold2 = (integer2 % 1000) - holdtwo;
       if(hold1 != hold2){ 
	 count1++ ;

	}
    

       holdone = holdone + hold1;
       holdtwo = holdtwo + hold2;
       hold1 = (integer1 % 10000) - holdone;
       hold2 = (integer2 % 10000) - holdtwo;
      if(hold1 != hold2){ 
	count1++;
	}



       holdone = holdone + hold1;
       holdtwo = holdtwo + hold2;
       hold1 = (integer1 % 100000) - holdone;
       hold2 = (integer2 % 100000) - holdtwo;
      if(hold1 != hold2){ 
	count1++;

	}


       holdone = holdone + hold1;
       holdtwo = holdtwo + hold2;
       hold1 = (integer1 % 1000000) - holdone;
       hold2 = (integer2 % 1000000) - holdtwo;
      if(hold1 != hold2){ 
	count1++;

      }
      	
      // Returns final statement
      cout << "Hamming distance between "<< integer1 << " and " << integer2 << " is "<< (count1)<< "." << endl;
  }
  
  
  return 0; 
}
