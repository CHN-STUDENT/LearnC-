//Headers:sportCar.h
#ifndef SPORTCAR_H
#define SPORTCAR_H

#include "Car.h"

class sportCar : public Car
{
//继承Car类
public:
	sportCar(std::string color="Black", int tire=4, int door=2): Car(color,tire),Door(door) {};
	//将参数从派生类构造函数传递给基类构造函数
    /*
        派生类构造函数
        首先创建基类对象
        派生类构造函数应通过成员初始化列表传递给基类构造函数
        派生类构造函数应初始化派生类新增数据成员
        - C++ Primer Plus 6th
    */
	~sportCar(){};
	void setDoor(int);
	int getDoor() const;
	void virtual print();
private:
	int Door;
};


#endif
