#include <iostream>
#include <limits>
#include <vector>

using namespace std;

struct Gift {
    string recipient;
    string name;
    double cost;
};

void displayGifts(const vector<pair<string, vector<Gift>>> &employees) {
    cout << "[INFO] list of gifts:\n";
    for (const auto &employee : employees) {
        cout << employee.first << ":\n";
        for (const auto &gift : employee.second) {
            cout << "  - " << gift.name << ": " << gift.cost << " hryvnias\n";
        }
    }
}

double getTotalCost(const vector<pair<string, vector<Gift>>> &employees) {
    double totalCost = 0.0;
    for (const auto &employee : employees) {
        for (const auto &gift : employee.second) {
            totalCost += gift.cost;
        }
    }
    return totalCost;
}

void determineBudgetStatus(double budget, double totalCost) {
    double overspent = totalCost - budget;
    if (overspent > 0) {
        cout << "[INFO] budget exceeded by: " << overspent << " hryvnias\n";
    } else {
        cout << "[INFO] budget saved: " << -overspent << " hryvnias\n";
    }
}

void findTheMostExpensive(const vector<pair<string, vector<Gift>>> &employees) {
    double maxCost = numeric_limits<double>::min();
    string maxGift;

    for (const auto &employee : employees) {
        for (const auto &gift : employee.second) {
            if (gift.cost > maxCost) {
                maxCost = gift.cost;
                maxGift = gift.name;
            }
        }
    }

    cout << "[INFO] the most expensive gift: " << maxGift << " (" << maxCost
        << " UAH)\n";
}

void findTheCheapest(const vector<pair<string, vector<Gift>>> &employees) {
    double minCost = numeric_limits<double>::max();
    string minGift;

    for (const auto &employee : employees) {
        for (const auto &gift : employee.second) {
            if (gift.cost < minCost) {
                minCost = gift.cost;
                minGift = gift.name;
            }
        }
    }

    cout << "[INFO] the cheapest gift: " << minGift << " (" << minCost
        << " UAH)\n";
}

int main() {
    int n;
    double totalBudget;

    cout << "[+] enter the number of employees: ";
    cin >> n;
    if (n <= 0) {
        cout << "[ERROR] invalid number of employees\n";
        return 1;
    }

    cout << "[+] enter the total budget for gifts: ";
    cin >> totalBudget;
    if (totalBudget <= 0) {
        cout << "[ERROR] invalid budget\n";
        return 1;
    }

    vector<pair<string, vector<Gift>>> employees;
    for (int i = 0; i < n; ++i) {
        string employeeName;
        cout << "[+] enter employee name: ";
        cin >> employeeName;
        if (employeeName.empty() || employeeName.length() > 20 ||
                employeeName.find(' ') != string::npos) {
            cout << "[ERROR] invalid employee name\n";
            return 1;
        }

        int m;
        cout << "[+] enter the number of gifts for " << employeeName << ": ";
        cin >> m;
        if (m <= 0) {
            cout << "[ERROR] invalid number of gifts\n";
            return 1;
        }

        vector<Gift> gifts;
        for (int j = 0; j < m; ++j) {
            Gift gift;
            cout << "[+] enter gift details (to whom, name, cost): ";
            cin >> gift.recipient >> gift.name >> gift.cost;

            if (gift.recipient.empty() || gift.recipient.length() > 20 ||
                    gift.recipient.find(' ') != string::npos) {
                cout << "[ERROR] invalid recipient name\n";
                return 1;
            }

            gifts.push_back(gift);
        }

        employees.push_back(make_pair(employeeName, gifts));
    }

    displayGifts(employees);
    double totalCost = getTotalCost(employees);

    determineBudgetStatus(totalBudget, totalCost);
    findTheMostExpensive(employees);
    findTheCheapest(employees);

    return 0;
}
