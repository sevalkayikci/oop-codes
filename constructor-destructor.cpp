#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called\n";
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called\n";
    }

    // Member function
    void displayMessage() {
        std::cout << "Hello from MyClass\n";
    }
};

int main() {
    // Creating an object of MyClass
    MyClass myObject;

    // Using a member function
    myObject.displayMessage();

    // Destructor will be automatically called when myObject goes out of scope

    return 0;
}
