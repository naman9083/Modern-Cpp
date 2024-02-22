#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>

class Car
{
private:
    std::string name{""};

    int acceleration{0};

    int topspeed{0};

    float exShowRoomPrice{0.0f};

    float costOfRegistration{0.0f};

    float roadTax{0.0f};

    float insurance{0.0f};

    float onRoadPrice{0.0f};

public:
    std::string getName() const;

    void setName(const std::string &name_);

    int getAcceleration() const;

    void setAcceleration(const int &acceleration_);

    int getTopspeed() const;

    void setTopspeed(const int &topspeed_);

    float getExShowRoomPrice() const;

    void setExShowRoomPrice(const float &exShowRoomPrice_);

    float getCostOfRegistration() const;

    void setCostOfRegistration(const float &costOfRegistration_);

    float getRoadTax() const;

    void setRoadTax(const float &roadTax_);

    float getInsurance() const;

    void setInsurance(const float &insurance_);

    float getOnRoadPrice() const;

    void setOnRoadPrice(const float &onRoadPrice_);

    Car() = default;

    Car(const Car &) = delete; // disabled copy constructor

    Car(Car &&) = delete; // disabled move constructor brand new in C++11

    Car &operator=(const Car &) = delete; // disabled assignment operator
    Car &operator=(Car &&) = delete;      // disabled assignment move operator brand new in C++11

    virtual ~Car() = default; // destructor enabled

    Car(std::string name, int acceleration, int topspeed, float price);

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    virtual float Drive() = 0;
};

#endif