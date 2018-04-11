#ifndef VECTORQUEUE_H
#define VECTORQUEUE_H

#include "iqueue.h"

template <class T>
class ArrayQueue: IQueue<T>
{
public:
    ArrayQueue();
    void AddItem(const T item);
    T GetItem();
private:
    T* _queue;
    size_t capacity;
    size_t size;
};

template <class T>
ArrayQueue<T>::ArrayQueue(): capacity(2), size(0)
{
    _queue = new T[capacity];
}

template <class T>
void ArrayQueue<T>::AddItem(const T item)
{
    if(size == capacity)
    {
        capacity *= 2;
        T * new_queue = new T[capacity];
        for(size_t i = 0; i < size; ++i)
        {
            new_queue[i] = _queue[i];
        }

        delete [] _queue;
        _queue = new_queue;
    }
    _queue[size++] = item;
}

template <class T>
T ArrayQueue<T>::GetItem()
{
    if(size == 0)
        return -1;
    T item = _queue[0];
    for(int i = 1; i < size; i++)
    {
        _queue[i - 1] = _queue[i];
    }
    size--;
    return item;
}

#endif // VECTORQUEUE_H
