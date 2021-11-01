#include <iostream>
#include <iomanip>
using namespace std;

int main()	{
	int rows;
	int columns;
	int expo = 0;
	
	cout << "The program prints a table of exponential powers." << endl;
	cout << "Enter the number of rows to print: "; cin >> rows;
	cout << "Enter the number of powers to print: "; cin >> columns;
	cout << endl;
	
	for (int a = 1; a <= rows; a++)	{
		expo = a;
		cout << setw(2) << a;
		for (int b = 2; b <= columns; b++)	{
			expo *= a;
			cout << setw(8) << expo;
		}
		cout << endl;
	}
}