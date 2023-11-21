#include<iostream>
//base class
class Shape{
    public:
    virtual void draw()=0;
};

//derived class 1
class Circle : public Shape{
    public:
    void draw() override{
        std::cout<<"drawing circle\n";
    }
};

//derived class 2
class Rectangle : public Shape{
    public:
    void draw() override{
        std::cout<<"drawing rectangle\n";
    }
};
int main(){

    //create objects of different derived types
    Circle Mycircle;
    Rectangle Myrectangle;

    //use polymorphism with reference to base class
    Shape& shape1 = Mycircle;
    Shape& shape2 = Myrectangle;

    //call draw() without knowing specific implement
    shape1.draw();
    shape2.draw();

    return 0;
}