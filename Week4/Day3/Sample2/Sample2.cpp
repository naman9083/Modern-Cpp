

#include <iostream>
#include <array>
#include <vector>
#include <numeric>
#include <variant>
#include <algorithm>

class DieselCar
{

    float range;
    int fuelCapacity;
    std::string name;

public:
    DieselCar() = delete;

    DieselCar(const DieselCar &) = delete; // disabled copy constructor

    DieselCar(DieselCar &&) = default; // enabled move constructor brand new in C++11

    DieselCar &operator=(const DieselCar &) = delete; // disabled assignment operator

    DieselCar &operator=(DieselCar &&) = default; // enabled assignment move operator brand new in C++11

    ~DieselCar() = default;

    float getRange() const { return range; }
    void setRange(float range_) { range = range_; }

    int getFuelCapacity() const { return fuelCapacity; }
    void setFuelCapacity(int fuelCapacity_) { fuelCapacity = fuelCapacity_; }

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    friend std::ostream &operator<<(std::ostream &os, const DieselCar &rhs)
    {
        os << "Range: " << rhs.range
           << "\n"
           << "FuelCapacity: " << rhs.fuelCapacity
           << "\n"
           << "Name: " << rhs.name
           << "\n";
        return os;
    }
    DieselCar(float range_, int fCap, std::string name_) : range{range_}, fuelCapacity{fCap}, name{name_} {}
};
class EVCar
{
    std::string name;
    int batteryCapacity;
    float range;

public:
    EVCar() = delete;

    EVCar(const EVCar &) = delete; // disabled copy constructor

    EVCar(EVCar &&) = default; // enabled move constructor brand new in C++11

    EVCar &operator=(const EVCar &) = delete; // disabled assignment operator

    EVCar &operator=(EVCar &&) = default; // enabled assignment move operator brand new in C++11

    ~EVCar() = default;

    int getBatteryCapacity() const { return batteryCapacity; }
    void setBatteryCapacity(int batteryCapacity_) { batteryCapacity = batteryCapacity_; }

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    float getRange() const { return range; }
    void setRange(float range_) { range = range_; }

    friend std::ostream &operator<<(std::ostream &os, const EVCar &rhs)
    {
        os << "Name: " << rhs.name
           << "\n"
           << "BatteryCapacity: " << rhs.batteryCapacity
           << "\n"
           << "Range: " << rhs.range
           << "\n";
        return os;
    }
    EVCar(float range_, int fCap, std::string name_) : range{range_}, batteryCapacity{fCap}, name{name_} {}
};

using Vtype = std::variant<EVCar, DieselCar>;

using Vcon = std::vector<Vtype>;
int main()
{
    Vcon v;

    v.push_back(EVCar(20.0f, 50, "Volkswagen"));
    v.push_back(DieselCar(30.0f, 40, "Toyota"));
    v.push_back(EVCar(30.0f, 30, "Tesla"));
    v.push_back(DieselCar(40.0f, 20, "Hyundai"));
    v.push_back(EVCar(40.0f, 60, "Tata"));
    v.push_back(DieselCar(50.0f, 50, "Honda"));




    float totalRange = std::accumulate(v.begin(), v.end(), 0.0f, [](float acc, const Vtype &v)
                                       {
                                           return acc + std::visit(
                                                            [](auto &&value)
                                                            {
                                                                return value.getRange();
                                                            },
                                                            v);
                                       });


    // auto maxRange = std::max_element(v.begin(),v.end(),[](const Vtype &v1,const Vtype&v2){
    //     return std::visit([](auto &&value){
    //                                      return value.getRange();},v1)<std::visit([](auto &&value){
    //                                                             return value.getRange();
    //                                                         },
    //                                                         v2);});

    auto minRange = std::min_element(v.begin(), v.end(), [](const Vtype &v1, const Vtype &v2)
                                     { return std::visit(

                                        [](auto &&value1,auto &&value2){
                                            return value1.getRange()<value2.getRange();
                                        },
                                        v1,v2
                                     ); });

    std::visit(
        [](auto &&value)
        {
            std::cout << value<<"\n";
        },
        *minRange);


    // for (auto i : v)
    // {
    //     std::visit(
    //         [](auto &&value)
    //         {

    //         },i);

    // }

    std::cout << totalRange;
    std::cout<<'\n';


    //applying STL algorithms on variant which has different member types
    //Is it possible to apply STL algorithms on variant which has different member types?
    //Yes, it is possible to apply STL algorithms on variant which has different member types
    //The only thing to keep in mind is that the lambda function should be able to handle all the types that the variant can hold
    //for example, in the above code, the lambda function in std::accumulate is able to handle both the types of the variant
    float BatteryCapacity = std::accumulate(v.begin(), v.end(), 0.0f, [](float acc, const Vtype &v)
                                       {
                                           if (std::holds_alternative<EVCar>(v))
                                           {
                                               return acc + std::get<EVCar>(v).getBatteryCapacity();
                                           }
                                           else
                                           {
                                               return acc;
                                           }

                                       });

    std::cout << BatteryCapacity;
    //just like 
                                    
    return 0;
}