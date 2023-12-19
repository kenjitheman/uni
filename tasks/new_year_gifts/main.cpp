#include <iostream>
#include <limits>
#include <vector>

using namespace std;

struct Gift {
    string recipient;
    string name;
    double cost;
};

struct Employee {
    string name;
    vector<Gift> gifts;
};

void displayGifts(const std::vector<Employee> &employees) {
    cout << "[INFO] list of gifts:\n";
    for (const auto &employee : employees) {
        cout << employee.name << ":\n";
        for (const auto &gift : employee.gifts) {
            cout << "  - " << gift.name << ": " << gift.cost << " hryvnias\n";
        }
    }
}

double getTotalCost(const vector<Employee> &employees) {
    double totalCost = 0.0;
    for (const auto &employee : employees) {
        for (const auto &gift : employee.gifts) {
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

void findTheMostExpensiveAndCheapestGift(const vector<Employee> &employees) {
    double maxCost = std::numeric_limits<double>::min();
    double minCost = std::numeric_limits<double>::max();
    string maxGift, minGift;

    for (const auto &employee : employees) {
        for (const auto &gift : employee.gifts) {
            if (gift.cost > maxCost) {
                maxCost = gift.cost;
                maxGift = gift.name;
            }
            if (gift.cost < minCost) {
                minCost = gift.cost;
                minGift = gift.name;
            }
        }
    }

    cout << "[INFO] the most expensive gift: " << maxGift << " (" << maxCost << " UAH)\n";
    cout << "[INFO] the cheapest gift: " << minGift << " (" << minCost << " UAH)\n";
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

    vector<Employee> employees(n);
    for (int i = 0; i < n; ++i) {
        cout << "[+] enter employee name: ";
        cin >> employees[i].name;
        if (employees[i].name.empty() || employees[i].name.length() > 20 || employees[i].name.find(' ') != string::npos) {
            cout << "[ERROR] invalid employee name\n";
            return 1;
        }

        int m;
        cout << "[+] enter the number of gifts for " << employees[i].name << ": ";
        cin >> m;
        if (m <= 0) {
            cout << "[ERROR] invalid number of gifts\n";
            return 1;
        }

        for (int j = 0; j < m; ++j) {
            Gift gift;
            cout << "[+] enter gift details (to whom, name, cost): ";
            cin >> gift.recipient >> gift.name >> gift.cost;

            if (gift.recipient.empty() || gift.recipient.length() > 20 || gift.recipient.find(' ') != string::npos) {
                cout << "[ERROR] invalid recipient name\n";
                return 1;
            }

            employees[i].gifts.push_back(gift);
        }
    }

    displayGifts(employees);
    double totalCost = getTotalCost(employees);

    determineBudgetStatus(totalBudget, totalCost);
    findTheMostExpensiveAndCheapestGift(employees);

    return 0;
}
