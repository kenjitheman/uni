#include <iostream>
using namespace std;

int main() {
  float perimeter, side1;
  float side2, area;

  cout << "Enter the perimeter of the triangle: ";
  cin >> perimeter;

  cout << "Enter the sides of the triangle: ";
  cin >> side1;

  if (perimeter < 2 * side1) {
    cout << "[ERROR] Unable to draw a rectangle with the given perimeter and "
            "side."
         << endl;
  } else {
    side2 = (perimeter - 2 * side1) / 2;
    area = side1 * side2;
    cout << "The area of the triangle is: " << area << endl;
  }

  return 0;
}
