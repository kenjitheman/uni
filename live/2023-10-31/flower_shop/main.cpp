#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int N;
    std::cout << "Enter the number of baskets: ";
    std::cin >> N;
    if (N < 1) {
        std::cout << "Invalid number of baskets\n";
        return 1;
    }

    std::vector<int> baskets(N);
    std::unordered_map<int, int> flowers;

    for (int i = 0; i < N; ++i) {
        std::cout << "Enter the number of flowers in basket " << i + 1 << ": ";
        std::cin >> baskets[i];
        flowers[baskets[i]]++;
    }

    int M;
    std::cout << "Enter the number of flowers required for a bouquet: ";
    std::cin >> M;
    if (M < 1) {
        std::cout << "Invalid number of flowers required for a bouquet\n";
        return 1;
    }

    int totalBouquets = 0;
    for (int i = 0; i < N; ++i) {
        int bouquetsFromBasket = baskets[i] / M;
        totalBouquets += bouquetsFromBasket;
        std::cout << "Bouquets from basket " << i + 1 << ": " << bouquetsFromBasket
            << std::endl;
        int remainingFlowers = baskets[i] % M;
        std::cout << "Remaining flowers in basket " << i + 1 << ": "
            << remainingFlowers << std::endl;
    }

    // find the flower type used most in bouquets and the number of flowers used
    int maxCount = 0;
    int flowerType = 0;
    for (auto const &flower : flowers) {
        if (flower.second > maxCount) {
            maxCount = flower.second;
            flowerType = flower.first;
        }
    }
    std::cout << "The most used flower type in bouquets is: " << flowerType
        << " with " << maxCount * M << " flowers used\n";

    // find the flower type that remains the most after making bouquets
    int maxRemaining = 0;
    int remainingFlowerType = 0;
    for (auto const &flower : flowers) {
        int remaining = (flower.second * M) - flower.second;
        if (remaining > maxRemaining) {
            maxRemaining = remaining;
            remainingFlowerType = flower.first;
        }
    }
    std::cout
        << "The flower type that remains the most after making bouquets is: "
        << remainingFlowerType << " with " << maxRemaining
        << " flowers remaining\n";

    return 0;
}
