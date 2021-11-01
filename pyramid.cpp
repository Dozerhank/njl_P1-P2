#include <iostream>
#include <iomanip>
using namespace std;

int main()	{
	int input;
	
	cout << "How many rows? "; cin >> input;
	cout << endl;
	
	for (int a = 0; a < input; a++)	{
		cout << setw(input-a);
		for (int b = -1; b <= a *2 - 1; b++)	{
			cout << "@";
		}
		cout << endl;
	}
}