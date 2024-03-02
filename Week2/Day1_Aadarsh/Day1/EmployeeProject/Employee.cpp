#include "Employee.h"

Employee::Employee(std::string eid,std::string ename, float esalary, std::reference_wrapper<Project> pr)
:   _employee_id{eid},_employee_name{ename}, _employee_salary{esalary}, _employee_project{pr} {
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_employee_id: " << rhs._employee_id
       << " _employee_name: " << rhs._employee_name
       << " _employee_salary: " << rhs._employee_salary
       << " _employee_project: " << rhs._employee_project.get();
    return os;
}
