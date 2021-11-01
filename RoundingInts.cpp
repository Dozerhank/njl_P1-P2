#include <iostream>
using namespace std;

int round(int number, int unit)	{
	number -= number % unit;
	return number;
}

int main()	{
	int input;
	int ten, hundred, thousand;
	
	cout << "Enter an integer: "; cin >> input;
	cout << endl;
	
	ten = round(input, 10);
	hundred = round(input, 100);
	thousand = round(input, 1000);
	
	cout << "Round to ten: " << ten << endl;
	cout << "Round to hundred: " << hundred << endl;
	cout << "Round to thousand: " << thousand << endl;
}