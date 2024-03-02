#include "Engine.hpp"

std::ostream &operator<<(std::ostream &os, const Engine &rhs)
{
    os << "\nHorsePower: " << rhs.horsePower << "\n"
       << "Torque: " << rhs.torque << "\n";
    return os;
}

Engine::Engine(float torque_, int horsePower_) : torque{torque_}, horsePower{horsePower_}
{
}

float Engine::getTorque() const
{
    return torque;
}

int Engine::getHorsePower() const
{
    return horsePower;
}
void Engine::setHorsePower(const int &horsePower_)
{
    horsePower = horsePower_;
}

