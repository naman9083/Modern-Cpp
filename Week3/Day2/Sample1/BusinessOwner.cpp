#include "BusinessOwner.hpp"

float BusinessOwner::calculateTaxAmount()
{
    return (revenue - expenses) * .3f;
}

BusinessOwner::BusinessOwner(std::string name_, std::string gstNumber_, float revenue_, float expenses_)
    : name{name_}, gstNumber{gstNumber_}, revenue{revenue_}, expenses{expenses_}
{
}
