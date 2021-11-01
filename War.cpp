#include <iostream>
#include "p2queue.h"
#include <fstream>
#include "p2stack.h"

using namespace std;

int main()	{
	int battles = 0;
	Queue<int> poQueue; Queue<int> ptQueue;
	initialize(poQueue); initialize(ptQueue);
	
	ifstream fin;
	fin.open("player1.txt");
	if (fin.is_open())	{
		char input;
		while (fin >> input)	{
			if (input == 'A')	{
				push(poQueue, 14);
			}	else if (input == 'K')	{
				push(poQueue, 13);
			}	else if (input == 'Q')	{
				push(poQueue, 12);
			}	else if (input == 'J')	{
				push(poQueue, 11);
			}	else if (input == '10')	{
				push(poQueue, 10);
			}	else if (input == '9')	{
				push(poQueue, 9);
			}	else if (input == '8')	{
				push(poQueue, 8);
			}	else if (input == '7')	{
				push(poQueue, 7);
			}	else if (input == '6')	{
				push(poQueue, 6);
			}	else if (input == '5')	{
				push(poQueue, 5);
			}	else if (input == '4')	{
				push(poQueue, 4);
			}	else if (input == '3')	{
				push(poQueue, 3);
			}	else if (input == '2')	{
				push(poQueue, 2);
			}
		}
	}
	fin.close();
	
	fin.open("player2.txt");
	if (fin.is_open())	{
		char input;
		while (fin >> input)	{
			if (input == 'A')	{
				push(ptQueue, 14);
			}	else if (input == 'K')	{
				push(ptQueue, 13);
			}	else if (input == 'Q')	{
				push(ptQueue, 12);
			}	else if (input == 'J')	{
				push(ptQueue, 11);
			}	else if (input == '10')	{
				push(ptQueue, 10);
			}	else if (input == '9')	{
				push(ptQueue, 9);
			}	else if (input == '8')	{
				push(ptQueue, 8);
			}	else if (input == '7')	{
				push(ptQueue, 7);
			}	else if (input == '6')	{
				push(ptQueue, 6);
			}	else if (input == '5')	{
				push(ptQueue, 5);
			}	else if (input == '4')	{
				push(ptQueue, 4);
			}	else if (input == '3')	{
				push(ptQueue, 3);
			}	else if (input == '2')	{
				push(ptQueue, 2);
			}
		}
	}
	fin.close();
	
	while (!isEmpty(poQueue) and !isEmpty(ptQueue) and battles < 5000)	{
		int turn1 = pop(poQueue); int turn2 = pop(ptQueue);
		if (turn1 > turn2)	{
			push(poQueue, turn1); push(poQueue, turn2);
			cout << "Player one wins: " << turn1 << " to " << turn2 << "." << endl;
		}	else if (turn1 < turn2)	{
			push(ptQueue, turn2); push(ptQueue, turn1);
			cout << "Player two wins: " << turn1 << " to " << turn2 << "." << endl;
		}	else if (turn1 == turn2)	{
			bool tie = true;
			Stack<int> tieOne; initialize(tieOne);
			Stack<int> tieTwo; initialize(tieTwo);
			while (tie == true)	{
				for (int i = 0; i < 5; i++)	{
					int new1, new2;
					if (i == 4)	{
						new1 = pop(poQueue);
						new2 = pop(ptQueue);
						push(tieOne, new1);
						push(tieTwo, new2);
						if (new1 > new2)	{
							while(!isEmpty(tieOne))	{
								push(poQueue, pop(tieOne));
							}
							while(!isEmpty(tieTwo))	{
								push(poQueue, pop(tieTwo));
							}
							tie = false;
						}	else if (new1 < new2)	{
							while(!isEmpty(tieTwo))	{
								push(ptQueue, pop(tieTwo));
							}
							while(!isEmpty(tieOne))	{
								push(ptQueue, pop(tieOne));
							}
							tie = false;
						}
					}	else	{
						push(tieOne, pop(poQueue));
						push(tieTwo, pop(ptQueue));
					}
				}
			}
		}
		battles++;
	}
	
	if (isEmpty(poQueue))	{
		cout << "Player #2 wins after " << battles << " battles.";
	}	else if (isEmpty(ptQueue))	{
		cout << "Player #1 wins after " << battles << " battles.";
	}	else	{
		cout << "Nobody wins.";
	}
}
