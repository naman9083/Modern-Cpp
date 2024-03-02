#include "Employee.h"

Employee::Employee(std::string eid, std::string ename, float esalary, std::reference_wrapper<Project> pr)
:_employee_id(eid), _employee_name(ename), _employee_salary(esalary), _employee_project(pr)
{
}

std::ostream &operator<<(std::ostream &os, const Employee &rhs)
{
    // TODO: insert return statement here
    return os;
}
