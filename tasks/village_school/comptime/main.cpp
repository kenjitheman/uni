#include <iostream>
#include <vector>

int main() {
    const int numOfClasses = 10;
    int classAvg[numOfClasses] = {85, 92, 78, 60, 95, 88, 100, 100, 100, 100};

    int maxAvg = classAvg[0];
    for (int i = 1; i < numOfClasses; ++i) {
        if (classAvg[i] > maxAvg) {
            maxAvg = classAvg[i];
        }
    }

    std::cout << "Classes with the highest average score(s): \n";
    for (int i = 0; i < numOfClasses; ++i) {
        if (classAvg[i] == maxAvg) {
            std::cout << i << ": " << classAvg[i] << "\n";
        }
    }

    return 0;
}
