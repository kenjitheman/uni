#include <iostream>

int main() {
    int a, b, signal, totalValue = 0;

    std::cout<< "[+] Enter the range [a, b] (two integers separated by a space): ";
    std::cin >> a >> b;

    int numSignals;
    std::cout << "[+] Enter the number of signals: ";
    std::cin >> numSignals;

    for (int i = 0; i < numSignals; ++i) {
        std::cout << "[+] Enter signal " << i + 1 << ": ";
        std::cin >> signal;

        if (signal >= a && signal <= b) {
            totalValue += signal;
        }
    }

    if (totalValue > 0) {
        std::cout << "[OK] Total value of signals in the range [" << a << ", " << b << "]: " << totalValue << std::endl;
    } else {
        std::cout << "[E] No signals found in the specified range." << std::endl;
    }

    return 0;
}
