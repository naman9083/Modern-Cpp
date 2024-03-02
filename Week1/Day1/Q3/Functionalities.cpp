#include "Functionalities.hpp"
#include "ElectricCar.hpp"
void createObjects(std::vector<Car *> &data)
{

    data.push_back(new ElectricCar("NexonEV", 80, 150, 1870000.0f, 33, 2, 300, 600, 320));
    data.push_back(new ElectricCar("XUV400", 70, 140, 1670000.0f, 29, 2, 280, 550, 320));

}

void deleteObjects(std::vector<Car *> &data)
{
    for(Car *p:data){
        delete p;
    }
}
