#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::sort;

constexpr double cm_per_m = 100;
constexpr double cm_per_inch = 2.54;
constexpr double inch_per_ft = 12;

double _sort(double a, double b) {
  return b - a;
}

int main() {
  double n;
  double n_in_m;
  double max = 0;
  double min = 0;
  string unit;
  double sum = 0;
  // illegal
  vector<string> illegal = {"y", "yard", "km", "gallons"};
  vector<double> nums;
  
  while(cin >> n >> unit) {
    
    if (unit == "cm") {
      n_in_m = n/cm_per_m;
      cout << n << unit << ": " << n/cm_per_m << " m\n";
    } else if (unit == "m") {
      n_in_m = n;
      cout << n << unit << ": " << cm_per_m*n << " cm\n";
    } else if (unit == "in")  {
      n_in_m = cm_per_inch*n/cm_per_m;
      cout << n << unit << ": " << cm_per_inch*n << " cm\n";
    } else if (unit == "ft") {
      n_in_m = inch_per_ft*n*cm_per_inch/cm_per_m;
      cout << n << unit << ": " << inch_per_ft*n << " in\n";
    } else {
      for(string word: illegal) {
        if (unit == word) {
          cout << "This unit is not accepted.\n";
        }
      }
    }

    if (unit == "cm" || unit == "in" || unit == "ft" || unit == "m") {
      sum += n_in_m;
      if (max == 0) {
        max = n_in_m;
      }
      if (min == 0) {
        min = n_in_m;
      }
      if (n_in_m > max) {
        max = n_in_m;
      }
      if (n_in_m < min) {
        min = n_in_m;
      }
      nums.push_back(n_in_m);
    }

  }
  cout << "the smallest so far " << min << " m\n";
  cout << "the largest so far " << max << " m\n";
  cout << "the sum is " << sum << " m\n";
  cout << "the numbers you have entered:" << "\n";

  sort(nums.begin(), nums.end());
  for (double num: nums) {
    cout << num << ", ";
  }
  cout << "\n";
}