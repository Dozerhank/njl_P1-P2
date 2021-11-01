#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int values;
	float list[100];
	float average = 0;
	int above = 0;
	
	cout << "How many values are in the list? "; cin >> values;
	
	for (int i = 0; i < values; i++)	{
		cin >> list[i];
		average += list[i];
	}
	
	average = average / values;
	
	for (int i = 0; i < values; i++)	{
		if (list[i] <= average)	{
			values -= 1;
		}
	}
	
	cout << fixed << setprecision(2);
	cout << values << " values from the list are above the mean of " << average;
}
