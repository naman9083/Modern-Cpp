#ifndef CABUNIT_HPP
#define CABUNIT_HPP


#include <iostream>
class CabUnit
{
public:
    CabUnit() = delete;

    CabUnit(const CabUnit &) = delete; // disabled copy constructor

    CabUnit(CabUnit &&) = delete; // enabled move constructor brand new in C++11

    CabUnit &operator=(const CabUnit &) = delete; // disabled assignment operator

    CabUnit &operator=(CabUnit &&) = delete; // enabled assignment move operator brand new in C++11

    ~CabUnit() = default;
};
#endif // CABUNIT_HPP
