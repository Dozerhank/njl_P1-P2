#include <iostream>
#include <fstream>
#include <sstream>
#include "p2priorityqueue.h"
#include "p2map.h"
using namespace std;

int main()	{
	Map<int, int> numbers;
	Map<string, int> votes;
	initialize(numbers);
	initialize(votes);
	
	PriorityQueue<string, int> results;
	initialize(results);
	
	int totalvotes = 0;
	int totalcontests = 0;
	
	string names;
	
	ifstream fin;
	ofstream fout;
	
	string file1, file2;
	cout << "Enter filename containing list of contestants: "; cin >> file1;
	cout << "Enter filename containing list of votes: "; cin >> file2;
	file1 += ".txt";
	file2 += ".txt";
	
	fin.open(file1.c_str()); 
	if (fin.is_open())	{
		string templine;
		string temp;
		getline(fin, temp);
		stringstream ss;
		ss << temp;
		ss >> totalcontests;
		while (getline(fin, templine))	{
			assign(votes, templine, 0);
			cout << lookup(votes, templine) << endl;
		}		
	}	else	{
		cout << "File could not be opened" << endl;
	}
	fin.close();
	
	string contestnames[100];
	
	fin.open(file2.c_str());
	if (fin.is_open())	{
		string templine;
		string temp;
		getline(fin, temp);
		stringstream ss;
		ss << temp;
		ss >> totalvotes;
		for (int i = 0; getline(fin, templine); i++)	{
			stringstream ss2;
			ss << templine;
			string cont;
			contestnames[i] = cont;
			int num;
			ss >> cont >> num;
			if (!has_key(numbers, num))	{
				assign(numbers, num, 1);
			}	else	{
				assign(numbers, num, lookup(numbers, num) + 1);
				if (lookup(numbers, num) < 4)	{
					if (!has_key(votes, cont))	{
						assign(votes, cont, 1);
						cout << lookup(votes, cont) << endl;
					}	else	{
						assign(votes, cont, lookup(numbers, num) + 1);
						cout << lookup(votes, cont) << endl;
					}
				}
			}
			
		}
	}	else	{
		cout << "Unable to open file" << endl;
	}
	fin.close();
	
	cout << "Final rankings" << endl;
	
	for (int i = 0; i < totalcontests; i++)	{
		int num;
		num = lookup(votes, contestnames[i]);
		push(results, contestnames[i], num);
	}
	
	while (!isEmpty(results))	{
		string placements;
		placements = pop(results);
		for (int i = 0; i < totalcontests; i++)	{
			if (placements == contestnames[i])	{
				int round;
				float temp;
				temp = lookup(votes, contestnames[i]);
				temp = (temp / totalvotes) * 100;
				round = temp * 100;
				temp = round / 100;
				cout << temp << "% " << contestnames[i] << endl;
			}
		}
	}
}
