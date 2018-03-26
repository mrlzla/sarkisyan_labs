#include <iostream>

#include "mapcontainer.h"
#include "vectorcontainer.h"
#include "listqueue.h"
#include "vectorqueue.h"

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


    VectorQueue<int> vectorQueue;
    ListQueue<int> listQueue;
    vectorQueue.AddItem(5);
    vectorQueue.AddItem(4);
    vectorQueue.AddItem(3);

    listQueue.AddItem(5);
    listQueue.AddItem(4);
    listQueue.AddItem(3);

    auto x1 = vectorQueue.GetItem();
    auto x2 = vectorQueue.GetItem();

    auto x3 = listQueue.GetItem();
    auto x4 = listQueue.GetItem();

    std::cout << x1 << " " << x2 << std::endl;
    std::cout << x3 << " " << x4 << std::endl;

    return 0;
}
