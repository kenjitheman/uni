#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 10;
    int arr[size];
    std::srand(static_cast<unsigned>(std::time(0)));
    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % 100;
    }
    std::cout << "Original Array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
