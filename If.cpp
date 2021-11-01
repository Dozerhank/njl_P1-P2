#include <iostream>
using namespace std;

int main()	{

	float input;
	float output;

	cout << "Enter integer: "; cin >> input;
	cout << endl;
	if ((input < 0)) {
		output = input * -1;
	}  else {
		output = input;
    }
	cout << "|" << input << "| = " << output;
}