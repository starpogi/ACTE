#include <iostream>
using namespace std;

int main(){
	char letter;
	int offset;
	cout << "Enter character: ";
	cin >> letter;

	//error checking for the offset the users put into
	do{
		cout << "Offset (enter 0 to convert case): ";
		cin >> offset;
	}while(offset < 0);

	char result;

	//check whether the offset is zero or not
	//if the offset is zero, we should change the result
	if(offset != 0){
		result = letter + offset;
		if(result > 127 || result < 0){
			cout << "The result is out of range.";
		}
		cout << "New character: " << result;
	}else{
		if(letter >= 'A' && letter <= 'Z'){
			result = letter + 32;
			if(result > 127 || result < 0){
			cout << "The result is out of range.";
			}
			cout << "New character: " << result;
		}else if(letter >= 'a' && letter <= 'z'){
			result = letter - 32;
			if(result > 127 || result < 0){
			cout << "The result is out of range.";
			}
			cout << "New character: " << result;
		}else{
			result = letter;
			if(result > 127 || result < 0){
			cout << "The result is out of range.";
			}
			cout << "New character: " << result;
		}
	}

	return 0;
}