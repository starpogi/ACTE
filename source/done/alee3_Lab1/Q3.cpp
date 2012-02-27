#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cout << "Enter two integers between 0 and 999999: " << endl;
	
	int c,d;
	cin >> c >> d;
	
	while (c < 0 || c > 999999 || d < 0 || d > 999999)
	{
		cout << "Enter integers between 0 and 999999: " << endl;
		cin >> c >> d;
	}
	
	std::string a;
	std::stringstream outa;
	outa << c;
	a = outa.str();
	
	std::string b;
	std::stringstream outb;
	outb << d;
	b = outb.str();
	
	cout << a << "hellow" << b << endl;
	
	if (a.size() > b.size()) {
		int diff = a.size() - b.size();
		b.insert(0,diff,'0');
	}
	else if (b.size() > a.size()) {
		int diff = b.size() - a.size();
		a.insert(0,diff,'0');
	}

	int ham = 0; //Hamming Distance counter

	for (int i = 0; i < a.size(); i++) {
		if (a.at(i) != b.at(i))
			ham = ham + 1;
	}

	cout << "Hamming distance between " << a << " and " << b << " is " << ham << "." << endl;

	return 0;
}
