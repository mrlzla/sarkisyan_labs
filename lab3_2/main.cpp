#include <iostream>
#include <customer.h>

using namespace std;

int main()
{
    Customer customer("Vladislav Artemyev", "+375257037658", 500);
    customer.Print("{name} {contact_phone} {revenue} {name}");
    customer.Print("velcom {contact_phone} {name} {revenue}");
    return 0;
}
