#include <iostream>
#include <stdexcept>

double calculateTriangleArea(double base, double height) {
    if (base <= 0 || height <= 0) {
        throw std::invalid_argument("The base and height must be positive numbers.");
    }
    return 0.5 * base * height;
}

int main() {
    double base, height;

    try {
        std::cout << "Enter the length of the base: ";
        std::cin >> base;
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter a valid numerical value.");
        }
        std::cout << "Enter the length of the height: ";
        std::cin >> height;
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter a valid numerical value.");
        }
        double area = calculateTriangleArea(base, height);
        std::cout << "The area of the right-angled triangle is: " << area << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}
