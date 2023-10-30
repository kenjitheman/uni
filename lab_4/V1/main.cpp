#include <iostream>
#include <limits>

int main() {
    int N;
    std::cout << "[+] Enter the number of integers: ";
    std::cin >> N;
    if (N <= 0) {
        std::cout << "[ERROR] Invalid number of integers" << std::endl;
        return 1;
    }

    int minimum = std::numeric_limits<int>::max();

    for (int i = 0; i < N; ++i) {
        int num;
        std::cout << "[+] Enter integer " << i + 1 << ": ";
        std::cin >> num;

        if (num < minimum) {
            minimum = num;
        }
    }
    if (minimum == std::numeric_limits<int>::max()) {
        std::cout << "[ERROR] No integers were entered" << std::endl;
        return 1;
    }
    std::cout << "[OK] The minimum of the entered integers is: " << minimum
        << std::endl;

    return 0;
}
