#include <iostream>
#include <vector>

using std::endl;

std::vector<int> generateArray(int N, int A, int B) {
    std::vector<int> res(N);
    res[0] = A;
    res[1] = B;

    for (int i = 2; i < N; ++i) {
        res[i] = res[i - 1] + res[i - 2];
    }

    return res;
}

int main() {
    int N, A, B;

    std::cout << "[!] pls, enter the value of N (> 2): ";
    std::cin >> N;

    std::cout << "enter the value of A: ";
    std::cin >> A;

    std::cout << "enter the value of B: ";
    std::cin >> B;

    std::vector<int> resArray = generateArray(N, A, B);

    std::cout << "generated array of size " << N
        << " with elements:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << resArray[i] << " ";
    }
    std::cout << endl;

    return 0;
}
