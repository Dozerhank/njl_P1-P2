#include <iostream>
using namespace std;

int main()
{
    //Values stored
	float base;
	float height;
	float output;

	//Program user input prompts
	cout << "This program computes the area of a triangle." << endl;
	cout << endl;


	cout << "Enter the base of the triangle: "; cin >> base;
	cout << "Enter the height of the triangle: "; cin >> height;

	cout << endl;


	//Output
	output = (base * height) / 2;

	cout << "The area is " << output;
}