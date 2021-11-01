#include <iostream>
#include <iomanip>
using namespace std;

int main()	{
	int input;
	int spacing = 0;
	
	cout << "How many rows? "; cin >> input; cout << endl;
	
	for (int i = input; i >= 0; i--)	{
		spacing += 1;
		cout << setw(spacing);
		for (int row = 0; row < i; row++)	{
			cout << "@";
		}
		cout << endl;
	}
}