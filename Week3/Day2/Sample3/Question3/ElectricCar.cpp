#include "ElectricCar.hpp"

ElectricCar::ElectricCar(std::string _name, int acceleration_, int topspeed_, float price_, int bCap, float time_to_charge_, float motor_power_, float max_power_, float range_) : name{_name}, acceleration{acceleration_}, topspeed{topspeed_}, exShowRoomPrice{price_}, battery_capacity{bCap}, time_to_charge{time_to_charge_}, motor_power{motor_power_}, max_power{max_power_}, range{range_}
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
        << "Battery Capacity: " << battery_capacity << "\n"
        << "Time To Charge: " << time_to_charge << "\n"
        << "Motor Power: " << motor_power << "\n"
        << "Max Power: " << max_power << "\n"
        << "Range: " << range << "\n"
        << "Name: " << name << "\n"
        << "Acceleration: " << acceleration << "\n"
        << "Top speed: " << topspeed << "\n"
        << "ExShowRoom Price: " << exShowRoomPrice << "\n"
        << "\n";
}

float ElectricCar::getRange() const
{
    return range;
}
void ElectricCar::setRange(const float &range_)
{
    range = range_;
}
std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs)
{
    os << "Name: " << rhs.name << "\n"
       << "Acceleration: " << rhs.acceleration << "\n"
       << "Topspeed: " << rhs.topspeed << "\n"
       << "ExShowRoomPrice: " << rhs.exShowRoomPrice << "\n"
       << "Battery Capacity: " << rhs.battery_capacity << "\n"
       << "Time To Charge: " << rhs.time_to_charge << "\n"
       << "Motor Power: " << rhs.motor_power << "\n"
       << "Max Power: " << rhs.max_power << "\n"
       << "Range: " << rhs.range

       << "\n";
    return os;
}
