#include <iostream>
#include <random>

int main() {
    const int arrSize = 10;
    int arr[arrSize];
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < arrSize; ++i) {
        arr[i] = dis(gen);
    }

    for (int i = 0; i < arrSize; ++i) {
        std::cout << arr[i];
        if (i != arrSize - 1) {
            std::cout << ", " << std::flush;
        }
    }

    return 0;
}
