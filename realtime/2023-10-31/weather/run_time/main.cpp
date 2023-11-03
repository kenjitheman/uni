#include <iostream>
#include <vector>

int main() {
    int days = 7;
    std::vector<double> temperatures(days);

    for (int i = 0; i < days; ++i) {
        std::cout << "[+] Enter temperature for day (-40 to +50)" << i + 1 << ": ";
        std::cin >> temperatures[i];
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

    std::cout << "[OK] Day with the highest temperature: Day " << highestDay
        << " - " << highestTemp << " degrees\n";
    std::cout << "[OK] Day with the lowest temperature: Day " << lowestDay
        << " - " << lowestTemp << " degrees\n";
    std::cout << "[OK] Number of days with temperature above average: "
        << aboveAverageCount << " days\n";

    return 0;
}
