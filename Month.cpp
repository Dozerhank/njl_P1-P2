#include <iostream>

using namespace std;

int main () {
	int d, m, y;
	int dd, mm, yy;

	cout << "Enter date #1 (month day year): "; cin >> m >> d >> y;
	cout << "Enter date #2 (month day year): "; cin >> mm >> dd >> yy;

	if (y < yy) {
		cout << m << "/" << d << "/" << y << " is earlier.";
	}
	if (yy < y) {
		cout << mm << "/" << dd << "/" << yy << " is earlier.";
	}
	if (y == yy) {
		if (m < mm) {
			cout << m << "/" << d << "/" << y << " is earlier.";
		}
		if (m > mm) {
			cout << mm << "/" << dd << "/" << yy << " is earlier.";
		}
		if (m == mm) {
			if (d < dd) {
				cout << m << "/" << d << "/" << y << " is earlier.";
			}
			if (dd < d) {
				cout << mm << "/" << dd << "/" << yy << " is earlier.";
			}
		}
	}
}