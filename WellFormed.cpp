#include <iostream>
#include "p2stack.h"
using namespace std;

int main()	{
	string expression;
	bool wellformed = true;
	int length;
	cout << "Enter expression: "; cin >> expression; cout << endl;
	
	char test = expression[0];
	for (int i = 1; test == '(' or test == ')' or test == '[' or test == ']'; i++)	{
		length = i;
		test = expression[i];
	}
	
	Stack<char> openedExpression;
	initialize(openedExpression);
	
	for (int i = 0; i < length and wellformed == true; i++)	{
		if (length == 1)	{
			cout << "Expression " << expression << " is not well-formed.";
			wellformed = false;
		}
		if (expression[i] == '(' or expression[i] == '[')	{
			push(openedExpression, expression[i]);
		}	else	{
			if (isEmpty(openedExpression))	{
				cout << "Expression " << expression << " is not well-formed.";
				wellformed = false;
			}	else	{
				char checker = pop(openedExpression);
				if (checker == '(' and expression[i] != ')')	{
					cout << "Expression " << expression << " is not well-formed.";
					wellformed = false;
				}	else if (checker == '[' and expression[i] != ']')	{
					cout << "Expression " << expression << " is not well-formed.";
					wellformed = false;
				}
			}
		}
	}
	
	if (!isEmpty(openedExpression))	{
		cout << "Expression " << expression << " is not well-formed.";
		wellformed = false;
	}
	if (wellformed == true)	{
		cout << "Expression " << expression << " is well-formed.";
	}
}
