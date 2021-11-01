// p2queue1.h

const int SIZE = 100;

template <typename T>
struct Queue {
    T data[SIZE];
    int tail;
};

template <typename T>
void initialize(Queue<T> &q)
{
    q.tail = 0;
}

template <typename T>
void destroy(Queue<T> &q)
{
    q.tail = 0;
}

template <typename T>
int getSize(Queue<T> q)
{
    return q.tail;
}

template <typename T>
bool isEmpty(Queue<T> q)
{
    return (q.tail == 0);
}

// Assume space exists (queue not full)
template <typename T>
void push(Queue<T> &q, T v)
{
    q.data[q.tail++] = v;
}

// Assume at least one value available to pop
template <typename T>
T pop(Queue<T> &q)
{
    T r = q.data[0]; // head is always at index zero
    for( int i = 1; i < q.tail; i++ ) // shift each value one space left in the array
        q.data[i-1] = q.data[i];
    q.tail--; // one fewer value in queue
    return r;   
}
