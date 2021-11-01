#include <iostream>

using namespace std;

int main () {
	int input;
	int x;
	int y;
	y = 0;

	cout << "This program sums the digits of an integer." << endl;
	cout << endl;

	cout << "Enter an integer: "; cin >> input;
	x = input;

	if (x < 10) {
		y = x;
	}

	while (x >= 10) {
		y = y + ( x % 10 );
		x = x / 10;
		if (x < 10) {
			y += x;
			x = 0;
		}
	}

	cout << "The sum of the digits in " << input << " is " << y << ".";
}