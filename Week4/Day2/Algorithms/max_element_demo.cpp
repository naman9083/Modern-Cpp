#include "Functionalities.hpp"

int main()
{
    EmployeeContainer data1;
    EmployeeRawCon data2;
    EmployeeSmartCon data3;

    createEmployees(data1);
    createEmployeesPointer(data2);
    createEmployeesSmartPointer(data3);

    // designation of the employee whose salary is the highest
    // Note: if there are 2 or more max values, first max is considered

    EmployeeContainer::iterator itr = std::max_element(data1.begin(), data1.end(), [](const Employee &emp1, const Employee &emp2)
                                                       { return emp1.getSalary() < emp2.getSalary(); });

    // std::cout << (*itr).getDesignation() << "\n";
    std::cout << itr->getDesignation() << "\n";

    EmployeeRawCon::iterator itr2 = std::max_element(data2.begin(), data2.end(), [](const EmployeeRaw &emp1, const EmployeeRaw emp2)
                                                     { return emp1->getSalary() < emp2->getSalary(); });
    std::cout << (*itr2)->getDesignation() << "\n";

    
    
    return 0;


}