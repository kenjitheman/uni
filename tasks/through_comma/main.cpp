#include <cstdlib>
#include <iostream>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
        std::cout << arr[i] << (i < 9 ? ", " : "\n");
    }
}
