#include "./std_lib_error.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main() {
  double max = -1000;
  double min = 1000;
  double sum = 0;
  int no_of_temps = 0;

  for(double temp; cin >> temp;) {
    ++no_of_temps;
    sum += temp;
    if (temp > max) max = temp;
    if (temp < min) min = temp;
  }

  cout << "High temperature: " << max << "\n";
  cout << "Low temperature: " << min << "\n";
  cout << "Average temperature: " << sum/no_of_temps << "\n";
}