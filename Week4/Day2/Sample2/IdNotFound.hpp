#ifndef IDNOTFOUND_HPP
#define IDNOTFOUND_HPP


#include <future>
#include <string>
class IdNotFound : public std::future_error
{
    std::string _msg;

public:
    virtual const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override
    {
        return _msg.c_str();
    }
    IdNotFound() = delete;

    IdNotFound(const IdNotFound &) = delete; // disabled copy constructor

    IdNotFound(IdNotFound &&) = default; // enabled move constructor brand new in C++11

    IdNotFound &operator=(const IdNotFound &) = delete; // disabled assignment operator
    IdNotFound &operator=(IdNotFound &&) = delete;      // disabled assignment move operator brand new in C++11

    IdNotFound(std::string msg)
        : std::future_error(std::future_errc::broken_promise)
        
    {
        _msg = msg;
    }

};



#endif // IDNOTFOUND_HPP
