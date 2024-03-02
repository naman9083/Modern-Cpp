#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <functional>
#include "Project.h"

class Employee
{
private:
    std::string _employee_id;
    std::string _employee_name;
    float _employee_salary;
    std::reference_wrapper<Project> _employee_project;

public:

    Employee() = delete;
    Employee(const Employee&) = delete;
    Employee(Employee&&) = delete;
    Employee& operator=(const Employee&) = delete;
    Employee& operator=(Employee&&) = delete;
    ~Employee() = default;

    Employee(std::string eid, std::string ename, float esalary, std::reference_wrapper<Project> pr);

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
    
};

#endif // EMPLOYEE_H
