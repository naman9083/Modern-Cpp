#ifndef EMPTYCONTAINER_HPP
#define EMPTYCONTAINER_HPP

#include <future>
#include <string>
class EmptyContainerException : public std::future_error
{
    std::string _msg;

public:
    virtual const char *what() const throw() override
    {
        return _msg.c_str();
    }
    EmptyContainerException() = delete;

    EmptyContainerException(const EmptyContainerException &) = delete; // disabled copy constructor

    EmptyContainerException(EmptyContainerException &&) = default; // disabled move constructor brand new in C++11

    EmptyContainerException &operator=(const EmptyContainerException &) = delete; // disabled assignment operator
    EmptyContainerException &operator=(EmptyContainerException &&) = delete;      // disabled assignment move operator brand new in C++11

    EmptyContainerException(std::string msg,std::future_errc futureerr) :future_error(futureerr),_msg{msg}
    {
       
    }

    
};
#endif // EMPTYCONTAINER_HPP

