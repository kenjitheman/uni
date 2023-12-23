#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    int groupNum;
    double avgGrade;
};

void printStudentsList(const vector<Student> &students) {
    cout << "[INFO] students list:" << endl;
    for (const auto &student : students) {
        cout << " -> [NAME]: "  << student.firstName << ", [LAST NAME]: " 
            << student.lastName << ", [GROUP]: " << student.groupNum
            << ", [AVARAGE GRADE]: " << student.avgGrade << endl;
    }
}

pair<int, vector<Student>>
countScholarshipStudents(const vector<Student> &students, double minGradeForScholarship) {
    vector<Student> scholarshipStudents;
    int count = 0;
    for (const auto &student : students) {
        if (student.avgGrade >= minGradeForScholarship) {
            count++;
            scholarshipStudents.push_back(student);
        }
    }
    return {count, scholarshipStudents};
}

void printScholarshipStudents(const vector<Student> &students, double minGradeForScholarship) {
    for (const auto &student : students) {
        if (student.avgGrade >= minGradeForScholarship) {
            cout << " -> " << student.firstName << " " << student.lastName << endl;
        }
    }
}

bool excludeStudents(vector<Student> &students, double minAverageGradeForExclusion) {
    bool excluded = false;
    for (auto &student : students) {
        if (student.avgGrade < minAverageGradeForExclusion) {
            student.groupNum = 0;
            excluded = true;
        }
    }
    return excluded;
}

int main() {
    vector<Student> students = {
        {"some_name_1", "some_last_name_1", 1, 4.0},
        {"some_name_2", "some_last_name_2", 2, 3.0},
        {"some_name_3", "some_last_name_3", 3, 4.0},
        {"some_name_4", "some_last_name_4", 4, 3.0}
    };

    int choice;
    pair<int, vector<Student>> scholarshipResult;
    while (true) {
        cout << "[+] choose an option to display:" << endl;
        cout << " -> [1] students list" << endl;
        cout << " -> [2] excluded students" << endl;
        cout << " -> [3] scholarship students count" << endl;
        cout << " -> [4] exit" << endl;
        cout << "[+] your choice: ";
        cin >> choice;
        if (cin.fail()) {
            cout << "[ERROR] invalid option" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printStudentsList(students);
                break;
            case 2:
                if (excludeStudents(students, 3.0)) {
                    cout << "[INFO] excluded students:" << endl;
                    for (const auto &student : students) {
                        if (student.groupNum == 0) {
                            cout << student.firstName << " " << student.lastName << endl;
                        }
                    }
                } else {
                    cout << "[INFO] no students were excluded" << endl;
                }
                break;
            case 3:
                scholarshipResult = countScholarshipStudents(students, 4.0);
                cout << "[INFO] scholarship students count: " << scholarshipResult.first << endl;
                printScholarshipStudents(scholarshipResult.second, 4.0);
                break;
            case 4:
                cout << "[INFO] exiting..." << endl;
                return 0;
            default:
                cout << "[ERROR] invalid option" << endl;
                break;
        }
    }

    return 0;
}
