#include <iostream>
using std::cout;
using std::cin;
using std::abs;

int main() {
  double val1;
  double val2;
  cout << "Enter two float numbers:\n";
  cin >> val1 >> val2;

  if (val1 < val2) {
    cout << val1 << " is smaller than " << val2 << "\n";
  } else if (val2 > val1) {
    cout << val1 << " is bigger than " << val2 << "\n";
  } else {
    cout << "Both number are the same.\n";
  }

  cout << "Sum of " << val1 << " and " << val2 << " is " << val1 + val2 << "\n";
  cout << "Difference between " << val1 << " and " << val2 << " is " << val1 - val2 << "\n";
  cout << "Product of " << val1 << " and " << val2 << " is " << val1 * val2 << "\n";
  cout << "Ratio of " << val1 << " and " << val2 << " is " << val1 / val2 << "\n";

  return 0;
}