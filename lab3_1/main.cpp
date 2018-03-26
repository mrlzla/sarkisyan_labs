#include <iostream>

using namespace std;

#include "jaggedarray.h"

int main()
{
    vector< vector< int> > arr;
    arr.push_back({1, 5, 1});
    arr.push_back({1, 1, 1, 1, -1});
    arr.push_back({2, 2, 2, 2, 2, 2, 2, 2});
    JaggedArray< vector<int> > jarray(arr);
    jarray.SortByRowMax(false);
    jarray.Print();
    jarray.SortByRowMin(true);
    jarray.Print();
    jarray.SortByRowSum(false);
    jarray.Print();
    return 0;
}
