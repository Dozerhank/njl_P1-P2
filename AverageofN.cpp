#include <iostream>
#include <iomanip>

using namespace std;

int main()  {
	float Number; 	Number = 0;
	float Average; 	Average = 0;
	int Amount; 	Amount = 0;
	int Current; 	Current = 0;

	cout << "This program averages numbers." << endl;
	cout << endl;

	cout << "How many numbers? "; cin >> Amount;

	while (Amount > Current) {
		cout << "Number: "; cin >> Number;
		Average += Number;
		Current += 1;
	}


	Average = Average / Amount;

	cout << "The average is " << Average << ".";

	cin >> Number;
}
