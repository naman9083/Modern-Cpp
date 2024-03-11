#include "Employee.hpp"

Employee::Employee(unsigned int id_, std::string na_, float salary_, std::string designati_)
    : name{na_}, salary{salary_}, designation{designati_}, id{id_}
{
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs)
{
    os << "Name: " << rhs.name
       << "\n"
       << "Salary: "  << rhs.salary
       << "\n"
       << "Designation: " << rhs.designation
       << "\n"
       << "ID: " << rhs.id
       << "\n";
    return os;
}