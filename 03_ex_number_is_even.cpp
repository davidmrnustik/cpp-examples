#include <iostream>
#include <string>
using std::cout;
using std::cin;

int main() {
  cout << "Enter a number: " << "\n";
  int number;
  cin >> number;
  if (number % 2 == 0) {
    cout << "The number " << number << " is even.\n";
  } else {
    cout << "The number " << number << " is odd.\n";
  }
}