#include <iostream>
#include <iomanip>
using namespace std;

int main()	{
	int values;
	int input;
	int graph[40];
	
	cout << "Number of values to graph: "; cin >> values;
	
	for (int i = 0; i < values; i++)	{
		cin >> graph[i];	
	}
	
	cout << endl;
	
	for (int i = 0; i < values; i++)	{
		cout << setw(2) << graph[i] << " | ";
		for (int j = 0; j < graph[i]; j++)	{
			cout << "#";
		}
		cout << endl;	
	}
}
