#include <iostream>
using namespace std;

int main()
{
	int input;
	bool prime = true;

	cout << "Number: ";
	cin >> input;


	cout << "( ";
	for( int i = 2; input > 1; i++ )	{
	 	while( input % i == 0)	{
			if( prime )	{
				prime = false; 
				cout << i;	
			}	else	{
				cout << " * "  << i;
			}
			input /= i;			
		}
	}
	cout << " )";
}