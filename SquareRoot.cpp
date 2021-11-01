#include <iostream>

using namespace std;



double squareRoot (int num)	{
    if (num ==1)	{
        return 1;
    }

    float guess = 0;
    float better = num/2;

    while(guess != better)	{
        guess = better;// sets better to guess
        better = (guess + num/guess)/2;// checks to see if square rooted
    }
    return better;
}

int main()	{
    int input;
 
    cout << "Enter number: "; cin >> input;
    cout << "The square root of " << input << " is " << squareRoot(input);
}

