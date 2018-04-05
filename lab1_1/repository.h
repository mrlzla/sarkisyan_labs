#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "basictypes.h"

template <class T>
class Repository
{
public:
    Repository();
    void AddItem(const T item);
    void RemoveItem(const T & item);
    T FindItemById(const unsigned int id);
    void SortItemsById();

private:
    std::map<unsigned int, T> items;

};

template <class T>
Repository<T>::Repository()
{

}

template <class T>
void Repository<T>::AddItem(const T item)
{
    items.insert(std::make_pair(item->id, item));
}

template <class T>
void Repository<T>::RemoveItem(const T & item)
{
    items.erase(item->id);
}

template <class T>
T Repository<T>::FindItemById(const unsigned int id){
    auto res = items.find(id);
    if (res == items.end())
    {
        return nullptr;
    }
    return items.find(id)->second;
}

template <class T>
void Repository<T>::SortItemsById()
{

}

#endif // REPOSITORY_H
