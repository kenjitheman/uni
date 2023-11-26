#include <iostream>
#include <unordered_map>
#include <vector>
#include <stdexcept>

int main() {
    try {
        int N;
        std::cout << "Enter the number of baskets: ";
        if (!(std::cin >> N) || N < 1) {
            throw std::invalid_argument("Invalid number of baskets");
        }

        std::vector<int> baskets(N);
        std::unordered_map<int, int> flowers;

        for (int i = 0; i < N; ++i) {
            std::cout << "Enter the number of flowers in basket " << i + 1 << ": ";
            if (!(std::cin >> baskets[i])) {
                throw std::invalid_argument("Invalid input. Please enter a valid numerical value.");
            }
            flowers[baskets[i]]++;
        }

        int M;
        std::cout << "Enter the number of flowers required for a bouquet: ";
        if (!(std::cin >> M) || M < 1) {
            throw std::invalid_argument("Invalid number of flowers required for a bouquet");
        }

        int totalBouquets = 0;
        for (int i = 0; i < N; ++i) {
            int bouquetsFromBasket = baskets[i] / M;
            totalBouquets += bouquetsFromBasket;
            std::cout << "Bouquets from basket " << i + 1 << ": " << bouquetsFromBasket << std::endl;
            int remainingFlowers = baskets[i] % M;
            std::cout << "Remaining flowers in basket " << i + 1 << ": " << remainingFlowers << std::endl;
        }

        int maxCount = 0;
        int flowerType = 0;
        for (auto const &flower : flowers) {
            if (flower.second > maxCount) {
                maxCount = flower.second;
                flowerType = flower.first;
            }
        }
        std::cout << "The most used flower type in bouquets is: " << flowerType << " with " << maxCount * M << " flowers used\n";

        int maxRemaining = 0;
        int remainingFlowerType = 0;
        for (auto const &flower : flowers) {
            int remaining = (flower.second * M) - flower.second;
            if (remaining > maxRemaining) {
                maxRemaining = remaining;
                remainingFlowerType = flower.first;
            }
        }
        std::cout << "The flower type that remains the most after making bouquets is: " << remainingFlowerType
            << " with " << maxRemaining << " flowers remaining\n";

    } catch (const std::invalid_argument& e) {
        std::cerr << "[E] " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
