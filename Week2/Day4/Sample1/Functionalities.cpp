#include "Functionalities.hpp"

FnType fnTyp1 = [](Container &data)
{
    std::cout << data.front() << "\n";
};

FnType fnTyp2 = [](Container &data)
{
    std::cout << data.back() << "\n";
};

FnType fnTyp3 = [](Container &data)
{
    std::cout << data.size() << "\n";
};

void adaptor(FnType fn, Container &data)
{
    if(data.empty())
        throw std::runtime_error("Error\n");
    fn(data);
}