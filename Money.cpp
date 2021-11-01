#include <iostream>
#include <iomanip>
using namespace std;

int main()	{

	int Quarters;
	int Dimes;
	int Nickels;
	int Pennies;
	float Total;

	cout << "Quarters: "; cin >> Quarters;
	cout << "Dimes: "; cin >> Dimes;
	cout << "Nickels: "; cin >> Nickels;
	cout << "Pennies: "; cin >> Pennies;
	cout << endl;

	Total = (Quarters*.25) + (Dimes*.10) + (Nickels*.05) + (Pennies*.01);

	cout << "The total is $" << fixed << setprecision(2) << Total << endl;
}