#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP

#include <iostream>
#include <vector>
#include <functional>

using Container = std::vector<int>;
using FnType = std::function<void(Container&)>;

void adaptor(FnType fn, Container &data);

extern FnType fnTyp1;
extern FnType fnTyp2;
extern FnType fnTyp3;

#endif // FUNCTIONALITIES_HPP
