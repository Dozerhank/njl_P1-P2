#include <iostream>
#include <iomanip>
using namespace std;

int main()	{

	float x;

	cout << "Enter number: "; cin >> x;
	cout << endl;

	x = x - int(x);

	cout << "After the decimal: " << x;
}