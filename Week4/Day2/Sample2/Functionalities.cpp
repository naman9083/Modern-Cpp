#include "Functionalities.hpp"
void createObjects(Container &data)
{
    data.emplace("c101", std::make_shared<Car>(CarType::SEDAN, "c101", 779000.0f, "Dzire", std::make_shared<Engine>(111.0f, 300)));
    data.emplace("c201", std::make_shared<Car>(CarType::SUV, "c301", "XUV700", std::make_shared<Engine>(180.0f, 400)));
    data.emplace("c301", std::make_shared<Car>(CarType::HATCHBATCH, "c201", "NEXON", std::make_shared<Engine>(133.0f, 400)));
}

int TotalHorsePower(const Container &data)
{
    if (data.empty())
    {
        throw EmptyContainerException("Data is empty\n", std::future_errc::no_state);
    }

    return std::accumulate(data.begin(), data.end(), 0.0f, [](float answer, const std::pair<std::string, CarP> &entry)
                           { return answer + entry.second->getEngine()->getHorsePower(); });
}

bool isContainerAllCarAbove700000(const Container &data)
{
    if (data.empty())
    {
        EmptyContainerException("Data is empty\n", std::future_errc::no_state);
    }
    return std::all_of(data.begin(), data.end(), [](const std::pair<std::string, CarP> &entry)
                       { return entry.second->price() > 700000; });
}

EngineP EnginePointerToMinPriceCar(const Container &data)
{
    if (data.empty())
    {
        EmptyContainerException("Data is empty\n", std::future_errc::no_state);
    }
    auto itr = std::min_element(data.begin(), data.end(),[](const std::pair<std::string, CarP> &entry1, const std::pair<std::string, CarP> &entry2){return entry1.second->price() < entry2.second->price();});
    return itr->second->getEngine();
}

float AverageEngineTorque(const Container &data)
{
    if (data.empty())
    {
        EmptyContainerException("Data is empty\n", std::future_errc::no_state);
    }
    std::size_t count{0};
    float average = std::accumulate(data.begin(), data.end(), 0.0f, [&](float a, const std::pair<std::string, CarP> &entry)
                                    {
        if(entry.second->getEngine()){
            count++;
            return a + entry.second->getEngine()->getTorque();
        } 
        else 
            return a; });

    return (average / static_cast<float>(count));
}

std::string FindCarModelById(const Container &data, const std::string carId)
{
    if (data.empty())
    {
        EmptyContainerException("Data is empty\n", std::future_errc::no_state);
    }

    
    auto itr = std::find_if(data.begin(), data.end(), [&](const std::pair<std::string, CarP> &entry)
                 { return entry.second->getCarId() == carId; });
    if (itr == data.end())
        throw IdNotFound("No car is found with given ID");

    return itr->second->model();
}
