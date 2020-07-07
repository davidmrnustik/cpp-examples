#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

void eratosthenes(int n) {
  vector<int> numbers(n, true);

  for(int i = 2; i * i <= n; ++i) {
      if (numbers[i]) {
        for(int j = i * i; j < n; j += i) {
          numbers[j] = false;
        }
      }
    }

  for(int i = 2; i < n; i++) {
    if (numbers[i]) cout << i << " ";
  }
  cout << "\n";
}

int main() {
  int n = 50;
  int input;

  cout << "Enter value to print prime numbers smaller than or equal to: ";
  cin >> input;
  cout << "\n";

  if (input < 0) input = -input;

  eratosthenes(input);
}