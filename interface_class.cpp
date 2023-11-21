#include<iostream>
#include<string>
class Serializable{
    public:
    virtual void serialize() const = 0;
    virtual ~Serializable() = default; //destructor

};

//implementing serializable interface

class Person : public Serializable{
    private:
    std:: string name;
    int age;

    public:
    Person(std::string n, int a):name(std::move(n)),age(a){}

    void serialize() const override{
        std::cout<<"person: name- "<<name<<",age- "<<age<<std::endl;
    }
};

int main(){

    Person person("seval kayikci", 20);
    //use polymorphism
    const Serializable& serializableObject = person;
    serializableObject.serialize();

    return 0;
}