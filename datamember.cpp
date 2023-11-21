#include<iostream>

class MyClass{
    public:
    int regularData;
    double initializedInPlace = 3.14;
    const int constantData = 42;
    mutable int mutableData = 100;
    static int staticData;
    static constexpr int staticConstexprData = 17;
    MyClass(int value):regularData(value){}
    void modifyMutableData() const{
        mutableData = 200;
    }
};

int MyClass::staticData=50;