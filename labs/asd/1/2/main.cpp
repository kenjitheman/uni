#include <string>

enum CuisineType { 
    ITALIAN, 
    CHINESE, 
    MEXICAN, 
    INDIAN, 
    AMERICAN, 
    JAPANESE 
};

struct Food {
    std::string name;
    CuisineType cuisine;
    double price;
    int calories;
};
