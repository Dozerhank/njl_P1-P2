#include <iostream>
using namespace std;

int main()
{
    //Values stored
	float Length;
	float Width;
	float Depth;
	float Gallons;
	float Entry;
	float Sum;

	//Program user input prompts
	cout << "Enter pool dimensions" << endl;

	cout << "Length: "; cin >> Length;
	cout << "Width: "; cin >> Width;
	cout << "Depth: "; cin >> Depth;
	cout << endl;
	cout << "Water entry rate: "; cin >> Entry;

	Gallons = (Length * Width * Depth) * 7.48;

	cout << endl;

	Sum = Gallons / Entry;


	cout << "The pool will fill completely in " << Sum << " minutes";
}