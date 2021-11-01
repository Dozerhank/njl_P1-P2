#include <iostream>
using namespace std;

int main()	{

	float x;
	float y;

	cout << "This program determines the relationship between two input numbers." << endl;
	cout << "Enter the first integer: "; cin >> x;
	cout << "Enter the second integer: "; cin >> y;

	if (x > y) {
		cout << x << " is greater than " << y;
	}

	if (x < y) {
		cout << x << " is less than " << y;
	}

	if (x == y) {
		cout << x << " is equal to " << y;
	}
}