#include <iostream>
#include <fstream>
using namespace std;

int main () {
	string readFile;
	string writeFile;
	
	ifstream fileRead;
	ofstream fileWrite;
	int filled = 0;
	
	cout << "Input file: "; cin >> readFile;
	cout << "Output file: "; cin >> writeFile;
	
	string temp[3000];
	string final[1000];
	
	fileRead.open(readFile.c_str());
	
	if (fileRead.is_open())	{
		for (int i = 0; fileRead >> temp[i]; i += 3)	{
			fileRead >> temp[i + 1];
			fileRead >> temp[i + 2];
			final[filled] = temp[i + 2] + " " + temp[i] + " " + temp[i + 1];
			temp[filled] = temp[i + 2];
			filled++;
		}
	}
	
	fileRead.close();
	
	for (int i = 0; i < filled; i++)	{
		int min = i;
		for (int j = i + 1; j < filled; j++)	{
			if (temp[min] > temp[j])	{
				min = j;
			} 
		}
		string placeHolder = final[i];
		final[i] = final[min];
		final[min] = placeHolder;
	}
	
	fileWrite.open(writeFile.c_str());
	
	if (fileWrite.is_open())	{
		for (int i = 0; i < filled; i++)	{
			fileWrite << final[i] << endl;
			cout << final[i] << endl;
		}
	}
	
	fileWrite.close();
	

}
