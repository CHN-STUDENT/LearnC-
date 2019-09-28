//Sources:sportCar.cpp
#include "sportCar.h"

void sportCar::setDoor(int door)
{
    Door=door;
}

int sportCar::getDoor() const
{
    return Door;
}

void sportCar::print()
{
    //std::cout<<"The sportCar's color is "<<Color<<" ,It has "<<Tire<<" tire(s) and "<<Door<<" Door(s)."<<std::endl;
    //This is error,the complier will tell it is private,but we can use like this
    int tire=Car::getTire();
    std::string color=Car::getColor();
    std::cout<<"The sportCar's color is "<<color<<" ,It has "<<tire<<" tire(s) and "<<Door<<" door(s)."<<std::endl;
    //or like this:
    Car::print();
    std::cout<<"It also has "<<Door<<" door(s)."<<std::endl;
}
