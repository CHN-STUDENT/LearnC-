//Sources:Truck.cpp
#include "Truck.h"

Truck::Truck(std::string color,int tire,std::string engine)
    : Car(color,tire)
{
    setEngine(engine);
    // Engine=engine;
}
Truck::~Truck()
{

}
void Truck::setEngine(std::string engine)
{
    Engine=engine;
}
std::string Truck::getEngine()
{
    return Engine;
}
void Truck::print()
{
    int tire=Car::getTire();
    std::string color=Car::getColor();
    std::cout<<"The truck's color is "<<color<<" ,It has "<<tire<<" tire(s) and "<<Engine<<" engine."<<std::endl;
    //or like this:
    Car::print();
    std::cout<<"It also has "<<Engine<<" engine."<<std::endl;
}
