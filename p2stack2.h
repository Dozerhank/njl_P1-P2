#include <cstddef>

template <typename T>
struct Node {
   T value;
   Node<T>* next;
};

template <typename T>
struct Stack {
   Node<T>* top;
};

template <typename T>
void initialize(Stack<T>& S)	{

}

template <typename T>
void destroy(Stack<T>& S)	{
	
}

template <typename T>
bool isEmpty(Stack<T>)	{
	
}

template <typename T>
void push(Stack<T>&,T)	{
	
}

template <typename T>
T    pop(Stack<T>&)	{
	
}
