#ifndef IREPOSITORY_H
#define IREPOSITORY_H

#include "basictypes.h"

template <class T>
class IRepository
{
public:
    IRepository();
    void AddItem(const T item);
    void RemoveItem(const T & item);
    T FindItemById(const unsigned int id);
    void SortItemsById();
};
#endif //IREPOSITORY_H
