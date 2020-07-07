#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int convertToInt(string s) {
  int i;
  for(char c: s) {
    if (c >= '0' && c <= '9') {
      i = i * 10 + (c - '0');
    } else {
      i = -1;
    }
  }
  return i;
}

int main() {
  vector<string> digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  string choose;
  int i;

  while(cin >> choose) {
    i = convertToInt(choose);
    if (i >= 0) {
      cout << "Your choice is " << digits[i] << "\n";
    } else {
      int index = 0;
      for(string digit: digits) {
        ++index;
        if (digit == choose) {
          cout << "Your choice is " << index - 1 << "\n";
        }
      }
    }
  }
}