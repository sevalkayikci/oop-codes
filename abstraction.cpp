#include<iostream>

class Shape{
    public:
    virtual void draw()=0;
};

class Circle : public Shape{
    public:
    void draw() override{
        std::cout<<"drawing circle\n";
    }
};
int main(){

    Circle circle;
    circle.draw();

    return 0;
}