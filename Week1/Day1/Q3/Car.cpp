#include "Car.hpp"

std::string Car::getName() const
{
    return this->name;
}

void Car::setName(const std::string &name_)
{
    this->name = name;
}

int Car::getAcceleration() const
{
    return this->acceleration;
}

void Car::setAcceleration(const int &acceleration_)
{
    this->acceleration = acceleration;
}

int Car::getTopspeed() const
{
    return this->topspeed;
}

void Car::setTopspeed(const int &topspeed_)
{
    this->topspeed = topspeed;
}

float Car::getExShowRoomPrice() const
{
    return this->exShowRoomPrice;
}

void Car::setExShowRoomPrice(const float &exShowRoomPrice_)
{
    this->exShowRoomPrice = exShowRoomPrice;
}

float Car::getCostOfRegistration() const
{
    return this->costOfRegistration;
}

void Car::setCostOfRegistration(const float &costOfRegistration_)
{
    this->costOfRegistration = costOfRegistration;
}

float Car::getRoadTax() const
{
    return this->roadTax;
}

void Car::setRoadTax(const float &roadTax_)
{
    this->roadTax = roadTax;
}

float Car::getInsurance() const
{
    return this->insurance;
}

void Car::setInsurance(const float &insurance_)
{
    this->insurance = insurance;
}

float Car::getOnRoadPrice() const
{
    return this->onRoadPrice;
}

void Car::setOnRoadPrice(const float &onRoadPrice_)
{
    this->onRoadPrice = onRoadPrice;
}
std::ostream &operator<<(std::ostream &os, const Car &rhs)
{
    os << "name: " << rhs.name
       << " acceleration: " << rhs.acceleration
       << " topspeed: " << rhs.topspeed
       << " exShowRoomPrice: " << rhs.exShowRoomPrice
       << " costOfRegistration: " << rhs.costOfRegistration
       << " roadTax: " << rhs.roadTax
       << " insurance: " << rhs.insurance
       << " onRoadPrice: " << rhs.onRoadPrice;
    return os;
}

// Car::Car()
// {
//     this->acceleration = 0;
//     this->costOfRegistration = 0.0f;
//     this->topspeed = 0;
//     this->name = "";
//     this->onRoadPrice = 0.0f;
//     std::cout << "Default constructor\n";
// }

Car::Car(std::string _name, int acceleration_, int topspeed_, float price_)
    : name{_name}, acceleration{acceleration_},
      topspeed{topspeed_}, exShowRoomPrice{price_}
{}
