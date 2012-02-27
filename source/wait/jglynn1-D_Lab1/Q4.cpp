// John Glynn
// U97051125

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {

	// declare
	char in;
	int offset;
	char out;

	// get inputs
	cout << "Enter character: ";
	cin >> in;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	// error check to make sure offset is positive
	while (offset < 0) {
		cout << "Please enter a positive offset: ";
		cin >> offset;
	}
	while (offset > 255 - in) {
		cout << "Please enter an offset less than " << 255 - in << ": ";
		cin >> offset;
	}

	if (offset > 0)
		out = in + offset;

	if (offset == 0) {
		if (in >= 65 && in <= 90)
			out = in + 32;
		if (in >= 97 && in <= 123)
			out = in - 32;
		if ((in < 65) || (in > 90 && in < 97) || (in > 122))
			out = in;
	}
	cout << "New character: " << out << endl;
	return 0;
}