#include <iostream>
using namespace std;

int main()	{
	string input1, input1S;
	string input2, input2S;
	int equal = 1;
	
	cout << "Enter two strings." << endl;
	cout << "String 1: "; cin >> input1;
	cout << "String 2: "; cin >> input2;
	cout << endl;
	
	input1S = input1;
	input2S = input2;
	
	for (int i = 0; input1S[i] != 0; i++)	{
		if (input1S[i] >= 97 && input1S[i] <= 122)	{
			input1S[i] -= 32;
		}
	}
	for (int i = 0; input2S[i] != 0; i++)	{
		if (input2S[i] >= 97 && input2S[i] <= 122)	{
			input2S[i] -= 32;
		}
	}
	
	for (int i = 0; input2S[i] != 0; i++)	{
		if (input1S[i] != input2S[i])	{
			equal = 0;
			break;
		}
	}
	
	if (equal == 1)	{
		cout << input1 << " and " << input2 << " are equal.";	
	}	else	{
		cout << input1 << " and " << input2 << " are not equal.";	
	}
}