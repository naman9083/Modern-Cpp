#ifndef ELECTRICCAR_HPP
#define ELECTRICCAR_HPP
#include <iostream>
#include "Car.hpp"
class ElectricCar : public Car
{

private:
    int battery_capacity{0};
    float time_to_charge{0.0f};
    float motor_power{0.0f};
    float max_power{0.0f};
    float range{0.0f};

public:
    

    ElectricCar() = default;
    ElectricCar(const ElectricCar &) = delete;            // disabled copy constructor
    ElectricCar(ElectricCar &&) = delete;                 // disabled move constructor brand new in C++11
    ElectricCar &operator=(const ElectricCar &) = delete; // disabled assignment operator
    ElectricCar &operator=(ElectricCar &&) = delete;      // disabled assignment move operator brand new in C++11
    ~ElectricCar() = default;                             // destructor enabled

    ElectricCar(std::string, int, int, float, int, float, float, float, float);

    int batteryCapacity() const;
    void setBatteryCapacity(const int &batteryCapacity);

    float timeToCharge() const;
    void setTimeToCharge(const float &timeToCharge);

    float motorPower() const;
    void setMotorPower(const float &motorPower);

    float maxPower() const;
    void setMaxPower(const float &maxPower);

    float getRange() const;
    void setRange(const float &range_);

    float Drive() override;

    friend std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs);

    void showElectricCarDetails();
};

#endif