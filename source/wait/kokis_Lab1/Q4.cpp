#include <iostream>
using namespace std;

int main()
{ int off,ascii,num;
  char ch;
    cout << "Enter character: ";
	cin >> ch; 
	cout << "Offset (enter 0 to convert case): ";
    cin >> off; 
	if (off<0){
		cout << "Error: offset must be nonegative integer:";
		cin >> off;
	}
	else if (off==0){ //choosing 0 means converting the cases. 
		ascii=int(ch);
		if (ascii >= 65){
			if (ascii <= 90){
				num=ascii+32;
				char ch=num;
				cout << "New character: " << ch << endl; //when ascii is between 65 to 90 convert the case to lowercase.
			}
			else if (ascii > 90){
				if (ascii < 97) {
					char ch=ascii;  
				cout << "New character: " << ch << endl; //when ascii is between 90 to 97, they stay the same 
				}
				else if (ascii >= 97){
					if (ascii > 122) {
						char ch=ascii;  
				        cout << "New character: " << ch << endl; //when ascii is greater than 122, they stay the same 
					}
					else {
						num=ascii-32;
				        char ch=num;
				        cout << "New character: " << ch << endl; //when ascii is between 97 and 122, they are uppercase so converts to lowercase
					}
					}
			}
			
		}
		
		else {        
			char ch=ascii;  
				cout << "New character: " << ch << endl;//ascii values lower than 65 stays the same 
		}
	}
	
	else { 
	    ascii=int(ch);
		num=ascii+off;
		char ch=num;
		cout << "New character: " << ch << endl; //when an integer is chosen as the offset, then it is added to the character to produce a new ascii value
	
	
	}

	system("pause"); //required for visual studios
return 0;
}


