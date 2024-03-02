#include "ElectricCar.hpp"

ElectricCar::ElectricCar(std::string _name, int acceleration_, int topspeed_, float price_, int bCap, float time_to_charge_, float motor_power_, float max_power_, float range_) : Car(_name, acceleration_, topspeed_, price_), battery_capacity{bCap}, time_to_charge{time_to_charge_}, motor_power{motor_power_}, max_power{max_power_}, range{range_}
{
}

int ElectricCar::batteryCapacity() const
{
    return battery_capacity;
}

void ElectricCar::setBatteryCapacity(const int &batteryCapacity)
{
    this->battery_capacity = battery_capacity;
}

float ElectricCar::timeToCharge() const
{
    return time_to_charge;
}

void ElectricCar::setTimeToCharge(const float &timeToCharge)
{
    this->time_to_charge = timeToCharge;
}

float ElectricCar::motorPower() const
{
    return motor_power;
}

void ElectricCar::setMotorPower(const float &motorPower)
{
    this->motor_power = motorPower;
}

float ElectricCar::maxPower() const
{
    return max_power;
}

void ElectricCar::setMaxPower(const float &maxPower)
{
    max_power = maxPower;
}

float ElectricCar::Drive()
{
    return range;
}

void ElectricCar::showElectricCarDetails()
{
    std::cout
        << "\nBattery_capacity: " << this->battery_capacity
        << "\nTime_to_charge: " << time_to_charge
        << "\nMotor_power: " << motor_power
        << "\nMax_power: " << max_power
        << " \nrange: " << range;
}

inline std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs)
{
    os << static_cast<const Car &>(rhs)
       << "\nbattery_capacity: " << rhs.battery_capacity
       << "\ntime_to_charge: " << rhs.time_to_charge
       << "\nmotor_power: " << rhs.motor_power
       << "\nmax_power: " << rhs.max_power
       << "\nrange: " << rhs.range;
    return os;
}

float ElectricCar::getRange() const
{
    return range;
}
void ElectricCar::setRange(const float &range_)
{
    range = range_;
}