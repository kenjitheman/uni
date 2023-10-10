#include <cwchar>
#include <iostream>
using namespace std;

int main() {
  double price, discount;

  cout << "[+] enter some price of some product: ";
  cin >> price;

  if (price < 0) {
    cout << "[ERROR] -> the price cannot be negative" << endl;
    return 1;
  }

  cout << "[+] enter the discount percentage (0-100%): ";
  cin >> discount;

  if (discount < 0 || discount > 100) {
    cout << "[ERROR] -> the discount percentage must be from 0 to 100" << endl;
    return 1;
  }

  double finalPrice = price - (price * discount / 100);

  cout << "[+] final price (with bonus): " << finalPrice << " ¥" << endl;

  return 0;
}
