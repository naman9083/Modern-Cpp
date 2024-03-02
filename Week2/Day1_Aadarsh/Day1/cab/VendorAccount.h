#ifndef VENDORACCOUNT_H
#define VENDORACCOUNT_H

#include<iostream>
#include "Account.h"
#include "Driver.h"
#include "CabUnit.h"
#include<vector>

using CabUnitContainer=std::vector<CabUnit*>;
using DriverContainer =std::vector<Driver*>;
class VendorAccount:public Account
{
private:
    std::string _vendorName;
    DriverContainer _driver{};
    CabUnitContainer _cabUnit{};
public:
    VendorAccount()=delete;
    ~VendorAccount()=default;
    VendorAccount(const VendorAccount&)=delete;
    VendorAccount(VendorAccount&&)=delete;
    VendorAccount& operator =(const VendorAccount&)=delete;
    VendorAccount& operator =(VendorAccount&&)=delete;

    void RegisterAccount() override;
    VendorAccount(std::string userName,std::string venderName);

    VendorAccount(std::string userName,std::string venderName,const DriverContainer& driver, const CabUnitContainer& cabunit);



    friend std::ostream &operator<<(std::ostream &os, const VendorAccount &rhs);

    
};

#endif // VENDORACCOUNT_H
