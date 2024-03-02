#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP
#include <iostream>
#include <memory>
#include <vector>

#include "TouristVehicle.hpp"
#include "CustomException.hpp"
using TouristVehiclePtr = std::shared_ptr<TouristVehicle>;

using TouristContainer = std::vector<TouristVehiclePtr>;


using PermitPtr = std::shared_ptr<Permit>;

using PermitContainer = std::vector<PermitPtr>;



void createObject(PermitContainer &data);
void createObject(TouristContainer &data);

void createObject(TouristContainer &data,const PermitContainer &pData);



TouristContainer firstN(const TouristContainer &data, int N);

float averageBookingCharge(const TouristContainer &data,TouristVehicleType type);

std::string returnSerialNumberWithMaxBookingCharge(const TouristContainer &data);

#endif // FUNCTIONALITIES_HPP
