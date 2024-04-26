#include <iostream>

struct Human {
    double height;
    double weight;

    Human() : height(0), weight(0){};

    Human(int h, int w) : height(h), weight(w){};

    void display() {
        std::cout << "+ human:\n\t- height: " << height << "\n\t- weight: " << weight << std::endl;
    };

    double calculateBMI(double height, double weight) {
        height /= 100;
        double bmi = weight / (height * height);
        return bmi;
    };
};

int main() {
    Human Man;
    char choice;

    std::cout << "+ ur height: ";
    std::cin >> Man.height;

    std::cout << "+ ur weight: ";
    std::cin >> Man.weight;

    std::cout << "+ info:\n";
    Man.display();

    std::cout << "+ wanna calc ur BMI? (y/N): ";
    std::cin >> choice;
    if (choice == 'y') {
        std::cout << Man.calculateBMI(Man.height, Man.weight) << std::endl;
    } else if (choice == 'N') {
        return 0;
    } else {
        return 1;
    }
};
