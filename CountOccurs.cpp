#include <iostream>
using namespace std;

int main()	{
	string input;
	string search;
	int total = 0;
	
	cout << "Enter a string: "; cin >> input;
	cout << "Enter a character: "; cin >> search;
	cout << endl;
	
	if (search[0] >= 97 && search[0] <= 122)	{
		search[0] -= 32;
	}
	
	for (int i = 0; input[i] != 0; i++)	{
		if (input[i] == search[0] || input[i] - 32 == search[0])	{
			total++;
		}
	}
	
	cout << "\"" << search[0] << "\" appears " << total << " time(s)";
}