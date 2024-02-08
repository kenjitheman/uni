#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int rows, cols;

    cout << "[+] input rows count: ";
    cin >> rows;
    if (cin.fail() || rows <= 0) {
        cout << "[ERROR] invalid input" << endl;
        cin.clear();
        cin.ignore(32767, '\n');
        return 1;
    }
    
    cout << "[+] input cols count: ";
    cin >> cols;
    if (cin.fail() || cols <= 0) {
        cout << "[ERROR] invalid input" << endl;
        cin.clear();
        cin.ignore(32767, '\n');
        return 1;
    }

    vector<vector<int>> arr(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = rand() % 100; 
        }
    }
    
    cout << "[INFO] matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "\t";
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int centralRow = rows / 2;
    int centralCol = cols / 2;

    if (rows % 2 == 0 || cols % 2 == 0) {
        cout << " -> the matrix has no central element" << endl;
    } else {
        cout << " -> central element: " << arr[centralRow][centralCol] << endl;
    }

    return 0;
}
