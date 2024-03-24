#include <iostream>
#include <cmath>
#include <stdexcept>

double calculateSegmentLength(double x1, double y1, double x2, double y2) {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    try {
        std::cout << "Enter the coordinates of the first point (x1 y1): ";
        std::cin >> x1 >> y1;
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter valid numerical values");
        }

        std::cout << "Enter the coordinates of the second point (x2 y2): ";
        std::cin >> x2 >> y2;

        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter valid numerical values");
        }

        double length = calculateSegmentLength(x1, y1, x2, y2);
        std::cout << "The length of the segment is: " << length << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
