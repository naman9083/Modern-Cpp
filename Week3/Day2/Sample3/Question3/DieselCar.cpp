#include "DieselCar.hpp"

DieselCar::DieselCar(std::string name_, int acceleration_, int topspeed_, float exShowRoomPrice_, float mileage_, float fuelCapacity_)
    : name{name_}, acceleration{acceleration_}, topspeed{topspeed_}, exShowRoomPrice{exShowRoomPrice_}, mileage{mileage_}, fuelCapacity{fuelCapacity_}
{
}
std::ostream &operator<<(std::ostream &os, const DieselCar &rhs)
{
    os << "Name: " << rhs.name << "\n"
       << "Acceleration: " << rhs.acceleration << "\n"
       << "Topspeed: " << rhs.topspeed << "\n"
       << "ExShowRoomPrice: " << rhs.exShowRoomPrice << "\n"
       << "Mileage: " << rhs.mileage << "\n"
       << "FuelCapacity: " << rhs.fuelCapacity << "\n";
    return os;
}
