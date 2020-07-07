#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
  cout << "Enter digits as words:\n";
  string digit;

  while (cin >> digit) {
    if (digit == "zero") {
      cout << 0 << "\n";
    } else if (digit == "one") {
      cout << 1 << "\n";
    } else if (digit == "two") {
      cout << 2 << "\n";
    } else if (digit == "three") {
      cout << 3 << "\n";
    } else if (digit == "four") {
      cout << 4 << "\n";
    } else {
      cout  << "not a number I know stupid computer!\n";
    }
  }

  return 0;
}