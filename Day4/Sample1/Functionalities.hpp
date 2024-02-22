#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP
#include "Car.hpp"
#include "EmptyContainer.hpp"
#include "IdNotFound.hpp"

#include <array>
#include <memory>

using CarPointer = std::shared_ptr<Car>;// MODERN CPP Feature
using EnginePointer = std::shared_ptr<Engine>;
using Container = std::array<CarPointer, 3>; // MODERN CPP Feature

void createObjects(Container &data);


//  Input: Container
//  output: int
int TotalHorsePower(const Container &data);
/*
    Is this condition true or false:
    All cars in the container have a price above 700000
*/
bool isContainerAllCarAbove700000(const Container &data);
/*
    return the _engine pointer of the Car whose price is lowest
    If multiple Car instances have the same minimum, consider first minimum found

*/

EnginePointer EnginePointerToMinPriceCar(const Container &data);

/*
    find the average torque for engines in the Car Container

*/

float AverageEngineTorque(const Container &data);

/*
    A function to print the model name  of the car whose _id is passed as a parameter is passed
*/

std::string FindCarModelById(const Container &data, const std::string carId);

#endif // FUNCTIONALITIES_HPP
