#include <iostream>
using namespace std;

int main()	{
	string input;
	string dup;
	int output;
	int test;
	int amount = 0;
	int previous = -1;
	
	cout << "Enter a string: "; cin >> input;
	cout << endl;
	dup = input;
	
	for (int i = 0; input[i] != 0; i++)	{
		if (input[i] >= 97 && input[i] <= 122)	{
			input[i] -= 32;
		}
	}
	
	for (int i = 0; input[i] != 0; i++)	{
		test = input[i];
		for (int j = 0; input[j] != 0; j++)	{
			if (test == input[j])	{
				amount++;
			}
		}
		if (amount > previous && amount > 1)	{
			output = i; 
			previous = amount;
		}
		amount = 0;
	}
	
	cout << "The most frequent character in " << dup << " is " << input[output] << ".";
}