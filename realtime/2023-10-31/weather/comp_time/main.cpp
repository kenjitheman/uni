#include <iostream>
#include <vector>

int main() {
    std::vector<double> temperatures = {20.5, 22.3, 18.7, 25.0, 21.5, 19.8, 23.7};
    int days = temperatures.size();

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
            highestDay = i++;
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

    std::cout << "Day with the highest temperature: Day " << highestDay << " - "
        << highestTemp << " degrees\n";
    std::cout << "Day with the lowest temperature: Day " << lowestDay << " - "
        << lowestTemp << " degrees\n";
    std::cout << "Number of days with temperature above average: "
        << aboveAverageCount << " days\n";

    return 0;
}
