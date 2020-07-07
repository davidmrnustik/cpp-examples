#include "./std_lib_error.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

double ctok(double c) {
  double k = c + 273.15;
  if (k < 0) error("shouldn't be below 0K");
  return k;
}
double ktoc(double k) {
  double c = k - 273.15;
  if (c < -273.5) error("shouldn't be below -273.5 C");
  return c;
}

int main() {
  char input;
  cout << "To convert from celsius to kelvin press (k); from kelvin to celsius press (c)\n";
  cin >> input;

  try {
    if (input == 'k') {
      double c;
      cin >> c;
      double k = ctok(c);
      cout << k << "\n";
    } else if (input == 'c') {
      double k;
      cin >> k;
      double c = ktoc(k);
      cout << c << "\n";
    } else {
      error("Wrong input!\n");
    }
  }
  catch(exception& e) {
    cerr << e.what() << '\n';
  }
}