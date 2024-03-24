#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

void convertToGrayscale(const std::vector<std::vector<int>> &red,
        const std::vector<std::vector<int>> &green,
        const std::vector<std::vector<int>> &blue,
        std::vector<std::vector<double>> &grayscale, int rows,
        int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            grayscale[i][j] =
                0.2126 * red[i][j] + 0.7152 * green[i][j] + 0.0722 * blue[i][j];
        }
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));

    int N = 10;
    int M = 10;

    std::vector<std::vector<int>> red(N, std::vector<int>(M));
    std::vector<std::vector<int>> green(N, std::vector<int>(M));
    std::vector<std::vector<int>> blue(N, std::vector<int>(M));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            red[i][j] = std::rand() % 256;
            green[i][j] = std::rand() % 256;
            blue[i][j] = std::rand() % 256;
        }
    }

    std::vector<std::vector<double>> grayscale(N, std::vector<double>(M));

    convertToGrayscale(red, green, blue, grayscale, N, M);

    std::cout << "Original Red Matrix:\n";
    std::cout << "Original Green Matrix:\n";
    std::cout << "Original Blue Matrix:\n";
    std::cout << "Grayscale Matrix:\n";
}
