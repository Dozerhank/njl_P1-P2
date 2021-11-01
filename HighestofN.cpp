#include <iostream>
#include <iomanip>

using namespace std;

int main()  {
	float Number; 	Number = 0;
	float Highest; 	Highest = -99999;
	int Amount; 	Amount = 0;
	int Current; 	Current = 0;

	cout << "This program finds the maximum number." << endl;
	cout << endl;

	cout << "How many numbers? "; cin >> Amount;

	while (Amount > Current) {
		cout << "Number: "; cin >> Number;
		if (Number > Highest) {
			Highest = Number;
		}
		Current += 1;
	}

	cout << "The largest number is " << Highest;
}
