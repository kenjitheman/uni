#include <iostream>
#include <limits>
#include <vector>
#include <stdexcept>

int main() {
    const int numOfClasses = 10;

    std::vector<int> classAvg(numOfClasses);

    for (int i = 0; i < numOfClasses; ++i) {
        while (true) {
            try {
                std::cout << "[+] Enter the average score for class " << i + 1 << ": ";
                if (!(std::cin >> classAvg[i]) || classAvg[i] < 0 || classAvg[i] > 100) {
                    throw std::invalid_argument("Invalid input, please enter a valid numerical value between 0 and 100");
                } else {
                    break;
                }
            } catch (const std::invalid_argument& e) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cerr << "[E] " << e.what() << " Try again" << std::endl;
            }
        }
    }

    int highAvg = -1;

    for (int average : classAvg) {
        if (average > highAvg) {
            highAvg = average;
        }
    }

    std::cout << "[OK] Classes with the highest average score:";
    for (int i = 0; i < numOfClasses; ++i) {
        if (classAvg[i] == highAvg) {
            std::cout << "\n" << i + 1 << ": " << classAvg[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
