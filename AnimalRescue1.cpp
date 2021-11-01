#include <iostream>
#include <fstream>
#include "p2queue.h"
using namespace std;

int main()	{
	ifstream fileInput;
	ofstream fileOutput;
	
	Queue<string> dog;
	Queue<string> cat;
	Queue<string> result;
	
	initialize(dog); initialize(cat); initialize(result);
	fileInput.open("actions.txt");
	if (fileInput.is_open())	{
		string action;
		for (int i = 0; fileInput >> action; i++)	{
			string animal, name;
			fileInput >> animal;
			if (action == "rescue")	{
				fileInput >> name;
				if (animal == "dog")	{
					push(dog, name);
				}	else	{
					push(cat, name);
				}
			}	else	{
				if (animal == "dog")	{
					if (!isEmpty(dog))	{
						string rescuename = pop(dog);
						push(result, rescuename);
					}
				}	else	{
					if (!isEmpty(cat))	{
						string rescuename = pop(cat);
						push(result, rescuename);
					}
				}
			}
		}
	}	else	{
		cout << "Unable to open input file." << endl;
	}
	fileInput.close();
	destroy(dog); destroy(cat);
	
	fileOutput.open("adoptions.txt");
	if (fileOutput.is_open())	{
		while (!isEmpty(result))	{
			fileOutput << pop(result) << endl;
		}
	}	else	{
		cout << "Unable to open output file." << endl;
	}
	fileOutput.close();
	destroy(result);
}
