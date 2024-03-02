#ifndef UNIQUE_POINTER_HPP
#define UNIQUE_POINTER_HPP

#include <iostream>

template <typename T>
class unique_pointer
{
private:
    T *_mptr;

public:
    unique_pointer(T *mptr) : _mptr{mptr}
    {
        ptr = nullptr;
    }
    unique_pointer() = default;

    unique_pointer(const T *&) = delete; // disabled copy constructor

    unique_pointer(T *&&) = default; // disabled move constructor brand new in C++11

    unique_pointer &operator=(const T *&) = delete; // disabled assignment operator
    unique_pointer &operator=(T *&&) = default;

    void release()
    {
        delete _mptr;
        _mptr = nullptr;
    }
    ~unique_pointer()
    {
        delete _mptr;
        _mptr = nullptr;
    }
};

#endif // UNIQUE_POINTER_HPP
