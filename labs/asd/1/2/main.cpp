#include <iostream>
#include <string>

enum CuisineType { ITALIAN, CHINESE, MEXICAN, INDIAN, AMERICAN, JAPANESE, SOME };

struct Food {
    std::string name;
    CuisineType cuisine;
    double price;
    int calories;
};

CuisineType getUserInput(const std::string& data) {
    if (data == "ITALIAN") return CuisineType::ITALIAN;
    if (data == "CHINESE") return CuisineType::CHINESE;
    if (data == "MEXICAN") return CuisineType::MEXICAN;
    if (data == "INDIAN") return CuisineType::INDIAN;
    if (data == "AMERICAN") return CuisineType::AMERICAN;
    if (data == "JAPANESE") return CuisineType::JAPANESE;
    return CuisineType::SOME;
}

int main() {
    std::string userInput;
    Food myFood;

    std::cout << "name: ";
    std::cin >> myFood.name;

    std::cout << "cuisine: ";
    std::cin >> userInput;
    myFood.cuisine = getUserInput(userInput);

    std::cout << "price: ";
    std::cin >> myFood.price;

    std::cout << "calories: ";
    std::cin >> myFood.calories;

    std::cout << "name: " << myFood.name << std::endl;
    std::cout << "cuisine: " << userInput << std::endl;
    std::cout << "price: " << myFood.price << std::endl;
    std::cout << "calories: " << myFood.calories << std::endl;

    return 0;
}
