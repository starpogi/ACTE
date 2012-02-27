#include <iostream>
using namespace std;
int main ()
{
	
	char choice;
	int yourset;
	int wer= 'a' - 'A';
	
	cout << "Enter character: ";
	cin >> choice ;
	
	cout << "Offset (enter 0 to convert case): ";
	cin >> yourset;
	int choice1 = static_cast<int> (choice);
	
	while (choice1 + yourset > 127 ) {
		cout << "Please check your inputs, the output excedees the bit limit! Try again: ";
		cout << "Enter character: ";
		cin >> choice ;
		choice1 = static_cast<int> (choice);
		cout << "Offset (enter 0 to convert case): ";
		cin >> yourset;
	}
	
	if (yourset != 0) {
		choice1= choice1 + yourset;
	}
	
	if (yourset = 0) {
		if (choice1 >= 97 & choice1 <= 122) {
			choice1 -= wer ;
		}
		else if (choice1 >= 65 & choice1 <= 90) {
			choice1 += wer;
			}
		else if (choice1 >= 48 & choice1 <= 57) {
			choice1 = choice1;
		}
	}
	
	
		
	cout << "New character: " << static_cast<char> (choice1) << ;
	return 0;
	}
