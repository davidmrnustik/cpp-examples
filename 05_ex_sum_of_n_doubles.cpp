#include "./std_lib_error.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

double sum_of_n(vector<double> v, int n) {
  double sum = 0;

  for(int i = 0; i < n; ++i) {
    sum += v[i];
  }
  return sum;
}

vector<double> diff_of_n(vector<double> v) {
  // numbers: {2, 3, 9, 12}
  // diffs: {1, 6, 4}
  vector<double> diff;
  for(int i = 0; i < v.size(); ++i) {
    if (i != 0) {
      diff.push_back(v[i] - v[i-1]);
    }
  }
  return diff;
}

int main() {
  int input;
  vector<double> numbers;
  double sum = 0.0;
  vector<double> diff;

  cin >> input;

  for(double n; cin >> n;) {
    numbers.push_back(n);
  }

  try {
    if (input > numbers.size()) error("Number must be lower than amount of numbers in vector.");
    cout << sum_of_n(numbers, input) << "\n";
    diff = diff_of_n(numbers);
    cout << "Differences: ";
    for(double d: diff) cout << d << ", ";
    cout << "\n";
  } catch(exception& e) {
    cerr << "error: " << e.what() << "\n";
  } catch(...) {
    cerr << "Oops: unknown exception!\n";
  }

}