#include <iostream>

#include "mapcontainer.h"
#include "vectorcontainer.h"
#include "listqueue.h"
#include "arrayqueue.h"

using namespace std;

int main()
{
    VectorContainer<int> vectorContainer;
    MapContainer<int> mapContainer;
    vectorContainer.AddItem(5);
    vectorContainer.AddItem(4);
    vectorContainer.AddItem(3);

    mapContainer.AddItem(5);
    mapContainer.AddItem(4);
    mapContainer.AddItem(3);

    std::cout << vectorContainer[2] << " " << mapContainer["2"] << std::endl;
    vectorContainer.RemoveLast();
    mapContainer.RemoveLast();

    vectorContainer.AddItem(7);
    mapContainer.AddItem(7);
    std::cout << vectorContainer[2] << " " << mapContainer["2"] << std::endl;


    ArrayQueue<int> arrayQueue;
    ListQueue<int> listQueue;
    arrayQueue.AddItem(5);
    arrayQueue.AddItem(4);
    arrayQueue.AddItem(3);

    listQueue.AddItem(5);
    listQueue.AddItem(4);
    listQueue.AddItem(3);

    auto x1 = arrayQueue.GetItem();
    auto x2 = arrayQueue.GetItem();

    auto x3 = listQueue.GetItem();
    auto x4 = listQueue.GetItem();

    std::cout << x1 << " " << x2 << std::endl;
    std::cout << x3 << " " << x4 << std::endl;

    return 0;
}
