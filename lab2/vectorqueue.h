#ifndef VECTORQUEUE_H
#define VECTORQUEUE_H

#include "iqueue.h"

template <class T>
class VectorQueue: IQueue<T>
{
public:
    VectorQueue(){}
    void AddItem(const T item);
    T GetItem();
private:
    std::deque<T> _queue;
};

template <class T>
void VectorQueue<T>::AddItem(const T item)
{
    _queue.push_back(item);
}

template <class T>
T VectorQueue<T>::GetItem()
{
    auto val = _queue.front();
    _queue.pop_front();
    return val;
}

#endif // VECTORQUEUE_H
