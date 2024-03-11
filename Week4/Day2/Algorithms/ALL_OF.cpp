#include "Functionalities.hpp"

template <typename T, typename P>
void search(const T &data1,
            const P &fn)
{

    bool a = (std::all_of(data1.begin(), data1.end(), fn));
    std::cout << std::boolalpha<<a<<"\n";
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

    search<const EmployeeContainer &, std::function<bool(const Employee &)>>(
        data1, [](const Employee &emp)
        { return emp.getDesignation() == "Designer"; });
    search<const EmployeeRawCon  &, std::function<bool(const Employee *)>>(
        data2, [](const Employee *emp)
        { return emp->getDesignation() == "Designer"; });
   
    search<const EmployeeSmartCon &, std::function<bool(const EmployeeSmart )>>(
        data3, [](const EmployeeSmart emp)
        { return emp->getDesignation() == "Designer"; });
  
    return 0;
}