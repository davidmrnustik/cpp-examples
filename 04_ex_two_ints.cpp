#include <iostream>
using std::cout;
using std::cin;

void are_almost_equal(double diff) {
  if (diff >= 1.0 && diff <= 100) {
    cout << "the number are almost equal\n";
  }
}

void compare_numbers(double n1, double n2) {
  double diff;

  if (n1 > n2) {
    cout << "the smaller value is: " << n2 << "\n";
    cout << "the larger value is: " << n1 << "\n";
    diff = n1 - n2;
    are_almost_equal(diff);
  } else {
    cout << "the smaller value is: " << n1 << "\n";
    cout << "the larger value is: " << n2 << "\n";
    diff = n2 - n1;
    are_almost_equal(diff);
  }
}

int main() {
  double n1;
  double n2;
  while(cin >> n1 >> n2) {
    if (n1 == n2) {
      cout << "the numbers are equal\n";
    }
    compare_numbers(n1, n2);
  }
}