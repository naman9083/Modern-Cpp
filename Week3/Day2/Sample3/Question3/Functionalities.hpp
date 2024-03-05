#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP
#include "ElectricCar.hpp"
#include "DieselCar.hpp"
#include <vector>
#include <variant>
#include <functional>
#include <memory>
#include <mutex>
#include <thread>

using DieselCarP = std::shared_ptr<DieselCar>;
using ElectricCarP = std::shared_ptr<ElectricCar>;
using VCar = std::variant<DieselCarP, ElectricCarP>;
using VContainer = std::vector<VCar>;
using Fn = std::function<void(VContainer &)>;
using fnCon = std::vector<Fn>;

using ThreadContainer = std::vector<std::thread>;

/*
    College student : createObjects takes on vector of car pointers to store objects of child type

    TCS level : CreateObjects accepts one container of type vector in which each pointer is of car type we will do upcasting to store objects of child type

    Professional Engineer of CPP :
    CreateObjects is a top level or global which takes one arguement of type standard vector to car pointer by reference. This function return void.



// */
// std::string _name, int acceleration_, int topspeed_, float price_, int bCap, float time_to_charge_, float motor_power_, float max_power_, float range_;

extern Fn createObjects;
extern Fn printDetails;
extern Fn printHighestMileage;
extern std::function<void(ThreadContainer &,fnCon &,VContainer &) >adaptor;
extern std::function<void(fnCon &) >buildFnConainer;



#endif // FUNCTIONALITIES_HPP
