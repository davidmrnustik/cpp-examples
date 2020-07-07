#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main() {
  constexpr double cm_per_inch = 2.54;
  double length = 1;
  char unit = 0;

  cout << "Enter length and unit:\n";
  cin >> length >> unit;
  
  if (unit == 'c') {
    cout << length << unit << " = " << length / cm_per_inch << "inch" << "\n";
  } else if (unit == 'i') {
    cout << length << unit << " = " << length * cm_per_inch << "cm" << "\n";
  } else {
    cout << "This is wrong unit! Please try again.\n";
  }

  return 0;
}