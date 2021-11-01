#include "p2stack.h"

template <typename T>
struct Queue {
   Stack<T> s1;
   Stack<T> s2;
};

template <typename T>	
void initialize(Queue<T>& Q)	{
	initialize(Q.s1);
	initialize(Q.s2);
}

template <typename T>
void destroy(Queue<T>& Q)	{
	destroy(Q.s1);
	destroy(Q.s2);
}

template <typename T>
int  getSize(Queue<T> Q)	{
	Stack<T> temp;
	initialize(temp);
	int size = 0;
	for (int i = 0; !isEmpty(Q.s1); i++)	{
		push(temp, pop(Q.s1));
		size++;
	}
	while (!isEmpty(temp))	{
		push(Q.s1, pop(temp));
	}
	destroy(temp);
	return size;
}

template <typename T>
bool isEmpty(Queue<T> Q)	{
	return isEmpty(Q.s1);
}

template <typename T>
void push(Queue<T>& Q, T data)	{
	while (!isEmpty(Q.s1))	{
		push(Q.s2, pop(Q.s1));
	}
	push(Q.s2, data);
	while (!isEmpty(Q.s2))	{
		push(Q.s1, pop(Q.s2));
	}
}

template <typename T>
T    pop(Queue<T>& Q)	{
	while (!isEmpty(Q.s1))	{
		push(Q.s2, pop(Q.s1));
	}
	T data = pop(Q.s2);
	while (!isEmpty(Q.s2))	{
		push(Q.s1, pop(Q.s2));
	}
	return data;
}	
