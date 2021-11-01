#include <iostream>
#include <iomanip>
using namespace std;

int main()	{
	float input[6];
	float highest;
	float lowest;
	float average = 0;
	int h;
	int l;
	
	for (int i = 0; i < 7; i++)	{
		cin >> input[i];
	}
	
	highest = input[0];
	lowest = input[0];
	
	for (int i = 0; i < 7; i++)	{
		if (input[i] > highest)	{
			highest = input[i];
			h = i;
		}
		if (input[i] < lowest)	{
			lowest = input[i];
			l = i;
		}
	}
	
	input[h] = 0;
	input[l] = 0;
	
	for (int i = 0; i < 7; i++)	{
		average += input[i];
	}	
	
	average = average / 5;
	
	cout << "Average score: " << average;
}