#include <iostream>
#include <array>
#include <vector>

using namespace std;

string getNumberName(int num) {
    array<string, 10> names = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    return names[num];
}

int main() {
    int input, K;
    cout << "[+] enter a number between 0 and 9: ";
    cin >> input;

    if (input < 0 || input > 9) {
        cout << "[!] invalid input\n[!] please enter a number between 0 and 9" <<endl;
        return 1;
    }

    cout << "[+] you entered: " << getNumberName(input) << endl;

    cout << "[+] enter the value of K (the number of subsequent numbers to display): ";
    cin >> K;

    if (K <= 0) {
        cout << "[!] invalid input for K\n[!]please enter a positive number" << endl;
        return 1;
    }

    vector<std::string> subsequentNumbers;

    int limit = std::min(9 - input, K);

    for (int i = input + 1; i <= input + limit; ++i) {
        subsequentNumbers.push_back(getNumberName(i));
    }

    cout << "[+] subsequent numbers' names: ";
    for (const auto& name : subsequentNumbers) {
        for (int i = 0; i < 10; ++i) {
            if (name == getNumberName(i)) {
                cout << i << ": " << name << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}
