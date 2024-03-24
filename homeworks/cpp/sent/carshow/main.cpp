#include <algorithm>
#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

using namespace std;

struct Car {
    int color;
    string brand;
    int carType;
    int year;
    float price;
};

int main() {
    const int N = 5;
    vector<Car> salonCatalog(N);

    cout << "Enter information for " << N << " cars:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Car " << i + 1 << ":" << endl;

        cout << "Color (1-20): ";
        cin >> salonCatalog[i].color;
        while (salonCatalog[i].color < 1 || salonCatalog[i].color > 20) {
            cout << "Invalid input. Color must be between 1 and 20. Try again: ";
            cin >> salonCatalog[i].color;
        }

        cout << "Brand: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, salonCatalog[i].brand);

        cout << "Type (1-3): ";
        cin >> salonCatalog[i].carType;
        while (salonCatalog[i].carType < 1 || salonCatalog[i].carType > 3) {
            cout << "Invalid input. Type must be between 1 and 3. Try again: ";
            cin >> salonCatalog[i].carType;
        }

        cout << "Year of manufacture (>2000 and <=2023): ";
        cin >> salonCatalog[i].year;
        while (salonCatalog[i].year <= 2000 || salonCatalog[i].year > 2023) {
            cout << "Invalid input. Year must be greater than 2000 and less than or "
                "equal to 2023. Try again: ";
            cin >> salonCatalog[i].year;
        }

        cout << "Price: ";
        cin >> salonCatalog[i].price;
    }

    cout << "\nSalon Catalog:\n";
    for (const auto &car : salonCatalog) {
        cout << "Color: " << car.color << ", Brand: " << car.brand
            << ", Type: " << car.carType << ", Year: " << car.year
            << ", Price: " << car.price << endl;
    }

    salonCatalog.erase(remove_if(salonCatalog.begin(), salonCatalog.end(),
                [](const Car &car) { return car.color == 3; }),
            salonCatalog.end());

    int bmwCount = count_if(salonCatalog.begin(), salonCatalog.end(),
            [](const Car &car) { return car.brand == "BMW"; });

    int truckCount = count_if(salonCatalog.begin(), salonCatalog.end(),
            [](const Car &car) { return car.carType == 2; });

    int totalTruckAge = accumulate(
            salonCatalog.begin(), salonCatalog.end(), 0, [](int sum, const Car &car) {
            return (car.carType == 2) ? sum + (2023 - car.year) : sum;
            });

    float averageTruckAge =
        (truckCount > 0) ? static_cast<float>(totalTruckAge) / truckCount : 0;

    auto maxPriceCar = max_element(
            salonCatalog.begin(), salonCatalog.end(),
            [](const Car &car1, const Car &car2) { return car1.price < car2.price; });

    cout << "\nAfter removing cars with color 3:\n";
    for (const auto &car : salonCatalog) {
        cout << "Color: " << car.color << ", Brand: " << car.brand
            << ", Type: " << car.carType << ", Year: " << car.year
            << ", Price: " << car.price << endl;
    }

    cout << "\nNumber of BMW cars: " << bmwCount << endl;
    cout << "Average age of trucks: " << averageTruckAge << endl;

    cout << "\nCar with the maximum price:\n";
    cout << "Color: " << maxPriceCar->color << ", Brand: " << maxPriceCar->brand
        << ", Type: " << maxPriceCar->carType << ", Year: " << maxPriceCar->year
        << ", Price: " << maxPriceCar->price << endl;

    return 0;
}
