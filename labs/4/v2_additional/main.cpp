#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <vector>

int main() {
    int N;
    std::cout << "[+] Enter the number of integers to generate: ";
    std::cin >> N;
    if (N <= 0) {
        std::cerr << "[ERROR] Invalid number of integers to generate." << std::endl;
        return 1;
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::vector<int> generatedNumbers;
    std::cout << "[+] Generated sequence: ";
    for (int i = 0; i < N; ++i) {
        int num = std::rand() % 100;
        generatedNumbers.push_back(num);
        std::cout << num << " ";
    }

    int minimum = std::numeric_limits<int>::max();

    for (int num : generatedNumbers) {
        if (num < minimum) {
            minimum = num;
        }
    }
    if (minimum == std::numeric_limits<int>::max()) {
        std::cerr << "[ERROR] No minimum found." << std::endl;
        return 1;
    }

    std::cout << "\n[OK] The minimum of the generated integers is: " << minimum << std::endl;

    return 0;
}
