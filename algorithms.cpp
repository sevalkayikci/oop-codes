#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    // Creating vector
    std::vector<int> powers(10);

    // Using generate to fill vector with square values
    int ind = 0;
    std::generate(powers.begin(), powers.end(), [&ind]{
        return ind * ind;
    });

    // Sorting vector
    std::sort(powers.begin(), powers.end());

    // Printing the vector
    std::cout << "Vector elements: ";
    for (const auto& element : powers) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Finding minimum and maximum elements
    auto minElement = std::min_element(powers.begin(), powers.end());
    auto maxElement = std::max_element(powers.begin(), powers.end());

    return 0;
}
