#include <iostream>

using namespace std;

template <typename V, typename R>
struct Node {
    V value;
    R priority;
    Node<V,R>* next;
    Node<V,R>* prev;    
};

template <typename V, typename R>
struct PriorityQueue {
    Node<V,R>* head;
};

template <typename V, typename R>
void initialize(PriorityQueue<V,R>& Q)	{
	Q.head = NULL;
}

template <typename V, typename R>
void destroy(PriorityQueue<V,R>& Q)	{
	Node<V, R>* del = Q.head;
	Q.head->prev->next = NULL;
	
	while (del != NULL)	{
		del = del->next;
		delete Q.head;
		Q.head = del;
	}
}

template <typename V, typename R>
bool isEmpty(PriorityQueue<V,R> Q)	{
	return Q.head == NULL;
}

template <typename V, typename R>
void push(PriorityQueue<V,R>& Q,V v,R r)	{
	Node<V, R>* newNode = new Node<V, R>;
	newNode->value = v;
	newNode->priority = r;
	
	if (Q.head == NULL)	{
		Q.head = newNode;
		newNode->next = Q.head;
		newNode->prev = Q.head;
	}	else if	(r > Q.head->priority)	{
		newNode->next = Q.head;
		newNode->prev = Q.head->prev;
		Q.head->prev->next = newNode;
		Q.head->prev = newNode;
		Q.head = newNode;
	}	else if (r <= Q.head->prev->priority)	{
		newNode->next = Q.head;
		newNode->prev = Q.head->prev;
		Q.head->prev->next = newNode;
		Q.head->prev = newNode;
	}	else	{
		Node<V, R>* walker = Q.head->next;
		while (walker->priority >= r)	{
			walker = walker->next;
		}
		newNode->next = walker;
		newNode->prev = walker->prev;
		walker->prev->next = newNode;
		walker->prev = newNode;
	}
}

template <typename V, typename R>
V   pop(PriorityQueue<V,R>& Q)	{
	V value = Q.head->value;
	Node<V, R>* del = Q.head;
	if (Q.head == Q.head->next)	{
		Q.head = NULL;
	}	else	{
		Q.head->next->prev = Q.head->prev;
		Q.head->prev->next = Q.head->next;
		Q.head = Q.head->next;
	}
	delete del;
	return value;
}
