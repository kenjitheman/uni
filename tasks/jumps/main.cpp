#include <iostream>
#include <vector>

int main() {
    std::vector<double> jumps = {125, 140, 155, 165, 120, 130, 145, 150, 170, 135};

    int highCount = 0, sufficientCount = 0, mediumCount = 0;
    double highSum = 0, sufficientSum = 0, mediumSum = 0;
    double bestHigh = 0, bestSufficient = 0, bestMedium = 0;

    for (double jump : jumps) {
        if (jump >= 160) {
            highCount++;
            highSum += jump;
            if (jump > bestHigh) {
                bestHigh = jump;
            }
        } else if (jump >= 140 && jump < 160) {
            sufficientCount++;
            sufficientSum += jump;
            if (jump > bestSufficient) {
                bestSufficient = jump;
            }
        } else if (jump >= 120 && jump < 140) {
            mediumCount++;
            mediumSum += jump;
            if (jump > bestMedium) {
                bestMedium = jump;
            }
        }
    }

    double averageHigh = (highCount > 0) ? (highSum / highCount) : 0;
    double averageSufficient =
        (sufficientCount > 0) ? (sufficientSum / sufficientCount) : 0;
    double averageMedium = (mediumCount > 0) ? (mediumSum / mediumCount) : 0;

    std::cout << "High Range (>= 160cm):\n";
    if (highCount > 0) {
        std::cout << "Best result: " << bestHigh << "cm\n";
        std::cout << "Average result: " << averageHigh << "cm\n";
    } else {
        std::cout << "No jumps in the high range\n";
    }
    std::cout << "\nSufficient Range (140-160cm):\n";
    if (sufficientCount > 0) {
        std::cout << "Best result: " << bestSufficient << "cm\n";
        std::cout << "Average result: " << averageSufficient << "cm\n";
    } else {
        std::cout << "No jumps in the sufficient range\n";
    }
    std::cout << "\nMedium Range (120-140cm):\n";
    if (mediumCount > 0) {
        std::cout << "Best result: " << bestMedium << "cm\n";
        std::cout << "Average result: " << averageMedium << "cm\n";
    } else {
        std::cout << "No jumps in the medium range\n";
    }

    return 0;
}
