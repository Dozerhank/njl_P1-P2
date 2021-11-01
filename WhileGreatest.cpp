#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	float x;
	float y;
	x = 1;
	y = 0;

	cout << "This program finds the maximum number." << endl;
	cout << endl;

	while (x != 0) {
		cout << "Number: "; cin >> x;
		if (x >= y ) {
			y = x;
		}
	}

	cout << "The largest number is " << y << ".";
}