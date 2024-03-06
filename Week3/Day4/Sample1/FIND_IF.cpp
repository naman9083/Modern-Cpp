#include "Functionalities.hpp"

template <typename T, typename P>
auto search(const T &data1,
            const P &fn)
{

    return std::find_if(data1.begin(), data1.end(), fn);
}
int main()
{

    EmployeeContainer data1;
    EmployeeRawCon data2;
    EmployeeSmartCon data3;
    
    createEmployees(data1);
    createEmployeesPointer(data2);
    createEmployeesSmartPointer(data3);
    /*
        2) std::find_if
            std::find_if returns "iterator to the FIRST MATCHING OBJECT"
            If match is not found, find_if returns and iterator
    */

    auto itr1 = search<const EmployeeContainer &, std::function<bool(const Employee &)>>(
        data1, [](const Employee &emp)
        { return emp.getDesignation() == "Designer"; });

    if (itr1 == data1.end())
        std::cout << "No object found\n";

    else
        std::cout << "Object found:\n"<<*itr1;
    
    auto itr2 = search<const EmployeeRawCon &, std::function<bool(const Employee *)>>(
        data2, [](const Employee *emp)
        { return emp->getDesignation() == "Designer"; });

    if (itr2 == data2.end())
        std::cout << "No object found\n";

    else
        std::cout << "Object found:\n"
                  << **itr2;
    return 0;
}