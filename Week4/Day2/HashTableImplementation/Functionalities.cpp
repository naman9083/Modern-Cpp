#include "Functionalities.hpp"

void createEmployees(EmployeeContainer &data)
{
    data.push_back(Employee(101,"Naman", 21000.0f, "Software Developer"));
    data.push_back(Employee(102,"Ajit", 22000.0f, "Tester"));
    data.push_back(Employee(103,"Asim", 23000.0f, "Designer"));
    data.push_back(Employee(104,"Vishal", 19000.0f, "Data Engineer"));
}

void createEmployeesPointer(EmployeeRawCon &data)
{
    data.push_back(new Employee(101,"Naman", 22000.0f, "Designer"));
    data.push_back(new Employee(102,"Ajit", 23000.0f, "Designer"));
    data.push_back(new Employee(103,"Asim", 19500.0f, "Designer"));
    data.push_back(new Employee(104,"Vishal", 21000.0f, "Designer"));
}

void createEmployeesSmartPointer(EmployeeSmartCon &data)
{
    data.push_back(std::make_shared<Employee>(101,"Naman", 22000.0f, "Software Developer"));
    data.push_back(std::make_shared<Employee>(102,"Ajit", 23000.0f, "Tester"));
    data.push_back(std::make_shared<Employee>(103,"Asim", 24000.0f, "Designer"));
    data.push_back(std::make_shared<Employee>(104,"Vishal", 19000.0f, "Data Engineer"));
}

void deleteData(EmployeeRawCon &data)
{
    for (const EmployeeRaw &ptr : data)
        delete ptr;
}