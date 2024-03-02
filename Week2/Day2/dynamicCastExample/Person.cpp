#include "Person.hpp"

Person::Person(std::string name_, unsigned int age_) : name{name_}, age{age_}
{
}

std::ostream &operator<<(std::ostream &os, const Person &rhs)
{
    os << "Name: " << rhs.name << "\n"
       << "Age: " << rhs.age << "\n";
    return os;
}
