#include <cmath>
#include <iostream>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

Time findTheNearestTo12(const Time times[], int size) {
    Time nearestTime = times[0];
    int nearestDifference = abs(nearestTime.hours - 12) * 60 + nearestTime.minutes;

    for (int i = 1; i < size; ++i) {
        int currDifference = abs(times[i].hours - 12) * 60 + times[i].minutes;
        if (currDifference < nearestDifference) {
            nearestDifference = currDifference;
            nearestTime = times[i];
        }
    }

    return nearestTime;
}

void printTime(const Time &t) {
    std::cout << t.hours << ":" << t.minutes << ":" << t.seconds << std::endl;
}

int main() {
    const int arrSize = 5;
    Time times[arrSize] = {{10, 30, 45}, {12, 15, 0}, {14, 50, 20}, {9, 0, 5}, {11, 45, 30}};

    std::cout << "[INFO] time for each object" << std::endl;
    for (int i = 0; i < arrSize; ++i) {
        std::cout << "object " << i + 1 << ": ";
        printTime(times[i]);
    }

    Time nearestTo12 = findTheNearestTo12(times, arrSize);
    std::cout << "\ntime nearest to 12:";
    printTime(nearestTo12);
}
