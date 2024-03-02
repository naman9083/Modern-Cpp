#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include "Person.hpp"

class Student : public Person
{
    int studentId;
    int grade;

public:
    Student() = default;

    Student(const Student &) = default; // disabled copy constructor

    Student(Student &&) = default; // enabled move constructor brand new in C++11

    Student &operator=(const Student &) = default; // disabled assignment operator

    Student &operator=(Student &&) = default; // enabled assignment move operator brand new in C++11

    ~Student() = default;

    int getStudentId() const { return studentId; }
    void setStudentId(int studentId_) { studentId = studentId_; }

    int getGrade() const { return grade; }
    void setGrade(int grade_) { grade = grade_; }

    Student(std::string name, unsigned int age, int studentId_, int grade_);

    friend std::ostream &operator<<(std::ostream &os, const Student &rhs);

    void display()
    {
    }
};

#endif // STUDENT_HPP
