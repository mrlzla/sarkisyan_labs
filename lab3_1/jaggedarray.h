#ifndef JAGGEDARRAY_H
#define JAGGEDARRAY_H

#include "basictypes.h"
#include "comparison.h"

template<class T>
class JaggedArray
{
public:
    JaggedArray(std::vector<T> arr);
    void SortByRowSum(bool desc);
    void SortByRowMax(bool desc);
    void SortByRowMin(bool desc);
    void Sort(Comparison<T> & comp, bool desc);
    void Print();
private:
    int Partition(int m, int n, Comparison<T> & comp);
    void SortWrapped(int m, int n, Comparison<T> & comp);
private:
    std::vector<T> _arr;
};

template<class T>
JaggedArray<T>::JaggedArray(std::vector<T> arr)
{
    _arr = arr;
}

template<class T>
void JaggedArray<T>::Sort(Comparison<T> & comp, bool desc)
{
    SortWrapped(0, _arr.size() - 1, comp);
    if(desc)
    {
        std::reverse(_arr.begin(), _arr.end());
    }
}

template<class T>
void JaggedArray<T>::SortWrapped(int m, int n, Comparison<T> & comp)
{
    int index;
    if(m>=n)
        return;
    {
        index = Partition(m,n, comp);
        SortWrapped(m, index-1, comp);
        SortWrapped(index+1, n, comp);
    }
}

template<class T>
int JaggedArray<T>::Partition(int m, int n, Comparison<T> & comp)
{
    int i, pindex;
    pindex = m;
    for(i=m;i<n;i++)
    {
        if(comp(_arr[i], _arr[n]))
        {
            swap(_arr[pindex], _arr[i]);
            pindex++;
        }
    }
    swap(_arr[pindex], _arr[n]);
    return pindex;
}

template<class T>
void JaggedArray<T>::SortByRowMax(bool desc)
{
    Comparison<T> comp([](const T & x1, const T & x2){return *(std::max_element(x1.begin(), x1.end())) <= *(std::max_element(x2.begin(), x2.end())); } );
    Sort(comp, desc);
}

template<class T>
void JaggedArray<T>::SortByRowMin(bool desc)
{
    Comparison<T> comp([](const T & x1, const T & x2){return *(std::min_element(x1.begin(), x1.end())) <= *(std::min_element(x2.begin(), x2.end())); } );
    Sort(comp, desc);
}

template<class T>
void JaggedArray<T>::SortByRowSum(bool desc)
{
    Comparison<T> comp([](const T & x1, const T & x2){return std::accumulate(x1.begin(), x1.end(), 0) <= std::accumulate(x2.begin(), x2.end(), 0); } );
    Sort(comp, desc);
}

template<class T>
void JaggedArray<T>::Print()
{
    for(auto vec: _arr)
    {
        for(auto el: vec)
        {
            std::cout << el << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "##############################################" << std::endl;
}


#endif // JAGGEDARRAY_H
