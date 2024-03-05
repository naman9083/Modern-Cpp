#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP
#include <iostream>
#include <variant>
#include <array>
#include "Employee.hpp"
#include "BusinessOwner.hpp"


using Vtype = std::variant<Employee *, BusinessOwner *> ;
using Container = std::array<Vtype, 2> ;

// Scenario 1
void CommonAction(Container &con);
//Scenario 2
void UnCommonAction(Container &con);

#endif // FUNCTIONALITIES_HPP
