#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP

#include <vector>
#include "Car.hpp"
/*
    College student : createObjects takes on vector of car pointers to store objects of child type

    TCS level : CreateObjects accepts one container of type vector in which each pointer is of car type we will do upcasting to store objects of child type

    Professional Engineer of CPP :
    CreateObjects is a top level or global which takes one arguement of type standard vector to car pointer by reference. This function return void.



*/
void createObjects(std::vector<Car *>& data);
void deleteObjects(std::vector<Car *>& data);

#endif // FUNCTIONALITIES_HPP
