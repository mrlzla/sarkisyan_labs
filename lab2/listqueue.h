#ifndef LISTQUEUE_H
#define LISTQUEUE_H

#include "iqueue.h"

template <class T>
class ListQueue: IQueue<T>
{
public:
    ListQueue();
    void AddItem(const T item);
    T GetItem();
public:
    T data;
    std::shared_ptr< ListQueue<T> > next;
    std::shared_ptr< ListQueue<T> > tail;
    std::shared_ptr< ListQueue<T> > head;

};

template <class T>
using ListQueuePtr = std::shared_ptr< ListQueue<T> >;

template <class T>
ListQueue<T>::ListQueue()
{
    next.reset();
    head.reset();
}

template <class T>
void ListQueue<T>::AddItem(const T item)
{
    ListQueuePtr<T> temp(new ListQueue<T>);
    temp->data = item;
    temp->next.reset();
    if(head.use_count() == 0)
    {
        head = temp;
        tail = temp;

    }
    tail->next = temp;
    tail = temp;
}

template <class T>
T ListQueue<T>::GetItem()
{
    ListQueuePtr<T> temp(new ListQueue<T>);
    temp = head;
    head=head->next;
    return temp->data;
}

#endif // LISTQUEUE_H
