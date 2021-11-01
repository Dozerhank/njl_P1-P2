#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double input, x, count, past1, past2;
    x = 0;
    count = 0;
    past1 = 0;
	past2 = 0;

    cout << "This program lists the Fibonacci sequence." << endl;
    cout << "Highest Fibonacci number to print? ";
    cin >> input;

	for (int i = 0; input > i; i++) {

        if (count == 0) {
			past1 = 0;
            past2 = 0;
		}
        else if (count == 1) {
            past1 = 1;
        }

        past2 = past1;
        past1 = x;
		x = past2 + past1;

		if (count <= input) {
		cout << "F(" << count << ") = " << x << endl;
        }
		if (count > 3 && count >= input) {
            break;
        }
		if (count <= 3 || count >= input) {

		}
        count++;
	}
}
