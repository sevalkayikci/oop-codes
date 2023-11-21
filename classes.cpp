#include<iostream>

//base class
class Shape{
    public:
    void display() const{
        std::cout<<"this is shape\n";
    }
};

//publicly inherited class
class Circle : public Shape{
    public:
    void display() const{
        std::cout<<"this is circle\n";
    }
};

//privately inherited class
class Square : private Shape{
    private:
    void display() const{
        std::cout<<"this is square\n";
    }
};

int main(){
    Circle circle;//public inheritance
    circle.display();

    Square square;//private inheritance
    //square.display();//error
}