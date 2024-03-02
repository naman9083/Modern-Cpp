#ifndef DRIVER_HPP
#define DRIVER_HPP

#include <iostream>
class Driver
{
    std::string name;
    

public:
    Driver() = delete;

    Driver(const Driver &) = delete; // disabled copy constructor

    Driver(Driver &&) = delete; // enabled move constructor brand new in C++11

    Driver &operator=(const Driver &) = delete; // disabled assignment operator

    Driver &operator=(Driver &&) = delete; // enabled assignment move operator brand new in C++11

    ~Driver() = default;
};

#endif // DRIVER_HPP
