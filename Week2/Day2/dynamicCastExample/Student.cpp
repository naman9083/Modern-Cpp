#include "Student.hpp"

Student::Student(std::string name, unsigned int age,int studentId_, int grade_) : Person(name,age), studentId{studentId_}, grade{grade_}
{
}

std::ostream &operator<<(std::ostream &os, const Student &rhs) {
    os << dynamic_cast<const Person &>(rhs)
       << "StudentId: " << rhs.studentId << "\n"
       << "Grade: " << rhs.grade << "\n";
    return os;
}
