#include <iostream>
#include <limits>
#include <vector>

int main() {
    const int numOfClasses = 10;

    std::vector<int> classAvg(numOfClasses);

    for (int i = 0; i < numOfClasses; ++i) {
        std::cout << "[+] Enter the average score for class " << i + 1 << ": ";
        std::cin >> classAvg[i];
        if (std::cin.fail()) {
            std::cout << "[E] Invalid input\n";
            return 1;
        }

        while (std::cin.fail() || classAvg[i] < 0 || classAvg[i] > 100) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "[E] Invalid input\nEnter a valid score between 0 and 100: ";
            std::cin >> classAvg[i];
        }
    }

    int highAvg = -1;

    for (int average : classAvg) {
        if (average > highAvg) {
            highAvg = average;
        }
    }

    std::cout << "[OK] Classes with the highest average score: ";
    for (int i = 0; i < numOfClasses; ++i) {
        if (classAvg[i] == highAvg) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
