#include <iostream>
#include <vector>

using namespace std;

int findNSD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {4, 5, 6};
    int rows = arr1.size();
    int cols = arr2.size();
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));
    int count = 0;
    double sum = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int gcd = findNSD(arr1[i], arr2[j]);
            matrix[i][j] = gcd;

            sum += gcd;
            count++;
        }
    }

    cout << "[INFO] matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "\t";
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    double avg = sum / count;
    cout << " -> avg NSD: " << avg << endl;

    return 0;
}
