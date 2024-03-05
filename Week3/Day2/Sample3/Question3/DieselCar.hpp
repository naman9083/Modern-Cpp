#ifndef DIESELCAR_HPP
#define DIESELCAR_HPP
#include <iostream>
class DieselCar
{

    std::string name{""};

    int acceleration{0};

    int topspeed{0};

    float exShowRoomPrice{0.0f};

    float mileage{0.0f};
    float fuelCapacity{0.0f};

private:
public:
    

    DieselCar() = default;
    DieselCar(const DieselCar &) = delete;            // disabled copy constructor
    DieselCar(DieselCar &&) = delete;                 // disabled move constructor brand new in C++11
    DieselCar &operator=(const DieselCar &) = delete; // disabled assignment operator
    DieselCar &operator=(DieselCar &&) = delete;      // disabled assignment move operator brand new in C++11
    ~DieselCar() = default;                           // destructor enabled

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    int getAcceleration() const { return acceleration; }
    void setAcceleration(int acceleration_) { acceleration = acceleration_; }

    int getTopspeed() const { return topspeed; }
    void setTopspeed(int topspeed_) { topspeed = topspeed_; }

    float getExShowRoomPrice() const { return exShowRoomPrice; }
    void setExShowRoomPrice(float exShowRoomPrice_) { exShowRoomPrice = exShowRoomPrice_; }

    float getMileage() const { return mileage; }
    void setMileage(float mileage_) { mileage = mileage_; }

    float getFuelCapacity() const { return fuelCapacity; }
    void setFuelCapacity(float fuelCapacity_) { fuelCapacity = fuelCapacity_; }

    DieselCar(std::string name_, int acceleration_, int topspeed_, float exShowRoomPrice_, float mileage_, float fuelCapacity_);

    friend std::ostream &operator<<(std::ostream &os, const DieselCar &rhs);
};

#endif