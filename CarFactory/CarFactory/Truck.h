//Headers:Truck.h
#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"

class Truck : public Car
{
public:
	Truck(std::string="",int=4,std::string="Diesel");
	~Truck();
	void setEngine(std::string);
	std::string getEngine();
	void virtual print();
private:
	std::string Engine;
};



#endif
