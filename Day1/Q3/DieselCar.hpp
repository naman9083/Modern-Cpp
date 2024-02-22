#ifndef DIESELCAR_HPP
#define DIESELCAR_HPP

class DieselCar
{

private:
public:
    DieselCar(void);

    DieselCar() = default;
    DieselCar(const DieselCar &) = delete;            // disabled copy constructor
    DieselCar(DieselCar &&) = delete;                 // disabled move constructor brand new in C++11
    DieselCar &operator=(const DieselCar &) = delete; // disabled assignment operator
    DieselCar &operator=(DieselCar &&) = delete;      // disabled assignment move operator brand new in C++11
    ~DieselCar() = default;                           // destructor enabled
};

#endif