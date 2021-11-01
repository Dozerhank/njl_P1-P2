#include <iostream>
using namespace std;

int main()	{
	string input;
	string output;
	int digits = 0;
	int count = 0;
	
	cout << "Original: "; cin >> input;
	
	for (int i = 0; input[i] != 0; i++)	{
		digits++;
	}
	digits--;

	count = digits;
	
	cout << "Reversed: ";
	
	for (int i = 0; i != count + 1; i++)	{
		output[i] = input[digits];
		digits--;
		cout << output[i];
	}

}