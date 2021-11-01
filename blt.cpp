#include <iostream>
using namespace std;

int main()	{
	int input;
	
	cout << "How many rows? "; cin >> input; cout << endl;
	
	for (int i = 0; i < input; i++)	{
		for (int row = 0; row <= i; row++)	{
			cout << "@";
		}
		cout << endl;
	}
}