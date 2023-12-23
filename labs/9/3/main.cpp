#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "[+] enter the size of the matrix (N): ";
    cin >> n;
    if (cin.fail()) {
        cout << "[ERROR] invalid input" << endl;
        cin.clear();
        cin.ignore(32767, '\n');
        return 1;
    }

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        matrix[i][i] = 1;
    }

    cout << " -> identity matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "\t";
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
