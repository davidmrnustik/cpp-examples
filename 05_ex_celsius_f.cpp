#include "./std_lib_error.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

double ctof(double c) {
  double f = 9.0/5 * c + 32;
  return f;
}

int main() {
  double c;
  cin >> c;
  cout << c << " celsius is " << ctof(c) << " F\n";
}