#ifndef CAR_HPP
#define CAR_HPP
#include <iostream>
#include "Engine.hpp"
#include "CarType.hpp"

class Car
{
private:
	std::string carId{""};
	float _price{0.0f};
	std::string _model{""};
	Engine *engine;
	CarType c1;


public:
	Car() = delete;

	Car(const Car &) = delete; // disabled copy constructor

	Car(Car &&) = delete; // disabled move constructor brand new in C++11

	Car &operator=(const Car &) = delete; // disabled assignment operator
	Car &operator=(Car &&) = delete;	  // disabled assignment move operator brand new in C++11

	~Car() = default;
	Car(CarType c1,std::string carId, float price, std::string model, Engine *engine);
	Car(CarType c1,std::string carId, std::string model, Engine *engine);

	std::string getCarId() const ;

	float price() const ;
	void setPrice(float price) ;

	std::string model() const ;

	Engine *getEngine() const ;

	friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

	
};

#endif