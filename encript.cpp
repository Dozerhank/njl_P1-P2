#include <iostream>
using namespace std;

int main()	{
	char input1;
	int input2;
	char output;
	
	cout << "This program encrypts a single letter." << endl;
	cout << endl;
	
	cout << "Letter: "; cin >> input1;
	cout << "Key: "; cin >> input2;	
	cout << endl;

	if (input1 >= 97 && input1 <= 122)	{
		input1 -= 32;
	}

	if (input2 >= 0)	{
		while (input2 > 0)	{
			input1 += 1;
			if (input1 == 91)	{
				input1 = 65;
			}
			input2 -= 1;
		}
	}	else	{
		while (input2 < 0)	{
			input1 -= 1;
			if (input1 == 64)	{
				input1 = 90;
			}
			input2 += 1;
		}
	}
	
	cout << "Result: " << input1;
}