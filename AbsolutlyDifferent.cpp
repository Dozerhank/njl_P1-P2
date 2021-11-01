#include <iostream>
#include <sstream>
#include "p2priorityqueue.h"
using namespace std;

int main()	{
	PriorityQueue<int, int> result;
	string input;
	cout << "Enter list: "; getline(cin, input);
	stringstream ss(input);
	int sequence[50];
	int length;
	for (int i = 0; ss >> sequence[i]; i++)	{
		length = i;
	}
	
	initialize(result);
	for (int i = 0; i < length; i++)	{
		int answer = sequence[i] - sequence[i+1];
		if (answer > 0)	{
			answer *= -1;
		}
		push(result, answer, answer);
	}
	
	bool output = true;
	int missing, check, temp;
	if (!isEmpty(result))	{
		check = pop(result);
		if (check != -1)	{
			missing = 1;
			output = false;
		}
		cout << "Result: " << check * -1 << endl;
	}
	
	while (!isEmpty(result) and output == true)	{
		if (!isEmpty(result))	{
			temp = pop(result);
			cout << "Result: " << temp * -1 << endl;
		}	else	{
			break;
		}
		if (check - 1 > temp) 	{
			missing = (check - 1) * -1;
			output = false;
			break;
		}	else if (check == temp)	{
			if (isEmpty(result))	{
				missing = (check - 1) * -1;
				output = false;
				break;
			}
		}
		check = temp;
	}
	
	if (output == true)	{
		cout << "Good sequence.";
	}	else	{
		cout << "Bad sequence: missing " << missing << ".";
	}
}
