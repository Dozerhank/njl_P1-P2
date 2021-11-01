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

    while (x <= input) {

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


        if (x <= input) {
        cout << "F(" << setw(2) << count << ") = " << setw(4) << x << endl;
        }
        if (count > 3 && x >= input) {
            break;
        }
        if (count <= 3 || x >= input) {

        }
        count++;
    }

}
