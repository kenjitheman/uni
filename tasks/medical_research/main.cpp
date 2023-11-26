#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;

    cout << "Enter the number of candidates: ";
    cin >> N;

    cout << "Enter the minimum required score: ";
    cin >> X;

    if (cin.fail()) {
        cerr << "Invalid input -> Exiting program" << endl;
        return 1;
    }

    vector<int> scores(N);
    vector<int> eligibleCandidates;

    cout << "Enter the scores for each candidate:\n";
    for (int i = 0; i < N; ++i) {
        cin >> scores[i];
        if (cin.fail()) {
            cerr << "Invalid input. Exiting program" << endl;
            return 1;
        }

        if (scores[i] >= X) {
            eligibleCandidates.push_back(i);
        }
    }

    if (eligibleCandidates.empty()) {
        cout << "No candidates scored the required number of points" << endl;
        return 0;
    }

    cout << "Eligible candidates for the study:\n";
    for (int index : eligibleCandidates) {
        cout << "Candidate " << (index + 1) << " with score " << scores[index] << endl;
    }

    return 0;
}
