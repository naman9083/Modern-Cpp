#include "Employee.hpp"

Employee::Employee(std::string na_, float salary_, std::string designati_, unsigned int expY_)
    : name{na_}, salary{salary_}, designation{designati_}, expYear{expY_}
{
}

std::ostream &operator<<(std::ostream &os, const Employee &rhs)
{
    os << "Name: " << rhs.name
       << "\n"
       << "Salary: " << rhs.salary
       << "\n"
       << "Designation: " << rhs.designation
       << "\n"
       << "ExpYear: " << rhs.expYear
       << "\n";
    return os;
}