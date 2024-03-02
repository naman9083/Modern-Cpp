#include "VendorAccount.hpp"

VendorAccount::VendorAccount(std::string username, std::string vendorName_) : Account(username), vendorName{vendorName_}
{
    drivers = {};
    cabUnits = {};
}
VendorAccount::VendorAccount(std::string username_, std::string vendorName_, const DriverContainer &drivers_, const CabUnitContainer &cabUnits_) : VendorAccount(username_, vendorName_)
{
    drivers = drivers_;
    cabUnits = cabUnits_;
}
std::ostream &operator<<(std::ostream &os, const VendorAccount &rhs)
{
    os << static_cast<const Account &>(rhs)
       << "\nVendorName: " << rhs.vendorName << "\n";
    return os;
}

void VendorAccount::registerAccount()
{
    std::cout << "Vendor verified as per given norms\n";
}
