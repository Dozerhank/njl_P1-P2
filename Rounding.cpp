#include <iostream>
using namespace std;

int main()	{

	float input;
	float x;
	float output;

	cout << "Enter a number: "; cin >> input;

	if (input >= 0) {
		x = input - (int)input;
		if (x >= .5) {
			input = int(input) + 1;
		} else {
			input = int(input);
		}
	} else {
		x = input - (int)input;
		if (x <=-.5) {
			input = int(input) - 1;
		} else {
			input = int(input);
		}
	}

	cout << "The rounded number is " << input;
}