#ifndef PERMIT_HPP
#define PERMIT_HPP

#include <iostream>
#include "PermitType.hpp"
class Permit
{

    std::string serialNumber;
    PermitType pType;
    unsigned int permitDurationLeft;

public:
    Permit() = delete;

    Permit(const Permit &) = delete; // disabled copy constructor

    Permit(Permit &&) = delete; // enabled move constructor brand new in C++11

    Permit &operator=(const Permit &) = delete; // disabled assignment operator

    Permit &operator=(Permit &&) = delete; // enabled assignment move operator brand new in C++11

    ~Permit() = default;

    std::string getSerialNumber() const { return serialNumber; }
    void setSerialNumber(const std::string &serialNumber_) { serialNumber = serialNumber_; }

    PermitType getPType() const { return pType; }
    void setPType(const PermitType &pType_) { pType = pType_; }

    unsigned int getPermitDurationLeft() const { return permitDurationLeft; }
    void setPermitDurationLeft(unsigned int permitDurationLeft_) { permitDurationLeft = permitDurationLeft_; }

    Permit(std::string serialNumber_, PermitType pType_, unsigned int permitDurationLeft_);

    friend std::ostream &operator<<(std::ostream &os, const Permit &rhs);
};

#endif // PERMIT_HPP
