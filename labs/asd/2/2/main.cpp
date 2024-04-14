#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "enter some string: ";
    std::getline(std::cin, input);

    std::cout << "length: " << input.length() << std::endl;

    return 0;
}
