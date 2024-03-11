#include "Functionalities.hpp"
int main()
{
    EmployeeContainer data1;
    EmployeeRawCon data2;
    EmployeeSmartCon data3;

    createEmployees(data1);
    createEmployeesPointer(data2);
    createEmployeesSmartPointer(data3);

    /*
        check if "any of"(atleast one) instance satifies condition
    */

    std::cout << std::boolalpha << std::any_of(data1.begin(), data1.end(), [](const Employee &emp)
                                               { return emp.getSalary() > 40000.0f; });

    std::cout << std::boolalpha << std::any_of(data2.begin(), data2.end(), [](const EmployeeRaw emp)
                                               { return emp->getSalary() > 20000.0f; });
    std::cout << std::boolalpha << std::any_of(data3.begin(), data3.end(), [](const EmployeeSmart emp)
                                               { return emp->getSalary() > 20000.0f; });


    return 0;
}