#include <algorithm>
#include <iterator>
#include <iostream>

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::reverse(std::begin(arr), std::end(arr));
    for (const auto &element : arr) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;
    return 0;
}
