#include<iostream>
#include<typeinfo>

class Base{
    public:
    virtual ~Base(){}
};

class Derived : public Base{};

int main(){

    Base* basePtr = new Derived();
    const std:: type_info& typeInfo = typeid(*basePtr);
    std::cout<<"object typeis : "<<typeInfo.name()<<std::endl;

    delete basePtr;
    return 0;

}