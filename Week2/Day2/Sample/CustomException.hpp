#ifndef CUSTOMEXCEPTION_HPP
#define CUSTOMEXCEPTION_HPP

#include <stdexcept>
#include <string>
#include <cstring>
class CustomException : public std::exception
{
    std::string _msg;
    virtual const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override
    {
        return _msg.c_str();
    }

public:
    CustomException() = delete;

    CustomException(const CustomException &) = delete; // disabled copy constructor

    CustomException(CustomException &&) = default; // disabled move constructor brand new in C++11

    CustomException &operator=(const CustomException &) = delete; // disabled assignment operator
    CustomException &operator=(CustomException &&) = delete;      // disabled assignment move operator brand new in C++11

    CustomException(std::string msg) : _msg(msg)
    {
    }

    
};

#endif // CUSTOMEXCEPTION_HPP
