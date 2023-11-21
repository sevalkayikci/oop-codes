#include<iostream>

class Animal{
    public:
    void eat() const{
        std::cout<<"animal is eating\n";
    }
    void sleep() const{
        std::cout<<"animal is sleeping\n";
    }
};

class Dog : public Animal{
    public:
    void bark() const{
        std::cout<<"dog is barking\n";
    }

};

int main(){

    Dog myDog;
     myDog.eat();
     myDog.sleep();
     myDog.bark();

    return 0;
}