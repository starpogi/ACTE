#include <iostream>

using namespace std;

int main()
{
	cout << "Enter character: ";
	
	char c;
	cin >> c;
	
	int code = c;
	
	cout << "Offset (enter 0 to convert case): ";
	
	int off;
	cin >> off;
	
	while (off < 0) {
		cout << "Enter a nonnegative integer: ";
		cin >> off;
	}
	
	if (off == 0) {
		if (isalpha(c)) {
			if (code >= 'a')
				off = 'A' - 'a';
			else
				off = 'a' - 'A';
		}
	}
	
	code = code + off;
	
	if (code > 127) {
		cout << "Error: ASCII code is greater than 127" << endl;
		return 0;
	}
	
	c = code;
	
	cout << "New character: " << c << endl;
	
	return 0;
}
