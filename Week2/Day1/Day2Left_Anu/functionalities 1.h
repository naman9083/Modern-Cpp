#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include <iostream>
#include "Employee.h"
#include "Project.h"

using Container1 = std::array<Employee*,3>;
using Container2 = std::array<Project*,3>;

void CreateObjects(Container1 &data1, Container2 &data2);

//void CreateObjects(std::vector<Employee*> &employees, std::vector<Project*> &projects);

// void DeleteObjects(std::vector<Employee*> &employees, std::vector<Project*>& projects);
void DeleteObjects(const Container1 &data1);

void DeleteObjects1(const Container2 &data2);

#endif // FUNCTIONALITIES_H