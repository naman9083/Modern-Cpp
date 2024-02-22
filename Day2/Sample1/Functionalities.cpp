#include "Functionalities.hpp"
void createObjects(Container &data)
{
    data[0] = new Car(CarType::SEDAN, "c101", 779000.0f, "Dzire", new Engine{111.0f, 300});
    data[1] = new Car(CarType::SUV, "c301", "XUV700", new Engine{180.0f, 400});
    data[2] = new Car(CarType::HATCHBATCH, "c201", "NEXON", new Engine{133.0f, 400});
}

void deleteObjects(Container &data)
{
    if (data.empty())
    {
        throw EmptyContainerException("Data is empty\n");
    }
    for (Car *c : data)
    {
        delete c->getEngine(); // due to composition rules
        delete c;
    }
}

int TotalHorsePower(const Container &data)
{
    if (data.empty())
    {
        EmptyContainerException("Data is empty\n");
    }
    int total = 0;
    for (Car *c : data)
    {

        total += c->getEngine()->getHorsePower();
    }
    return total;
}

bool isContainerAllCarAbove700000(const Container &data)
{
    if (data.empty())
    {
        EmptyContainerException("Data is empty\n");
    }
    for (Car *c : data)
    {
        if (c->price() <= 700000.0f)
            return false;
    }
    return true;
}

Engine *EnginePointerToMinPriceCar(const Container &data)
{
    if (data.empty())
    {
        EmptyContainerException("Data is empty\n");
    }
    float min_price = data[0]->price();
    Engine *e = data[0]->getEngine();
    for (Car *c : data)
    {
        if (c->price() < min_price)
        {
            min_price = c->price();
            e = c->getEngine();
        }
    }
    return e;
}

float AverageEngineTorque(const Container &data)
{
    if (data.empty())
    {
        EmptyContainerException("Data is empty\n");
    }
    float average = 0.0;
    for (Car *c : data)
    {
        average += c->getEngine()->getTorque();
    }
    return (float)(average/3.0);
    
}

std::string FindCarModelById(const Container &data, const std::string carId)
{
    if (data.empty())
    {
        EmptyContainerException("Data is empty\n");
    }

    std::string id="";

    for(Car *c:data){
        if(c->getCarId()==carId)return c->model();
    }
    if(id=="")throw IdNotFound("No car is found with given ID");
    
    return id;
}


