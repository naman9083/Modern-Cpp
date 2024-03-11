#ifndef FUNCTIONALITIES_HPP
# define FUNCTIONALITIES_HPP

#include "Copy_Elision_Employee.hpp"
#include <memory>
#include <algorithm>
#include <numeric>
#include <vector>
#include <functional>

using EmployeeRaw = Employee *;
using EmployeeSmart = std::shared_ptr<Employee>;

using EmployeeRawCon = std::vector<EmployeeRaw>;
using EmployeeSmartCon = std::vector<EmployeeSmart>;

using EmployeeContainer = std::vector<Employee>;

void createEmployees(EmployeeContainer &data);

void createEmployeesPointer(EmployeeRawCon &data);
void createEmployeesSmartPointer(EmployeeSmartCon &data);
void deleteData(EmployeeRawCon &data);


#endif