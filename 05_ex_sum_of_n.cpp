#include "./std_lib_error.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int sum_of_n(vector<int> v, int n) {
  int sum = 0;

  for(int i = 0; i < n; ++i) {
    sum += v[i];
  }
  return sum;
}
int main() {
  int input;
  vector<int> numbers;
  int sum = 0;

  cin >> input;

  for(int n; cin >> n;) {
    numbers.push_back(n);
  }

  try {
    if (input > numbers.size()) error("Number must be lower than amount of numbers in vector.");
    cout << sum_of_n(numbers, input) << "\n";
  } catch(exception& e) {
    cerr << "error: " << e.what() << "\n";
  } catch(...) {
    cerr << "Oops: unknown exception!\n";
  }

}