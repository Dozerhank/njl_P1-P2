#include <iostream>
#include <sstream>
#include "p2map.h"
#include "p2priorityqueue.h"
using namespace std;

int main()	{
	stringstream ss; string input; int numbers[10]; int total = 0;
	cout << "Prime factors: "; getline(cin, input); ss << input;
	
	PriorityQueue<int, int> results; PriorityQueue<int, int> multiplyers; Map<int, int> checker;
	initialize(results); initialize(multiplyers); initialize(checker);
	push(results, 1, -1); assign(checker, 1, 1);
	
	cout << "---------------" << endl;
	for (int i = 0; ss >> numbers[i]; i++)	{
		if (!has_key(checker, numbers[i]))	{
			push(results, numbers[i], numbers[i] * -1);
			push(multiplyers, numbers[i], numbers[i] * -1);
			assign(checker, numbers[i], numbers[i]);	
			total++;
		}	else	{
			i--;
		}
	}	
	
	int k;
	cout << "K: "; cin >> k; cout << endl;
	
	for (int i = 0; i < k; i++)	{
		cout << "----------" << endl;
		int temp = pop(multiplyers);
		for (int j = 0; j < total; j++)	{
			int result = numbers[j] * temp;
			if (!has_key(checker, result))	{
				push(results, result, result * -1);
				push(multiplyers, result, result * -1);
				assign(checker, result, result);
			}
		}
	}
	
	int final;
	for (int i = 0; i < k; i++)	{
		final = pop(results);
	}
	destroy(results); destroy(multiplyers); destroy(checker);
	
	cout << "Result: " << final;
}
