#include <iostream>
using namespace std;

int main()	{
	int input;
	int answer;
	
	cout << "The program prints a table of squares." << endl;
	cout << "Enter the number of squares to print: "; cin >> input;
	cout << endl;
	
	for (int i = 1; input >= i; i++)	{
		answer = i * i;
		cout << i << " squared is " << answer << endl;
	}
}