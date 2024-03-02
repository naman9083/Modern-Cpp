#ifndef VENDOR_HPP
#define VENDOR_HPP

#include <iostream>
#include "Account.hpp"
#include <vector>
#include "Driver.hpp"
#include "CabUnit.hpp"
#include <memory>

using DriverPtr = std::shared_ptr<Driver>;
using DriverContainer = std::vector<DriverPtr>;
using CabUnitPtr = std::shared_ptr<CabUnit>;
using CabUnitContainer = std::vector<CabUnitPtr>;
class VendorAccount : public Account
{
    std::string vendorName;
    DriverContainer drivers;
    CabUnitContainer cabUnits;

public:
    void registerAccount() override;
    VendorAccount() = delete;

    VendorAccount(const VendorAccount &) = delete; // disabled copy constructor

    VendorAccount(VendorAccount &&) = delete; // enabled move constructor brand new in C++11

    VendorAccount &operator=(const VendorAccount &) = delete; // disabled assignment operator

    VendorAccount &operator=(VendorAccount &&) = delete; // enabled assignment move operator brand new in C++11

    ~VendorAccount() = default;

    VendorAccount(std::string username, std::string vendorName);
    VendorAccount(std::string username, std::string vendorName, const DriverContainer &drivers_, const CabUnitContainer &cabUnits_);

    std::string getVendorName() const { return vendorName; }
    void setVendorName(const std::string &vendorName_) { vendorName = vendorName_; }

    DriverContainer getDrivers() const { return drivers; }
    void setDrivers(const DriverContainer &drivers_) { drivers = drivers_; }

    CabUnitContainer getCabUnits() const { return cabUnits; }
    void setCabUnits(const CabUnitContainer &cabUnits_) { cabUnits = cabUnits_; }

    friend std::ostream &operator<<(std::ostream &os, const VendorAccount &rhs);
};

#endif // VENDOR_HPP
