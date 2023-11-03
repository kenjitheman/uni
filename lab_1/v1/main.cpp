#include <iostream>
using namespace std;

int main() {
  float a, b;
  float x;
  cout << "Input a: ";
  cin >> a;
  cout << "Input b: ";
  cin >> b;
  if (a != 0) {
    x = -b / a;
    cout << "x = " << x << endl;
  } else {
    cout << "No solution" << endl;
  }

	cout << "\nthat's it !"<< endl;
  system("pause");
  return 0;
}
