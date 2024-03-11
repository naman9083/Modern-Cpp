#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP
#include "Car.hpp"
#include "EmptyContainer.hpp"
#include "IdNotFound.hpp"
#include <unordered_map>



// using Container = std::vector<Car *>;
using CarP = std::shared_ptr<Car>;

using Container = std::unordered_map<std::string, CarP>;

void createObjects(Container &data);

void deleteObjects(Container &data);

int TotalHorsePower(const Container &data);

bool isContainerAllCarAbove700000(const Container &data);

EngineP EnginePointerToMinPriceCar(const Container &data);

float AverageEngineTorque(const Container &data);

std::string FindCarModelById(const Container &data, const std::string carId);

#endif // FUNCTIONALITIES_HPP
