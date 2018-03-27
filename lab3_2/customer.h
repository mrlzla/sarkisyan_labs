#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "basictypes.h"

class Customer
{
private:
    std::map<std::string, boost::any> props;
public:
    Customer(std::string name, std::string contact_phone, double revenue);

    std::string GetName(){return boost::any_cast<std::string>(props["name"]);}
    std::string GetContactPhone(){return boost::any_cast<std::string>(props["contact_phone"]);}
    double GetRevenue(){return boost::any_cast<double>(props["revenue"]);}

    void SetContactPhone(const std::string & contact_phone)
    {
        props["contact_phone"] = contact_phone;
    }

    void SetRevenue(const double revenue)
    {
        props["revenue"] = revenue;
    }

    void Print(std::string pattern);
};

#endif // CUSTOMER_H
