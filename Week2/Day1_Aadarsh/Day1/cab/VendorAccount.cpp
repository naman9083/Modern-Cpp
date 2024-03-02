#include "VendorAccount.h"

void VendorAccount::RegisterAccount()
{   
    std::cout<<"Registered Account Successfully"<<"\n";
}

VendorAccount::VendorAccount(std ::string userName, std::string venderName)
    : Account(userName), _vendorName{venderName}, _driver{},_cabUnit{} {}

VendorAccount::VendorAccount(std::string userName, std::string venderName,const DriverContainer& driver, const CabUnitContainer& cabUnit)
    : VendorAccount(userName, venderName){
        _driver=driver;
        _cabUnit=cabUnit;
}

std::ostream &operator<<(std::ostream &os, const VendorAccount &rhs) {
    os << static_cast<const Account &>(rhs)
       << " _vendorName: " << rhs._vendorName;
    return os;
}

