#include <iostream>

using namespace std;

int main () {
	int time;
	int cost;
	float x;

	cost = 0;

	cout << "Enter parking duration (in minutes): "; cin >> time;
	cout << endl;

	//Less than 1 hour - working
	if (time <= 30) {
		cost = 0;
	}
	//1 hour - working
	if (time > 30 && time <= 60) {
		cost = 2;
	}
	//2 to 6 hours
	if (time > 60 && time <= 420 ) {
		x = time % 30;
		if (x > 0) {
		cost += 1;
		}
		cost = cost + (time / 30);
	}
	//7 to 24 hours
	if (time > 420 && time <= 1440) {
		time -= 420;
		cost = 14;
		x = time % 60;
		if (x > 0) {
			cost += 1;
		}
		cost = cost + (time / 60);
	}
	//Price does not exceed $21
	if (cost > 21) {
		cost = 21;
	}

	cout << "Parking cost = $" << cost;
	cin >> x;
}