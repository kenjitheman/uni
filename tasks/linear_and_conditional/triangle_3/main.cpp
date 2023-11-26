#include <iostream>
#include <cmath>
#include <stdexcept>

double calculateTriangleArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    if (x1 == x2 && x2 == x3) {
        throw std::invalid_argument("The three points must not be on the same vertical line.");
    }
    return 0.5 * std::abs((x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x2 * y1 + x3 * y2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    try {
        std::cout << "Enter the coordinates of the first point (x1 y1): ";
        std::cin >> x1 >> y1;
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter valid numerical values.");
        }

        std::cout << "Enter the coordinates of the second point (x2 y2): ";
        std::cin >> x2 >> y2;
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter valid numerical values.");
        }

        std::cout << "Enter the coordinates of the third point (x3 y3): ";
        std::cin >> x3 >> y3;
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter valid numerical values.");
        }

        double area = calculateTriangleArea(x1, y1, x2, y2, x3, y3);
        std::cout << "The area of the triangle is: " << area << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}
