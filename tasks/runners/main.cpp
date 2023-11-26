#include <climits>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    try {
        int M, N;
        cout << "Enter the number of training runs: ";
        cin >> M;
        if (cin.fail() || M <= 0) {
            throw invalid_argument("Invalid input for the number of training runs");
        }

        cout << "Enter the number of participants: ";
        cin >> N;
        if (cin.fail() || N <= 0) {
            throw invalid_argument("Invalid input for the number of participants");
        }

        vector<vector<int>> raceResults(N, vector<int>(M));

        cout << "Enter the race results for each participant (use -1 for disqualification):\n";

        for (int i = 0; i < N; ++i) {
            cout << "Participant " << (i + 1) << ": ";
            for (int j = 0; j < M; ++j) {
                cin >> raceResults[i][j];

                if (cin.fail() || (raceResults[i][j] != -1 && raceResults[i][j] < 0)) {
                    throw invalid_argument("Invalid input for race results. Enter a valid time or -1 for disqualification");
                }
            }
        }

        int disqualifiedRunners = 0;
        for (int i = 0; i < N; ++i) {
            if (find(raceResults[i].begin(), raceResults[i].end(), -1) != raceResults[i].end()) {
                disqualifiedRunners++;
            }
        }
        cout << "Number of runners disqualified at least once: "
            << disqualifiedRunners << endl;

        int bestOverallResult = INT_MAX, worstOverallResult = INT_MIN;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (raceResults[i][j] != -1) {
                    bestOverallResult = min(bestOverallResult, raceResults[i][j]);
                    worstOverallResult = max(worstOverallResult, raceResults[i][j]);
                }
            }
        }
        cout << "Best result for all races: " << bestOverallResult << " seconds\n";
        cout << "Worst result for all races: " << worstOverallResult << " seconds\n";

        cout << "Best and worst results for each runner:\n";
        for (int i = 0; i < N; ++i) {
            int bestRunnerResult = INT_MAX, worstRunnerResult = INT_MIN;
            for (int j = 0; j < M; ++j) {
                if (raceResults[i][j] != -1) {
                    bestRunnerResult = min(bestRunnerResult, raceResults[i][j]);
                    worstRunnerResult = max(worstRunnerResult, raceResults[i][j]);
                }
            }
            cout << "Runner " << (i + 1) << ": Best - " << bestRunnerResult << " seconds, Worst - " << worstRunnerResult << " seconds\n";
        }

        vector<int> bestRunners;
        for (int i = 0; i < N; ++i) {
            int bestRunnerResult = INT_MAX;
            for (int j = 0; j < M; ++j) {
                if (raceResults[i][j] != -1) {
                    bestRunnerResult = min(bestRunnerResult, raceResults[i][j]);
                }
            }
            if (bestRunnerResult == bestOverallResult) {
                bestRunners.push_back(i + 1);
            }
        }
        cout << "Runners who got the best result among all races: ";
        for (int i : bestRunners) {
            cout << i << " ";
        }
        cout << endl;

    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
