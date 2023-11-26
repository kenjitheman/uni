#include <iostream>
#include <stdexcept>

int main() {
    try {
        int a, b, signal, totalValue = 0;

        std::cout << "[+] Enter the range [a, b] (two integers separated by a space): ";
        if (!(std::cin >> a >> b)) {
            throw std::invalid_argument("Invalid input. Please enter valid numerical values.");
        }

        int numSignals;
        std::cout << "[+] Enter the number of signals: ";
        if (!(std::cin >> numSignals)) {
            throw std::invalid_argument("Invalid input. Please enter a valid numerical value.");
        }

        for (int i = 0; i < numSignals; ++i) {
            std::cout << "[+] Enter signal " << i + 1 << ": ";
            if (!(std::cin >> signal)) {
                throw std::invalid_argument("Invalid input. Please enter a valid numerical value.");
            }

            if (signal >= a && signal <= b) {
                totalValue += signal;
            }
        }

        if (totalValue > 0) {
            std::cout << "[OK] Total value of signals in the range [" << a << ", " << b << "]: " << totalValue << std::endl;
        } else {
            std::cout << "[E] No signals found in the specified range." << std::endl;
        }

    } catch (const std::invalid_argument& e) {
        std::cerr << "[E] " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
