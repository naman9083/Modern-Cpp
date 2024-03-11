#include "Functionalities.hpp"

void createEmployees(EmployeeContainer &data)
{
    data.push_back(Employee("Naman", 21000.0f, "Software Developer", 6));
    data.push_back(Employee("Ajit", 22000.0f, "Tester", 1));
    data.push_back(Employee("Asim", 23000.0f, "Designer", 3));
    data.push_back(Employee("Vishal", 19000.0f, "Data Engineer", 1));
}

void createEmployeesPointer(EmployeeRawCon &data)
{
    data.push_back(new Employee("Naman", 22000.0f, "Designer", 2));
    data.push_back(new Employee("Ajit", 23000.0f, "Designer", 1));
    data.push_back(new Employee("Asim", 19500.0f, "Designer", 3));
    data.push_back(new Employee("Vishal", 21000.0f, "Designer", 1));
}

void createEmployeesSmartPointer(EmployeeSmartCon &data)
{
    data.push_back(std::make_shared<Employee>("Naman", 22000.0f, "Software Developer", 2));
    data.push_back(std::make_shared<Employee>("Ajit", 23000.0f, "Tester", 1));
    data.push_back(std::make_shared<Employee>("Asim", 24000.0f, "Designer", 3));
    data.push_back(std::make_shared<Employee>("Vishal", 19000.0f, "Data Engineer", 1));
}

void deleteData(EmployeeRawCon &data)
{
    for (const EmployeeRaw &ptr : data)
        delete ptr;
}