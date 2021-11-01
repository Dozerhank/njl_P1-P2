#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	float x;
	float y;
	int z;
	float total;
	x = 0.00;
	y = 0;
	z = 0;
	total = 0;

	cout << "This program averages numbers." << endl;
	cout << endl;
	cout << "Number: "; cin >> x;
	y += x;
	z += 1;

	while (x != 0) {
		cout << "Number: "; cin >> x;
		if (x != 0) {
            y += x;
			z += 1;
		}
	}

	total = y / z;

	cout << "The average is " << fixed << setprecision(2) << total;
	cin >> x;

}