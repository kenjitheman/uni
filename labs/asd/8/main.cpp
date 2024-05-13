#include <iostream>
#include <string>
#include <vector>

unsigned long long calculateHash(const std::string& str, int start, int end) {
    const unsigned int p = 31;
    const unsigned int m = 1e9 + 9;
    unsigned long long hashValue = 0;
    unsigned long long power = 1;
    for (int i = start; i <= end; ++i) {
        hashValue = (hashValue + (str[i] - 'a' + 1) * power) % m;
        power = (power * p) % m;
    }
    return hashValue;
}

std::vector<int> searchRabinKarp(const std::string& text, const std::string& pattern) {
    const unsigned int p = 31;
    const unsigned int m = 1e9 + 9;

    int n = text.size();
    int mPattern = pattern.size();

    std::vector<unsigned long long> pPowers(mPattern);
    pPowers[0] = 1;
    for (int i = 1; i < mPattern; ++i) {
        pPowers[i] = (pPowers[i - 1] * p) % m;
    }

    unsigned long long patternHash = calculateHash(pattern, 0, mPattern - 1);
    std::vector<unsigned long long> textHash(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        textHash[i + 1] = (textHash[i] + (text[i] - 'a' + 1) * pPowers[i]) % m;
    }

    std::vector<int> occurrences;
    for (int i = 0; i <= n - mPattern; ++i) {
        unsigned long long currSubstrHash = (textHash[i + mPattern] + m - textHash[i]) % m;
        if (currSubstrHash == patternHash * pPowers[i] % m) {
            if (text.substr(i, mPattern) == pattern) {
                occurrences.push_back(i);
            }
        }
    }

    return occurrences;
}

void demonstrateRabinKarp(const std::string& text, const std::string& pattern) {
    std::cout << "+ text: " << text << std::endl;
    std::cout << "+ pattern: " << pattern << std::endl;

    std::vector<int> occurrences = searchRabinKarp(text, pattern);

    if (occurrences.empty()) {
        std::cout << "+ pattern not found in the text." << std::endl;
    } else {
        std::cout << "+ pattern found at positions: ";
        for (int pos : occurrences) {
            std::cout << pos << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::string text = "hellohellohellohello";
    std::string pattern = "hello";
    demonstrateRabinKarp(text, pattern);

    return 0;
}
