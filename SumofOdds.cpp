#include <iostream>

using namespace std;

int main () {
	int x;
	int y;
	x = 0;
	y = 0;

	cout << "Enter a number: "; cin >> x;
	if (x % 2 != 0 || x == 1 || x == -1) {
		y += x;
	}

	//While loop until -1 is entered
	while (x != -1) {
		cout << "Enter a number: "; cin >> x;
		if (x % 2 != 0 && x != -1) {
			y += x;
		}
	}
	cout << endl;
	cout << "The sum of the odd numbers is " << y << ".";
}