#include <cmath>
#include <iostream>

int main() {
    double a, b;
    std::cout << "A value: ";
    std::cin >> a;
    std::cout << "B value: ";
    std::cin >> b;

    double geometric_mean = sqrt(a * b);

    std::cout << "Geometric mean: "<< geometric_mean << std::endl;

    return 0;
}
