#include<iostream>
#include<string>
#include<map>

class Reflectable {
public:
    virtual std::string getClassName() const = 0;
    virtual Reflectable* createInstance() const = 0;
};

class MyClass : public Reflectable {
public:
    std::string getClassName() const override {
        return "MyClass";
    }

    Reflectable* createInstance() const override {
        return new MyClass();
    }
};

int main() {
    std::map<std::string, Reflectable*> classRegistry;

    // Register MyClass
    MyClass myInstance;
    classRegistry["MyClass"] = &myInstance;

    // Create an instance dynamically based on the class name
    Reflectable* newInstance = classRegistry["MyClass"]->createInstance();

    // Do something with the new instance...

    // Don't forget to delete the dynamically allocated instance
    delete newInstance;

    return 0;
}
