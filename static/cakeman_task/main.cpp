#include <iostream>

int main() {
    int N;
    double W, T, D;

    std::cout << "enter the number of cakes: ";
    std::cin >> N;
    if (N <= 0) {
        std::cout << "invalid number of cakes" << std::endl;
        return 1;
    }

    std::cout << "enter the standard weight of a cake: ";
    std::cin >> W;
    if (W <= 0) {
        std::cout << "invalid standard weight" << std::endl;
        return 1;
    }

    std::cout << "enter the maximum time to make one cake (in minutes): ";
    std::cin >> T;
    if (T <= 0) {
        std::cout << "invalid time" << std::endl;
        return 1;
    }

    std::cout << "enter the maximum deviation in cake weight: ";
    std::cin >> D;
    if (D <= 0) {
        std::cout << "invalid deviation" << std::endl;
        return 1;
    }

    double total_time = N * T;

    int defective_count = 0;

    double total_weight_valid = 0;

    for (int i = 1; i <= N; ++i) {
        double weight;
        std::cout << "enter the weight of cake " << i << ": ";
        std::cin >> weight;
        if (weight <= 0) {
            std::cout << "invalid weight" << std::endl;
            return 1;
        }

        if (weight < (W - D) || weight > (W + D)) {
            defective_count++;
        } else {
            total_weight_valid += weight;
        }
    }

    double avg_valid_weight = (total_weight_valid / (N - defective_count));

    int hours = static_cast<int>(total_time / 60);
    int minutes = static_cast<int>(total_time) % 60;

    std::cout << "total manufacturing time: " << hours << " hours " << minutes
        << " minutes" << std::endl;
    std::cout << "total number of defective cakes: " << defective_count
        << std::endl;
    std::cout << "average weight of non-defective cakes: " << avg_valid_weight
        << std::endl;

    if (defective_count <= N / 2) {
        std::cout << "more defects occurred in the first half of the cycle" << std::endl;
    } else {
        std::cout << "more defects occurred in the second half of the cycle" << std::endl;
    }

    return 0;
}
