#include <iostream>
#include <fstream>
#include "p2queue.h"
#include "p2map.h"
using namespace std;

int main()	{
	ifstream fileInput;
	ofstream fileOutput;
	
	Queue<string> members;
	Map<string, int> totalMembers;
	int amountOld = 0; int amountNew = 0;
	
	initialize(members); initialize(totalMembers);
	fileInput.open("8A_past.txt");
	if (fileInput.is_open())	{
		cout << "File successfully opened." << endl;
		string name;
		int total;
		fileInput >> name; fileInput >> name;
		fileInput >> total;
		for (int i = 0; i < total; i++)	{
			getline(fileInput, name);
			push(members, name);
		}
	}	else	{
		cout << "Unable to open file." << endl;
	}
	fileInput.close();
	
	fileInput.open("8A_new.txt");
	if (fileInput.is_open())	{
		cout << "File successfully opened." << endl;
	}	else	{
		cout << "Unable to open file." << endl;
	}
	fileInput.close();
	
	while(!isEmpty(members))	{
		
	}
}
