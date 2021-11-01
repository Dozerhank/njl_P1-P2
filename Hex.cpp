#include <iostream>
using namespace std;

int main()	{
	char input1; 
	char input2; 
	int answer = 0;
	
	cout << "Add two hexadecimal digits and then" << endl;
	cout << "show the result as a decimal value." << endl;
	cout << endl;
	
	cout << "Hexadecimal: "; cin >> input1;
	cout << "Hexadecimal: "; cin >> input2;
	cout << endl;
	
	if (input1 < 58)	{
		answer += (input1 - 48);
	}	else	{
		answer += (input1 - 87);
	}
	if (input2 < 58)	{
		answer += (input2 - 48);
	}	else	{
		answer += (input2 - 87);
	}
	
	cout << input1 << " + " << input2 << " = " << answer;
}