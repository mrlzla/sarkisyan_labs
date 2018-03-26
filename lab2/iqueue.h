#ifndef IQUEUE_H
#define IQUEUE_H

#include "basictypes.h"

template <class T>
class IQueue{
public:
    IQueue(){}
    virtual void AddItem(const T item) = 0;
    virtual T GetItem() = 0;
};
#endif // IQUEUE_H
