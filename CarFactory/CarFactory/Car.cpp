//Sources:Car.cpp
#include "Car.h"

void Car::setColor(std::string color)
{
    Color=color;
}

void Car::setTire(int tire)
{
    Tire=tire;
}

std::string Car::getColor() const
{
    return Color;
}

int Car::getTire() const
{
    return Tire;
}

void Car::print()
{
    std::cout<<"The car's color is "<<Color<<" ,It has "<<Tire<<" tire(s)."<<std::endl;
}
