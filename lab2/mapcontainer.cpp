#include "mapcontainer.h"

template <class T>
size_t MapContainer<T>::size = 0;

template<class T>
MapContainer<T>::MapContainer()
{

}

template <class T>
void MapContainer<T>::AddItem(const T item)
{
    _container[std::to_string(size++)] = item;
}

template <class T>
void MapContainer<T>::RemoveLast()
{
    _container.erase(std::to_string(--size));
}

template <class T>
T& MapContainer<T>::operator[](std::string index)
{
    return _container[index];
}

template <class T>
const T& MapContainer<T>::operator[](std::string index) const
{
    return _container[index];
}
