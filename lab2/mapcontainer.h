#ifndef MAPCONTAINER_H
#define MAPCONTAINER_H

#include "icontainer.h"

template <class T>
class MapContainer: IContainer<T, std::string>
{
public:
    MapContainer();
    void AddItem(const T item);
    void RemoveLast();
    T& operator[](std::string index);
    //const T& operator[](std::string index) const;
public:
    static size_t size;
private:
    std::map<std::string, T> _container;
};

template <class T>
size_t MapContainer<T>::size=0;

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

//template <class T>
//const T& MapContainer<T>::operator[](std::string index) const
//{
//    return _container[index];
//}

#endif // MAPCONTAINER_H
