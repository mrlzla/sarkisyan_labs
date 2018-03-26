#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include "icontainer.h"

template <class T>
class VectorContainer:IContainer<T, size_t>
{
public:
    VectorContainer();
    void AddItem(const T item);
    void RemoveLast();
    T& operator[](size_t index);
    const T& operator[](size_t index) const;
private:
    std::vector<T> _container;
};

template <class T>
VectorContainer<T>::VectorContainer()
{

}

template <class T>
void VectorContainer<T>::AddItem(const T item)
{
    _container.push_back(item);
}

template <class T>
void VectorContainer<T>::RemoveLast()
{
    _container.pop_back();
}

template <class T>
T& VectorContainer<T>::operator[](size_t index)
{
    return _container[index];
}

template <class T>
const T& VectorContainer<T>::operator[](size_t index) const
{
    return _container[index];
}


#endif // VECTORCONTAINER_H
