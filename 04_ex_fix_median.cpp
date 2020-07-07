#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
  vector<double> temps;

  for(double temp; cin >> temp;)
    temps.push_back(temp);
  
  // compute mean temperature
  double sum = 0;
  for(double x: temps) sum += x;
  cout << "Average temperature: " << sum/temps.size() << "\n";

  // compute median temperature
  sort(temps.begin(), temps.end());
  double median;
  if (temps.size()%2 != 0) {
    median = temps[temps.size()/2];
  } else {
    median = (temps[(temps.size()/2)] + temps[((temps.size() - 1)/2)]) / 2;
  }
  cout << "Median temperature: " << median << "\n";
  // 4 9 11 12 40 = 11
  // 4 9 12 40 => 9 12 = 21/2 = 10.5
}