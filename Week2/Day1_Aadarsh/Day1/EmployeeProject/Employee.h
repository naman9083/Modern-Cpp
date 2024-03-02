#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <ostream>
#include<functional>
#include "Project.h"

class Employee
{
private:
    std::string _employee_id;
    std::string _employee_name;
    float _employee_salary;
    std::reference_wrapper<Project> _employee_project;
    
public:
    Employee()=delete;
    Employee(const Employee&)=delete;
    Employee(const Employee&&)=delete;
    Employee operator =(const Employee&)=delete;
    Employee operator =(const Employee&&)=delete;
    ~Employee()=default;    

    Employee( std::string eid,std::string ename, float esalary, std::reference_wrapper<Project>pr);

    std::string employeeId() const { return _employee_id; }
    void setEmployeeId(const std::string &employee_id) { _employee_id = employee_id; }

    std::string employeeName() const { return _employee_name; }
    void setEmployeeName(const std::string &employee_name) { _employee_name = employee_name; }

    float employeeSalary() const { return _employee_salary; }
    void setEmployeeSalary(float employee_salary) { _employee_salary = employee_salary; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
    
};

#endif // EMPLOYEE_H
