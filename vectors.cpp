#include<iostream>
#include<vector>
#include<algorithm>

// Function to print elements in a vector
void printVector(const std::vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << "\t";
    }
    std::cout << std::endl;
}

int main() {
    // Create a vector
    std::vector<int> numbers = {1, 2, 7, 8};

    // Accessing elements
    std::cout << "First element: " << numbers.front() << std::endl;
    std::cout << "Last element: " << numbers.back() << std::endl;

    // Adding elements
    numbers.push_back(12);

    // Print all elements in the vector
    std::cout << "Elements in vector:" << std::endl;
    printVector(numbers);

    // Resizing vector
    numbers.resize(6);

    // Iterating through vector
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << "\t";
    }

    // Inserting element at a specific position
    numbers.insert(numbers.begin() + 2, 4);

    // Print all elements in the vector
    std::cout << "\nElements in vector after insertion:" << std::endl;
    printVector(numbers);

    // Access by index
    std::cout << "Element at 2nd index: " << numbers[2] << std::endl;

    // Sorting elements in vector
    std::sort(numbers.begin(), numbers.end());

    // Erasing element
    numbers.erase(numbers.begin() + 1);

    // Finding elements
    auto it = std::find(numbers.begin(), numbers.end(), 8);

    // Print all elements in the vector
    std::cout << "Elements in vector after sorting and erasing:" << std::endl;
    printVector(numbers);

    // Accessing element by index
    std::cout << "Element at 4th index: " << numbers.at(4) << std::endl;

    // Clearing vector
    numbers.clear();

    // Checking if empty
    bool isEmpty = numbers.empty();

    return 0;
}
