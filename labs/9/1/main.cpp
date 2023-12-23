#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transposeMatrix(const vector<vector<int>> &matrix) {
    int n = matrix.size();
    vector<vector<int>> transposedMatrix(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transposedMatrix[i][j] = matrix[j][i];
        }
    }

    return transposedMatrix;
}

void printMatrix(const vector<vector<int>> &matrix) {
    for (const auto &row : matrix) {
        cout << "\t";
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    while (true) {
        cout << "[+] input matrix size: ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cout << "[ERROR] invalid input" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
            continue;
        }

        vector<vector<int>> inputMatrix(n, vector<int>(n, 0));

        cout << "[+] input matrix elements:" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << " -> element [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> inputMatrix[i][j];
                if (cin.fail() || inputMatrix[i][j] <= 0) {
                    cout << "[ERROR] invalid input" << endl;
                    cin.clear();
                    cin.ignore(32767, '\n');
                    continue;
                }
            }
        }

        cout << "[INFO] input matrix:" << endl;
        printMatrix(inputMatrix);

        vector<vector<int>> transposedMatrix = transposeMatrix(inputMatrix);

        cout << " -> transposed matrix:" << endl;
        printMatrix(transposedMatrix);

        return 0;
    }
}
