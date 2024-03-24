#include <iostream>
#include <cmath>
#include <stdexcept>

double calculateTriangleArea(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        throw std::invalid_argument("The lengths of the sides must be positive numbers");
    }
    double s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double sideA, sideB, sideC;

    try {
        std::cout << "Enter the lengths of the sides of the triangle (a b c): ";
        std::cin >> sideA >> sideB >> sideC;
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter valid numerical values");
        }
        double area = calculateTriangleArea(sideA, sideB, sideC);
        std::cout << "The area of the triangle is: " << area << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}
