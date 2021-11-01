#include <iostream>
using namespace std;

int main()	{

	int input;
	int s;
	int m;
	int h;

	cout << "This program converts seconds into hours, minutes and seconds." << endl;
	cout << "Enter the number of seconds: "; cin >> input;

	h = (input / 3600);
	input = input - (h * 3600);
	m = (input / 60);
	input = input - (m * 60);
	s = input;

	cout << "This corresponds to " << h << " hours, " << m << " minutes, and " << s << " seconds." << endl;
}