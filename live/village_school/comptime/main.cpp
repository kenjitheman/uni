#include <iostream>
#include <vector>

int main() {
    const int numOfClasses = 10;
    int classAvg[numOfClasses] = {85, 92, 78, 60, 95, 88, 75, 100, 83, 79};

    int highAvg = -1;

    for (int i = 0; i < numOfClasses; ++i) {
        if (classAvg[i] > highAvg) {
            highAvg = classAvg[i];
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
