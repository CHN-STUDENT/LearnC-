//Headers:Car.h
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

/*
    设计抽象类（通常称为 ABC）的目的，是为了给其他类提供一个可以继承的适当的基类。抽象类不能被用于实例化对象，它只能作为接口使用。如果试图实例化一个抽象类的对象，会导致编译错误。
    因此，如果一个 ABC 的子类需要被实例化，则必须实现每个虚函数，这也意味着 C++ 支持使用 ABC 声明接口。如果没有在派生类中重载纯虚函数，就尝试实例化该类的对象，会导致编译错误。
    可用于实例化对象的类被称为具体类。
    如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。纯虚函数是通过在声明中使用 "= 0" 来指定的
    摘自:http://www.runoob.com/cplusplus/cpp-interfaces.html
*/


/*
    从一个类派生出一个类，原始类成为基类，继承类称为派生类
    多态：派生类和基类的行为是不同的，同一个方法行为根据上下文，有两种方法可以实现多态公有继承：
    1.在派生类重新定义基类
    2.使用虚方法
    - C++ Primer Plus 6th
*/

class Car
{
    //这是个抽象类
public:
	Car(std::string color="White",int tire=4) : Color(color),Tire(tire){}; //constuctor 构造函数
	/*
       member initializer 成员初始化器列表
       等价于：
       Car(std::string color="White",int tire=4)
       {
            Color=color;
            Tire=tire;
       }
       - https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/
	*/
	~Car(){};//destructors
	void setColor(std::string);
	std::string getColor() const;
	void setTire(int);
	int getTire() const;
	virtual void print()=0;//纯虚函数
    /*
        A pure virtual function or pure virtual method is a virtual function that is required to be implemented by a derived class that is not abstract" - Wikipedia
        “纯虚函数或纯虚方法是一个虚拟函数，需要由不是抽象的派生类来实现“ - 维基百科
        In programming languages, an abstract type is a type in a nominative type system that cannot be instantiated directly; a type that is not abstract – which can be instantiated – is called a concrete type. Every instance of an abstract type is an instance of some concrete subtype. Abstract types are also known as existential types.
        “在编程语言中，抽象类型是一种不能直接实例化的主导类型系统中的类型;一个不抽象的类型可以被实例化被称为具体类型。”- 维基百科
        C++ Virtual/Pure Virtual Explained:
        https://stackoverflow.com/questions/1306778/c-virtual-pure-virtual-explained
        Virtual function:
        https://en.wikipedia.org/wiki/Virtual_function
    */
private:
	std::string Color;
	int Tire;
};//do not forget ;



#endif
