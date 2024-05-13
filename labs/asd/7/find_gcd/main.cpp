#include <iostream>

int find_gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }

    return find_gcd(b, a % b);
}

int main() {
    int num1, num2;

    std::cout << "+ enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "+ greatest common divisor of " << num1 << " and " << num2 << " is: " << find_gcd(num1, num2) << std::endl;

    return 0;
}
