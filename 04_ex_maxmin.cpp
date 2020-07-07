#include <iostream>
using std::cout;
using std::cin;

int main() {
  double n;
  double max = 0;
  double min = 0;

  while(cin >> n) {
    if (max == 0) {
      max = n;
    }
    if (min == 0) {
      min = n;
    }
    if (n > max) {
      max = n;
    }
    if (n < min) {
      min = n;
    }
  
    cout << "the smallest so far " << min << "\n";
    cout << "the largest so far " << max << "\n";
  }
}