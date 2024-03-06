#include "Functionalities.hpp"
std::mutex mt;
Fn createObjects = [](VContainer &v)
{
    std::lock_guard<std::mutex> ul(mt);
    v.push_back(std::make_shared<DieselCar>("Ferrari", 100, 400, 20000000.0f, 15.0f, 20.0f));
    v.push_back(std::make_shared<ElectricCar>("ToyotaEv", 100, 300, 900000.0f, 6, 15.0f, 200.0f, 250.0f, 100.0f));
    v.push_back(std::make_shared<DieselCar>("Lamborghini", 160, 500, 30000000.0f, 20.0f, 40.0f));
};

Fn printDetails = [](const VContainer &con)
{
    for (VCar v : con)
    {

        std::visit(
            [](auto &&value)
            {
                std::lock_guard<std::mutex>lk(mt);
                std::cout << *value;
                std::cout << "\n";
            },
            v);
    }
};

Fn printHighestMileage = [](const VContainer &vcon)
{

    float highestMileage = 0.0f;

    for (const VCar v : vcon)
    {
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
        if (std::holds_alternative<DieselCarP>(v))
        {
            std::lock_guard<std::mutex> ul(mt);
           
            DieselCarP ow = std::get<0>(v);
            highestMileage = std::max(highestMileage, ow->getMileage());
        }
    }
    std::cout << "Highest Mileage Of Diesel Car is:" << highestMileage << "\n";
};

std::function<void(ThreadContainer &, fnCon &, VContainer &)> adaptor = [](ThreadContainer &ths, fnCon &fns, VContainer &vcon)
{
    
    for (int i = 0; i < fns.size(); i++)
    {
        ths.push_back(std::thread(fns[i], std::ref(vcon)));

    }
    for (std::thread &th : ths)
        if (th.joinable())
            th.join();
};
std::function<void(fnCon &)> buildFnConainer = [](fnCon &fns)
{
    fns.push_back(createObjects);
    fns.push_back(printDetails);
    fns.push_back(printHighestMileage);
};