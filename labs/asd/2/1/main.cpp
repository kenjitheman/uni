#include <iostream>
#include <ostream>

int main() {
    const int SIZE = 20;
    int arr[SIZE];
    int even_nums = 0;
    int odd_nums = 0;

    std::cout << "enter " << SIZE << " numbers:\n";

    for (int i = 0; i < SIZE; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            even_nums++;
        } else {
            odd_nums++;
        }
    }

    std::cout << "odd elements: " << odd_nums << std::endl;
    std::cout << "even elements: " << odd_nums << std::endl;

    return 0;
}
