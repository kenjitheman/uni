#include <iostream>
#include <cmath>
#include <limits>

const int MAX_ROWS = 100;
const int MAX_COLS = 100; 

int main() {
    int rows, cols;
    double heights[MAX_ROWS][MAX_COLS];

    std::cout << "Enter the number of rows: ";
    while (!(std::cin >> rows) || rows <= 0 || rows > MAX_ROWS) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Invalid input. Please enter a positive integer less than or equal to " << MAX_ROWS << ": ";
    }

    std::cout << "Enter the number of columns: ";
    while (!(std::cin >> cols) || cols <= 0 || cols > MAX_COLS) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Invalid input. Please enter a positive integer less than or equal to " << MAX_COLS << ": ";
    }

    std::cout << "Enter the height measurements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Height at row " << i + 1 << ", column " << j + 1 << ": ";
            while (!(std::cin >> heights[i][j])) {
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                std::cout << "Invalid input. Please enter a numeric value: ";
            }
        }
    }

    double maxDeviation = 0;
    int maxDeviationRow = 0;
    char maxDeviationLocation;

    for (int i = 0; i < rows; ++i) {
        double rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += heights[i][j];
        }

        double rowAverage = rowSum / cols;
        double deviation = std::abs(rowAverage);

        if (deviation > maxDeviation) {
            maxDeviation = deviation;
            maxDeviationRow = i + 1;
            maxDeviationLocation = 'H'; // 'H' for horizontal
        }
    }

    for (int j = 0; j < cols; ++j) {
        double colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += heights[i][j];
        }

        double colAverage = colSum / rows;
        double deviation = std::abs(colAverage);

        if (deviation > maxDeviation) {
            maxDeviation = deviation;
            maxDeviationRow = j + 1;
            maxDeviationLocation = 'V'; // 'V' for vertical
        }
    }

    std::cout << "Row " << maxDeviationRow << ", Location: " << (maxDeviationLocation == 'H' ? "Horizontal" : "Vertical")
        << ", Deviation: " << maxDeviation << std::endl;

    return 0;
}
