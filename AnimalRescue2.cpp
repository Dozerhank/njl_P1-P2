#include <iostream>
#include <fstream>
#include "p2queue.h"
#include "p2priorityqueue.h"
#include "p2set.h"
using namespace std;

int main()	{
	ifstream fileInput;
	ofstream fileOutput;
	
	PriorityQueue<string, int> list;
	Set<string> cat;
	Set<string> dog;
	Queue<string> catQ;
	Queue<string> dogQ;
	Queue<string> result;
	
	initialize(list); initialize(dog); initialize(cat); initialize(catQ); initialize(dogQ); initialize(result); 
	fileInput.open("actions.txt");
	if (fileInput.is_open())	{
		string action;
		for (int i = 0; fileInput >> action; i++)	{
			string animal, name;
			fileInput >> animal;
			if (action == "rescue")	{
				fileInput >> name;
				if (animal == "dog")	{
					push(list, name, i * -1);
					push(dogQ, name);
					insert(dog, name);
				}	else	{
					push(list, name, i * -1);
					push(catQ, name);
					insert(cat, name);
				}
			}	else	{
				if (animal == "dog")	{
					if (!isEmpty(dogQ))	{
						string rescuename = pop(dogQ);
						remove(dog, rescuename);
						push(result, rescuename);
					}
				}	else if (animal == "cat")	{
					if (!isEmpty(catQ))	{
						string rescuename = pop(catQ);
						remove(cat, rescuename);
						push(result, rescuename);
					}
				}	else	{
					while (!isEmpty(list))	{
						string rescuename = pop(list);
						if (contains(dog, rescuename))	{
							remove(dog, rescuename);
							pop(dogQ);
							push(result, rescuename);
							break;
						}	else if (contains(cat, rescuename))	{
							remove(cat, rescuename);
							pop(catQ);
							push(result, rescuename);
							break;
						}
					}
				}
			}
		}
	}	else	{
		cout << "Unable to open input file." << endl;
	}
	fileInput.close();
	destroy(dog); destroy(cat); destroy(dogQ); destroy(catQ);
	
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
