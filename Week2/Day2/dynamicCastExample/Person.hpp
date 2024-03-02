#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
class Person
{

    std::string name;
    unsigned int age;
    

public:
    Person() = default;

    Person(const Person &) = default; // disabled copy constructor

    Person(Person &&) = default; // enabled move constructor brand new in C++11

    Person &operator=(const Person &) = default; // disabled assignment operator

    Person &operator=(Person &&) = default; // enabled assignment move operator brand new in C++11

    virtual ~Person() = default;

    Person(std::string name_, unsigned int age_);

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    unsigned int getAge() const { return age; }
    void setAge(unsigned int age_) { age = age_; }

    virtual void display() = 0;
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
};

#endif // PERSON_HPP
