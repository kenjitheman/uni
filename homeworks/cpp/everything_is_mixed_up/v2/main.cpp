#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int month;

    cout << "Enter the month number: ";
    cin >> month;
    if (cin.fail() || month <= 0) {
        cerr << "Invalid input -> Exiting program" << endl;
        return 1;
    }

    srand(time(0));

    int days = 30;

    int *feedingPlan = new int[2 * days];

    for (int i = 0; i < 2 * days; ++i) {
        feedingPlan[i] = rand() % 20 + 1;
    }

    for (int i = 0; i < 2 * days; i += 2) {
        swap(feedingPlan[i], feedingPlan[i + 1]);
    }

    cout << "Corrected feeding plan:\n";
    for (int i = 0; i < 2 * days; ++i) {
        cout << feedingPlan[i] << " ";
    }

    delete[] feedingPlan;

    return 0;
}
