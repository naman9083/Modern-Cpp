#ifndef TOURISTVEHICLE_HPP
#define TOURISTVEHICLE_HPP

#include <iostream>
#include <memory>
#include "TouristVehicleType.hpp"
#include "Permit.hpp"

using PermitRef = std::reference_wrapper<Permit>;

class TouristVehicle
{
    std::string number;
    TouristVehicleType vehicleType;
    unsigned int seatCount;
    float perHourBookingCharge;
    PermitRef permit;

public:
    TouristVehicle() = delete;

    TouristVehicle(const TouristVehicle &) = delete; // disabled copy constructor

    TouristVehicle(TouristVehicle &&) = delete; // enabled move constructor brand new in C++11

    TouristVehicle &operator=(const TouristVehicle &) = delete; // disabled assignment operator

    TouristVehicle &operator=(TouristVehicle &&) = delete; // enabled assignment move operator brand new in C++11

    ~TouristVehicle() = default;

    std::string getNumber() const { return number; }
    void setNumber(const std::string &number_) { number = number_; }

    TouristVehicleType getVehicleType() const { return vehicleType; }
    void setVehicleType(const TouristVehicleType &vehicleType_) { vehicleType = vehicleType_; }

    unsigned int getSeatCount() const { return seatCount; }
    void setSeatCount(unsigned int seatCount_) { seatCount = seatCount_; }

    float getPerHourBookingCharge() const { return perHourBookingCharge; }
    void setPerHourBookingCharge(float perHourBookingCharge_) { perHourBookingCharge = perHourBookingCharge_; }

    PermitRef getPermit() const { return permit; }
    void setPermit(const PermitRef &permit_) { permit = permit_; }

    TouristVehicle(std::string number_, TouristVehicleType vehicleType_, unsigned int seatCount_, float perHourBookingCharge_, PermitRef permit_);

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
};

#endif // TOURISTVEHICLE_HPP
