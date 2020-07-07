#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

vector<int> numbers = {3, 5, 2, 57, 53, 314, 543, 6, 546, 568, 578, 467, 568, 324, 56, 2, 3, 543, 54, 321, 21, 123, 324, 324, 3456, 56, -45, 4, 5, 6, 6, 6, 5, 3, 2,-34};
int min = 0;
int max = 0;
int mode = 0;

int main() {
  for(int n: numbers) {
    if (n > max) max = n;
    if (n < min) min = n;
  }

  int modeAmount = 0;
  for(int i = 0; i<numbers.size(); ++i) {
    int amount = 0;
    for(int j = 0; j<numbers.size(); ++j) {
      if (numbers[i]>0) {
        if (numbers[j] == numbers[i]) ++amount;
      }
    }
    cout << "my amount: " << amount << " of " << numbers[i] << "\n";
    if(amount > modeAmount) {
      mode = numbers[i];
      modeAmount = amount;
    }
  }

  cout << "Max: " << max << "\n";
  cout << "Min: " << min << "\n";
  cout << "Mode: " << mode << "\n";
}
