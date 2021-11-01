#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int ini, curr = 0, mil = 0, mil1 = 0, copycurr = 0;
double mpg = 0, mpg1 = 0, galgas = 0, galgas1 = 0, copygal = 0;

cout << fixed;

cout << "This program calculates mileage." << endl;
cout << "Type in -1 for the odometer reading to signify the end of the program." << endl;
cout << "Enter gallons at least once." << endl;

cout << "Initial odometer reading: ";
cin >> ini;
cout << endl;

while(ini >= 0)	{
	copycurr = curr;

	cout << "Current odometer reading: ";
	cin >> curr;
	if (curr < 0)
	break;
	else
	cout << "Gallons of gas purchased: ";
	cin >> galgas;

	copygal = galgas;
	galgas1 = copygal + galgas1;

	mil = (curr - ini) - copycurr; //miles and mpg
	mpg = mil / galgas;

	if ( galgas1 == copygal)
	{
	cout << "You drove " << mil << " miles averaging " << setprecision(2) << mpg << " mpg." << endl;
	cout << endl;
	}
	else
	{
	cout << "You drove " << mil << " miles averaging " << setprecision(2) << mpg << " mpg." << endl;
	cout << endl;

	mil1 = curr;
	mpg1 = mil1 / galgas1;
	}
}

if (galgas1 == copygal)
cout << "All together, you drove " << mil << " miles on " << setprecision(2) << galgas << " gallons of gas, averaging " << setprecision(2) << mpg << " mpg." << endl; //getouput
else
cout << "All together, you drove " << mil1 << " miles on " << setprecision(2) << galgas1 << " gallons of gas, averaging " << setprecision(2) << mpg1 << " mpg." << endl;
}