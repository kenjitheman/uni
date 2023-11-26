#include <iostream>

using namespace std;

int main() {
    int days;

    cout << "Enter the number of feeding days: ";
    cin >> days;

    if (cin.fail() || days <= 0) {
        cerr << "Invalid input. Exiting program" << endl;
        return 1;
    }

    int *feedingPlan = new int[2 * days];

    cout << "Enter the feeding plan for each day (morning weight, evening weight):\n";
    for (int i = 0; i < 2 * days; ++i) {
        cin >> feedingPlan[i];

        if (cin.fail()) {
            cerr << "Invalid input -> Exiting program" << endl;
            delete[] feedingPlan;
            return 1;
        }
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
