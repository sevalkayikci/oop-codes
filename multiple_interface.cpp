#include<iostream>

//first base class
class Shape{
    public:
    virtual void draw() const{
        std::cout<<"drawing shape\n";
    }
};

//second base class
class Color{
    public:
    virtual void applyColor() const{
        std::cout<<"applying color\n";
    }
};

//derived class with multiple inheritance
class coloredShape: public Shape, public Color{
    public:
    void draw() const override{
        std::cout<<"drawing colored shape\n";
    }
};

int main(){
    coloredShape coloredshape;
    coloredshape.draw();
    coloredshape.applyColor();
    return 0;
}