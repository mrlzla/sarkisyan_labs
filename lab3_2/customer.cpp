#include "customer.h"

Customer::Customer(std::string name, std::string contact_phone, double revenue)
{
    props["name"] = name;
    props["contact_phone"] = contact_phone;
    props["revenue"] = revenue;
}

void Customer::Print(std::string pattern)
{
    for(auto & entry: props)
    {
        std::string name = entry.first;
        name = "{" + name + "}";
        size_t start_pos = pattern.find(name);
        while(start_pos != std::string::npos)
        {
            try
            {
                pattern.replace(start_pos, name.length(), boost::any_cast<std::string>(entry.second));
            }
            catch (boost::bad_any_cast &e)
            {
                pattern.replace(start_pos, name.length(), std::to_string(boost::any_cast<double>(entry.second)));
            }
            start_pos = pattern.find(name, start_pos);
        }
    }
    std::cout << "Customer record: " << pattern << std::endl;
}
