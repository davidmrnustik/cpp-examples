#include "./std_lib_error.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main() {
  vector<double> temps;
  double max = 0.0;
  double min = 0.0;
  double sum = 0.0;

  for(double temp; cin >> temp;)
    temps.push_back(temp);

  for(double temp: temps) {
    if (temp > max) max = temp;
    if (temp < min) min = temp;
    ++sum;
  }

  cout << "High temperature: " << max << "\n";
  cout << "Low temperature: " << min << "\n";
  cout << "Average temperature: " << double(sum/temps.size()) << "\n";
}