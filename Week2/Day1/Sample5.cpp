#include <iostream>
class boiler
{
public:
    boiler() = delete;

    boiler(const boiler &) = delete; // disabled copy constructor

    boiler(boiler &&) = delete; // enabled move constructor brand new in C++11

    boiler &operator=(const boiler &) = delete; // disabled assignment operator

    boiler &operator=(boiler &&) = delete; // enabled assignment move operator brand new in C++11

    ~boiler() = default;
};