#include "Permit.hpp"

Permit::Permit(std::string serialNumber_, PermitType pType_, unsigned int permitDurationLeft_)
    : serialNumber{serialNumber_}, pType{pType_}, permitDurationLeft{permitDurationLeft_}
{
}

std::ostream &operator<<(std::ostream &os, const Permit &rhs)
{
    os << "SerialNumber: " << rhs.serialNumber<<"\n"
       << "Permit Type: ";

    switch (rhs.pType)
    {
    case PermitType::LEASE:
        os << "LEASE\n";
        break;
    case PermitType::OWNED:
        os << "OWNED\n";
        break;

    default:
        break;
    }
    os
        << "PermitDurationLeft: " << rhs.permitDurationLeft<<"\n";
    return os;
}
