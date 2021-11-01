#include <iostream>
#include <p2set.h>
#include <p2queue.h>
#include <fstream>
#include <sstream>

using namespace std;

bool sameTeam()	{
	
}

int main()	{
	ifstream fin;
	ofstream fout;
	int totalTeams;
	
	fin.open("teams.txt");
	if (fin.is_open())	{
		string team;
		fin >> totalTeams;
		Set<string> teams[totalTeams];
		for (int i = 0; i < totalTeams; i++)	{
			initialize(teams);
		}
		getline(fin, team);
		for (int i = 0; getline(fin, team); i++)	{
			stringstream ss(team);
			string names;
			while (ss >> names)	{
				insert(teams[i], names);
			}
		}
		cout << "File opened successfully." << endl;
	}	else	{
		cout << "Unable to open file." << endl;
	}
	fin.close();
	
	cout << "Enter names in order of arrival: " << endl;
	string input;
	Queue<string> inputList;
	initialize(inputList);
	while (input != "END")	{
		cin >> input;
		push(inputList, input);
	}
}
