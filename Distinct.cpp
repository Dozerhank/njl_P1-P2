#include <iostream>
#include <iomanip>
using namespace std;

int main( )	{	
	int input;
	int array[100] = {0};
	int slot = 0;
	int check = 0;
	
	cout << "Enter integer values into the array, or -1 to stop:" << endl;
	
	while (true)	{
		cin >> input;
		if (input == -1)		{
			break;
		}
		for (int i = 0; i <= slot; i++)	{
			if (array[i] == input)	{
				check = 1;
			}
		}
		if (check == 0)	{
			array[slot] = input;
			slot++;
		}
		check = 0;
	}
	
	cout << endl;
	cout << "Distinct values in the array:" << endl;
	cout << "(";
	for (int i = 0; i < slot; i++)	{
		cout << array[i];
		if (i + 1 < slot)	{
			cout << ",";
		}
	}
	cout << ")";
}