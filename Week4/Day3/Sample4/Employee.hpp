#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
class Employee
{
    std::string name{""};
    float salary{0.0f};
    std::string designation{""};
    unsigned int expYear{0};

public:
    Employee() = default;

    Employee(const Employee &) = default; // disabled copy constructor

    Employee(Employee &&) = default; // enabled move constructor brand new in C++11

    Employee &operator=(const Employee &) = default; // disabled assignment operator

    Employee &operator=(Employee &&) = default; // enabled assignment move operator brand new in C++11

    ~Employee() = default;

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

 
    float getSalary() const { return salary; }
    void setSalary(float salary_) { salary = salary_; }

    std::string getDesignation() const { return designation; }
    void setDesignation(const std::string &designation_) { designation = designation_; }

    unsigned int getExpYear() const { return expYear; }
    void setExpYear(unsigned int expYear_) { expYear = expYear_; }

    Employee(std::string na_, float salary_, std::string designati_, unsigned int expY_);

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
    
};

#endif // EMPLOYEE_HPP
