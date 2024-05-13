#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> &arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void print(const std::vector<int> &arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {54, 24, 15, 12, 22, 11, 60};
    std::cout << "+ original array: ";
    print(arr);

    bubbleSort(arr);

    std::cout << "+ sorted array: ";
    print(arr);

    return 0;
}
