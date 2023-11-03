#include <iostream>
#include <limits>
#include <vector>

int main() {
    const int numberOfClasses = 10;

    std::vector<int> classAverages(numberOfClasses);

    for (int i = 0; i < numberOfClasses; ++i) {
        std::cout << "[+] Enter the average score for class " << i + 1 << ": ";
        std::cin >> classAverages[i];
        if (std::cin.fail()) {
            std::cout << "[E] Invalid input\n";
            return 1;
        }

        while (std::cin.fail() || classAverages[i] < 0 || classAverages[i] > 100) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "[E] Invalid input\nEnter a valid score between 0 and 100: ";
            std::cin >> classAverages[i];
        }
    }

    int highestAverage = -1;

    for (int average : classAverages) {
        if (average > highestAverage) {
            highestAverage = average;
        }
    }

    std::cout << "[OK] Classes with the highest average score: ";
    for (int i = 0; i < numberOfClasses; ++i) {
        if (classAverages[i] == highestAverage) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
