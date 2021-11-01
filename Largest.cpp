#include <iostream>
using namespace std;

int main()	{

	float x;
	float y;
	float z;

	cout << "This program identifies the largest of three numbers." << endl;
	cout << endl;
	cout << "Enter integer: "; cin >> x;
	cout << "Enter integer: "; cin >> y;
	cout << "Enter integer: "; cin >> z;

	if (x >= y && x >= z) {
		cout << "The largest number is " << x << ".";
	}
	if (y >= x && y >= z) {
		cout << "The largest number is " << y << ".";
	}
	if (z >= y && z >= x) {
		cout << "The largest number is " << z << ".";
	}

}