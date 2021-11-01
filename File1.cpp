#include <iostream>
#include <cmath>
using namespace std;

int main()	{
	float input;
	float output;

	cout << "Enter a number: "; cin >> input;

	output = round(input);

	cout << "The rounded number is " << output;
}
