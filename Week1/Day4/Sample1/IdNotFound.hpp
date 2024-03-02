#ifndef IDNOTFOUND_HPP
#define IDNOTFOUND_HPP


#include <stdexcept>
#include <cstring>
class IdNotFound : public std::exception
{
    char *_msg;
    virtual const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override
    {
        return _msg;
    }

public:
    IdNotFound() = delete;

    IdNotFound(const IdNotFound &) = delete; // disabled copy constructor

    IdNotFound(IdNotFound &&) = default; // enabled move constructor brand new in C++11

    IdNotFound &operator=(const IdNotFound &) = delete; // disabled assignment operator
    IdNotFound &operator=(IdNotFound &&) = delete;      // disabled assignment move operator brand new in C++11

    IdNotFound(const char *msg)
    {
        msg = new char[strlen(msg)];
        strcpy(_msg, msg);
    }

    ~IdNotFound()
    {
        delete _msg;
    }
};



#endif // IDNOTFOUND_HPP
