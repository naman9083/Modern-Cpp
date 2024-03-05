#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
class Employee
{
    std::string name;
    float salary;

public:
    Employee() = delete;

    Employee(const Employee &) = delete; // disabled copy constructor

    Employee(Employee &&) = delete; // enabled move constructor brand new in C++11

    Employee &operator=(const Employee &) = delete; // disabled assignment operator

    Employee &operator=(Employee &&) = delete; // enabled assignment move operator brand new in C++11

    ~Employee() = default;

    Employee(float salary_, std::string name_);

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    float getSalary() const { return salary; }
    void setSalary(float salary_) { salary = salary_; }
};

#endif // EMPLOYEE_HPP
