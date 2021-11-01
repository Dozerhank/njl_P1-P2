#include <iostream>
using namespace std;

int main()	{
	string input;
	string inputS;
	string scrabble = "AEILNORSTUDGBCMPFHVWYKJXQZ";
		//[0]-[9] [10]-[11] [12]-[15] [16]-[20] [21] [22]-[23] [24]-[25]
	int score = 0;
		
	cout << "This program calculates the Scrabble score for a word." << endl;
	cout << endl;
	
	cout << "Word: "; cin >> input;
	
	inputS = input;
	for (int i = 0; inputS[i] != 0; i++)	{
		if (inputS[i] >= 97 && inputS[i] <= 122)	{
		inputS[i] -= 32;
		}	
	}
	
	for (int i = 0; inputS[i] != 0; i++)	{
		for (int j = 0; j != 10; j++)	{
			if (inputS[i] == scrabble[j])	{
				score++;			
			}
		}
		for (int j = 10; j != 12; j++)	{
			if (inputS[i] == scrabble[j])	{
				score += 2;	
			}
		}
		for (int j = 12; j != 16; j++)	{
			if (inputS[i] == scrabble[j])	{
				score += 3;			
			}
		}
		for (int j = 16; j != 21; j++)	{
			if (inputS[i] == scrabble[j])	{
				score += 4;			
			}
		}
		for (int j = 21; j != 22; j++)	{
			if (inputS[i] == scrabble[j])	{
				score += 5;
			}
		}
		for (int j = 22; j != 24; j++)	{
			if (inputS[i] == scrabble[j])	{
				score += 8;
			}
		}
		for (int j = 24; j != 26; j++)	{
			if (inputS[i] == scrabble[j])	{
				score += 10;
			}
		}
	}
	
	cout << "The basic score for \'" << input << "\' is " << score;
}