#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

int isPrime(int n) {
  bool prime = true;

  for(int i = 2; i <= n/2; ++i) {
    if(n%i == 0) {
      prime = false;
      break;
    }
  }
  return prime;
}

int main() {
  int input;
  vector<int> numbers;

  cout << "Enter the value to print n prime numbers: ";
  cin >> input;
  
  int i = 2;
  while(numbers.size() < input) {
    if(isPrime(i)) numbers.push_back(i);
    ++i;
  }

  for(int i: numbers) cout << i << " ";
  cout << "\n";
}