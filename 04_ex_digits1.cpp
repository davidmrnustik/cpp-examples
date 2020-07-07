#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
  vector<string> digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  string choose;

  while(cin >> choose) {
    if (choose == "0" || choose == "1" || choose == "2" || choose == "3" || choose == "4" || choose == "5" || choose == "6" || choose == "7" || choose == "8" || choose == "9"){
      int i = 0;
      for(char c: choose) {
        if (c >= '0' && c <= '9') {
          i = i * 10 + (c - '0');
        }
      }
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