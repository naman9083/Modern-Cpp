#ifndef ENGINE_HPP
#define ENGINE_HPP
#include <ostream>

class Engine
{
private:
    int horsePower{0};
    float torque{0.0f};

public:
    Engine() = default;

    Engine(const Engine &) = delete; // disabled copy constructor

    Engine(Engine &&) = delete; // disabled move constructor brand new in C++11

    Engine &operator=(const Engine &) = delete; // disabled assignment operator
    Engine &operator=(Engine &&) = delete;      // disabled assignment move operator brand new in C++11

    ~Engine(void) = default;

    Engine(float torque_, int horsePower);
    float getTorque() const ;

    int getHorsePower() const;

    void setHorsePower(const int& horsePower_) ;

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);
};

#endif