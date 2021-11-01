#include<cstddef>

template <typename T>
struct Stack	{
    T* data;
    int size;
    int top;
};

template <typename T>
void initialize(Stack<T> &q)	{
    q.top = 0;
    q.size = 2;
    q.data = new T[q.size];
}

template <typename T>
void destroy(Stack<T> &q)	{
	delete [] q.data;
	q.data = NULL;
    q.top = 0;
    q.size = 2;
}

template <typename T>
bool isEmpty(Stack<T> q)	{
    return (q.top == 0);
}

template <typename T>
void push(Stack<T> &q, T v)	{
	if (q.top == q.size)	{
		T* temp = new T[q.size*2];
		for(int i = 0; i < q.size; i++)	{
			temp[i] = q.data[i];
		}
		delete [] q.data;
		q.data = temp;
		q.size *= 2;
	}
    q.data[q.top] = v;
    q.top++;
}

template <typename T>
T pop(Stack<T> &q)	{
	q.top--;
    T r = q.data[q.top]; 
    return r;   
}
