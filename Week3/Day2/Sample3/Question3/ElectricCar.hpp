#ifndef ELECTRICCAR_HPP
#define ELECTRICCAR_HPP
#include <iostream>
class ElectricCar 
{

private:
    int battery_capacity{0};
    float time_to_charge{0.0f};
    float motor_power{0.0f};
    float max_power{0.0f};
    float range{0.0f};
    std::string name{""};

    int acceleration{0};

    int topspeed{0};

    float exShowRoomPrice{0.0f};

    

public:
    ElectricCar() = default;
    ElectricCar(const ElectricCar &) = delete;            // disabled copy constructor
    ElectricCar(ElectricCar &&) = delete;                 // disabled move constructor brand new in C++11
    ElectricCar &operator=(const ElectricCar &) = delete; // disabled assignment operator
    ElectricCar &operator=(ElectricCar &&) = delete;      // disabled assignment move operator brand new in C++11
    ~ElectricCar() = default;                             // destructor enabled

    ElectricCar(std::string, int, int, float, int, float, float, float, float);

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    int getAcceleration() const { return acceleration; }
    void setAcceleration(int acceleration_) { acceleration = acceleration_; }

    int getTopspeed() const { return topspeed; }
    void setTopspeed(int topspeed_) { topspeed = topspeed_; }

    float getExShowRoomPrice() const { return exShowRoomPrice; }
    void setExShowRoomPrice(float exShowRoomPrice_) { exShowRoomPrice = exShowRoomPrice_; }

    
    int batteryCapacity() const;
    void setBatteryCapacity(const int &batteryCapacity);

    float timeToCharge() const;
    void setTimeToCharge(const float &timeToCharge);

    float motorPower() const;
    void setMotorPower(const float &motorPower);

    float maxPower() const;
    void setMaxPower(const float &maxPower);

    float getRange() const;
    void setRange(const float &range_);

    float Drive() ;


    void showElectricCarDetails();

    friend std::ostream &operator<<(std::ostream &os, const ElectricCar &rhs);
};

#endif