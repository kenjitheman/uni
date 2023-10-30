#include <iostream>
#include <random>

int main() {
    const int arraySize = 10;
    int myArray[arraySize];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < arraySize; ++i) {
        myArray[i] = dis(gen);
    }

    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i];
        if (i != arraySize - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}
