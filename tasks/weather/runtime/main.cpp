#include <iostream>
#include <limits>
#include <vector>
#include <stdexcept>

int main() {
    const int days = 7;
    std::vector<double> temperatures(days);

    for (int i = 0; i < days; ++i) {
        while (true) {
            try {
                std::cout << "[+] Enter temperature for day " << i + 1 << " (must be between -60 and +60): ";
                if (!(std::cin >> temperatures[i]) || temperatures[i] < -60 || temperatures[i] > 60) {
                    throw std::invalid_argument("Invalid input. Temperature must be between -60 and +60.");
                } else {
                    break;
                }
            } catch (const std::invalid_argument& e) {
                std::cout << "[ERROR] " << e.what() << " Try again.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    double total = 0.0;
    for (double temp : temperatures) {
        total += temp;
    }
    double average = total / days;

    double highestTemp = temperatures[0];
    double lowestTemp = temperatures[0];
    int highestDay = 1;
    int lowestDay = 1;

    for (int i = 1; i < days; ++i) {
        if (temperatures[i] > highestTemp) {
            highestTemp = temperatures[i];
            highestDay = i + 1;
        }
        if (temperatures[i] < lowestTemp) {
            lowestTemp = temperatures[i];
            lowestDay = i + 1;
        }
    }

    int aboveAverageCount = 0;
    for (double temp : temperatures) {
        if (temp > average) {
            aboveAverageCount++;
        }
    }

    std::cout << "[+] Day with the highest temperature: Day " << highestDay << " - " << highestTemp << " degrees\n";
    std::cout << "[+] Day with the lowest temperature: Day " << lowestDay << " - "<< lowestTemp << " degrees\n";
    std::cout << "[+] Number of days with temperature above average: " << aboveAverageCount << " days\n";

    return 0;
}
