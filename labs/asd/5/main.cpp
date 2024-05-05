#include <iostream>
#include <string>
#include <vector>

using namespace std;

size_t HashIt(const string &str, size_t tableSize) {
    size_t hash = 0;
    for (char c : str) {
        hash = (hash * 31 + c) % tableSize;
    }
    return hash;
}

size_t resolveCollision(size_t initialIndex, size_t attempt, size_t tableSize) {
    return (initialIndex + attempt * attempt) % tableSize;
}

void display(const vector<string> &keys, const vector<int> &values) {
    cout << "+ hash map state:" << endl;
    for (size_t i = 0; i < keys.size(); ++i) {
        if (!keys[i].empty()) {
            cout << "\t- key: " << keys[i] << ", value: " << values[i] << endl;
        }
    }
}

size_t addElement(vector<string> &keys, vector<int> &values, const string &value) {
    const size_t tableSize = keys.size(); 
    size_t hash = HashIt(value, tableSize);
    size_t attempt = 0;

    while (!keys[hash].empty()) {
        hash = resolveCollision(hash, ++attempt, tableSize);
    }

    keys[hash] = value;
    values[hash] = static_cast<int>(hash);
    return hash;
}

void deleteElement(vector<string> &keys, vector<int> &values, size_t hash) {
    keys[hash].clear();
    values[hash] = -1;
}

int getElementValue(const vector<string> &keys, const vector<int> &values, size_t hash) {
    return values[hash];
}

int main() {
    const size_t n = 10;
    vector<string> keys(n);
    vector<int> values(n, -1);

    size_t hash1 = addElement(keys, values, "自分");
    size_t hash2 = addElement(keys, values, "世界");
    size_t hash3 = addElement(keys, values, "man");
    size_t hash4 = addElement(keys, values, "自分");

    display(keys, values);

    cout << "+ value of 'man': " << getElementValue(keys, values, hash3) << endl;

    deleteElement(keys, values, hash3);
    
    cout << "+ state after deleting 'man':" << endl;
    display(keys, values);

    return 0;
}
