#include <iostream>
#include <iomanip>
using namespace std;

int main()	{
	int input;
	int magic;
	int output;
	
	cout << "This program reverses the digits of an integer." << endl;
	cout << endl;
	
	cout << "Enter an integer: "; cin >> input;
	
	cout << "The reversed number is ";
	
	while (input >= 10)	{
		magic = input % 10;
		output = output * 10 + magic;
		input = (int)input / 10;	
	}
	
	output = output * 10 + input;
	
	cout << output << ".";
}