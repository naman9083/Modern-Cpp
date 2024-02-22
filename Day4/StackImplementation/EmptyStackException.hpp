#ifndef EMPTYSTACKEXCEPTION_HPP
#define EMPTYSTACKEXCEPTION_HPP
#include <stdexcept>
#include <string>

class EmptyStackException : public std::exception
{

    std::string msg;
    virtual const char *what() const throw()
    {
        return msg.c_str();
    }

public:
    EmptyStackException() = default;
    EmptyStackException(const EmptyStackException &) = delete;            // disabled copy constructor
    EmptyStackException(EmptyStackException &&) = delete;                 // enabled move constructor brand new in C++11
    EmptyStackException &operator=(const EmptyStackException &) = delete; // disabled assignment operator
    EmptyStackException &operator=(EmptyStackException &&) = delete;      // enabled assignment move operator brand new in C++11
    ~EmptyStackException() = default;
    EmptyStackException(std::string s) : msg{s} {}

public:
};

#endif
