#include<iostream>
#include<vector>

class Vector {
private:
    std::vector<int> data;

public:
    // Default constructor
    Vector() {}

    // Function to get the size of the vector
    size_t size() const {
        return data.size();
    }

    // Access element by index [const and non-const]
    int operator[](size_t index) const {
        return data[index];
    }

    int& operator[](size_t index) {
        return data[index];
    }

    // Add element to vector (non-const member function)
    void push_back(int value) {
        data.push_back(value);
    }

    // To print elements of the vector (const member function)
    void print() const {
        for (int value : data) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create a const Vector object
    const Vector constVector;

    // Use member functions on a const object
    std::cout << "Size: " << constVector.size() << std::endl;
    constVector.print();
    // Accessing the element at index 0 is problematic for a const object.
    // std::cout << "Element at index 0: " << constVector[0] << std::endl;

    // Create a non-const Vector object
    Vector mutableVector;

    // Use non-const member functions on a non-const object
    mutableVector.push_back(10);
    mutableVector.push_back(20);
    mutableVector.print();
    mutableVector[0] = 30;
    mutableVector.print();

    return 0;
}
