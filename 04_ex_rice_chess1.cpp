#include <iostream>
using std::cout;
using std::cin;

int main() {
  int i = 1;
  double c = 0;
  double t = 0;

  while(i <= 64) {
    if (i == 1) {
      c = 1;
      t = c;
    } else {
      t = c;
      c = t * 2;
    }
    
    cout << "Current position of chess board: " << i << "\n";
    cout << "Current amount of grains: " << c << "\n";
    cout << "Total number of grains: " << t << "\n";
    ++i;
  }
}