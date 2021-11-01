#include <iostream>

using namespace std;

int main () {
	int month;
	int year;
	int days;
    cout << "Month: ";
    cin >> month;

    cout << "Year: ";
    cin >> year;
    cout << endl;

    if (month == 2){
if (year%4 == 0) {

        if (year%100 == 0) {

            if (year%400 == 0) {
                days = 29;
            }
            else {
                days = 28;
            }

        }
        else {
            days = 29;
		}


}
else {
    days = 28;
}

    }



    if (month == 4) {
        days = 30;
    }
        else if (month == 6) {
        days = 30;
    }
    else if (month == 9) {
        days = 30;
    }
    else if (month == 11) {
        days = 30;
    }
    else if (month != 2) {
        days = 31;
    }


    cout << month << "/" << year << " has " << days << " days.";





}
