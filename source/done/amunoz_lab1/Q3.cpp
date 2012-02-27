/*This program finds the Hamming distance between two numbers in decimal format.
The Hamming distance is the number of positions between two sequences where 
the corresponding symbols are different. */

#include <iostream>
#include <string> 
#include <sstream>
using namespace std; 

int main()
{
	// Prompt the user for two integers between 0 and 999,999
	// I am going to go off of the assumption that all of the input values will be 
	// equal in length, i.e. have leading zeroes if necessary as per the example 
	int inum1, inum2;
	cout << "Enter two integers between 0 and 999999: ";
	cin >> inum1;
	while (inum1 < 0 || inum1 > 999999)
		{
		 cout << "Error! Integers must be between 0 and 999999: ";
		 cin >> inum1; 
		}
	cin >> inum2;
	while (inum2 < 0 || inum2 > 999999)
		{
		 cout << "Error! Integers must be between 0 and 999999: ";
		 cin >> inum2;
		}
	std::string instr1;
	std::stringstream myout1;
        myout1 << inum1;
	instr1 = myout1.str();
	std::string instr2;
	std::stringstream myout2;
	myout2 << inum2;
	instr2 = myout2.str();
	// Obtain sizes of the strings, the differences in lengths, and add leading zeroes to 
	// make the lengths equal.
	int size1, size2, diff, finalsize, counter;   
	size1 = instr1.length();	
 	size2 = instr2.length();
	diff = abs(size1 - size2);
	// This if statement will make sure the strings are the same size (add leading zeroes)
	if (diff != 0)
  		{
		 if (size1 > size2)
			// if inum1 > inum2, append a string of zeroes the the front of inum2
			{
		  	 string zerostr; 
			 zerostr.assign(diff, '0');
			zerostr.append(instr2);
			//inum2 = zerostr + inum2; 
			finalsize = size1;	
			instr2 = zerostr;
			}
		 else if (size2 > size1) 
			{ 
			 string zerostr; 
			 zerostr.assign(diff, '0');
			 zerostr.append(instr1);
			 finalsize = size2;
			 instr1 = zerostr; 
			}
		}

cout << "finalsize" << finalsize << "inum1" << inum1 << "inum2" << inum2;
	// Find how many values are equal in value and position, subtract that number from 
 	// finalsize (the size of the strings) 
	for (int i = 1; i <= finalsize; i++)
		{ 
		 for (int j = 1; j <= finalsize; j++)
			{
			 string val1, val2;
 			 val1 = instr1.at(i);
			 val2 = instr2.at(j);
			 if (val1 == val2) 
				counter = counter + 1;
			}
		}
cout << "counter" << counter << "inum1" << inum1;
	int hamdist = finalsize - counter;
	cout <<  "Hamming distance between " << inum1 << " and " << inum2 << " is " << hamdist << "\n" ; 


}
