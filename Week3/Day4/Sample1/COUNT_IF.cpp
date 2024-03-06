#include "Functionalities.hpp"

int main()
{

    EmployeeContainer data1;
    EmployeeRawCon data2;
    EmployeeSmartCon data3;

    createEmployees(data1);
    createEmployeesPointer(data2);
    createEmployeesSmartPointer(data3);

    int count = std::count_if(data1.begin(), data1.end(), [](const Employee &emp)
                  { return emp.getSalary() > 20000.0f; });
    
    int count1 = std::count_if(data2.begin(), data2.end(), [](const EmployeeRaw emp)
                  { return emp->getSalary() > 20000.0f; });
    
    int count2 = std::count_if(data3.begin(), data3.end(), [](const EmployeeSmart &emp)
                  { return emp->getSalary() > 20000.0f; });

    std::cout << "Count 0: " << count << "\nCount 1: " << count1 << "\nCount 2: " << count2 << "\n";

    /*
        count instances matching with given condition
        condition is written as predicate.
        return value is the final count
    */
    return 0;
}