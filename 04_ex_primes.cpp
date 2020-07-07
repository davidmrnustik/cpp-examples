#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::vector;
using std::string;

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
vector<int> myPrimes;
vector<int> digits = {2, 3, 5, 7};
int choose;

bool isPrime(int n) {
  for(int i: primes) {
    if (n == i) {
      return true;
    }
  }
  return false;
}

bool isPrime1(int n) {
  bool prime = true;
  for(int i: digits) {
    if (n!=i && n%i == 0) {
      prime = false;
      break;
    }
  }
  return prime;
}

int isPrime2(int n) {
  bool prime = true;

  for(int i = 2; i <= n/2; i++) {
    if (n%i == 0) {
      prime = false;
      break;
    }
  }

  return prime;
}

int main() {
  int i = 2;
  cout << "Enter max value for prime numbers: ";
  cin >> choose;

  cout << "\n";
  while(i < choose) {
    if (isPrime2(i)) myPrimes.push_back(i);
    ++i;
  }

  for(int n: primes) cout << n << ", ";
  cout << "\n";
  for(int n: myPrimes) cout << n << ", ";
  cout << "\n";
}