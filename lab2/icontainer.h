#ifndef ICONTAINER_H
#define ICONTAINER_H

#include "basictypes.h"

template <class T, class I>
class IContainer{
public:
    IContainer(){}
    virtual void AddItem(const T item) = 0;
    virtual void RemoveLast() = 0;
    virtual T& operator[](I index) = 0;
    //virtual const T& operator[](I index) const = 0;
};
#endif // ICONTAINER_H
