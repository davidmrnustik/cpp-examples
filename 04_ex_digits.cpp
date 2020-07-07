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
    if (choose == "zero") {
      cout << "Your choice is " << 0 << "\n";
    } else if (choose == "one") {
      cout << "Your choice is " << 1 << "\n";
    } else if (choose == "two") {
      cout << "Your choice is " << 2 << "\n";
    } else if (choose == "three") {
      cout << "Your choice is " << 3 << "\n";
    } else if (choose == "four") {
      cout << "Your choice is " << 4 << "\n";
    } else if (choose == "five") {
      cout << "Your choice is " << 5 << "\n";
    } else if (choose == "six") {
      cout << "Your choice is " << 6 << "\n";
    } else if (choose == "seven") {
      cout << "Your choice is " << 7 << "\n";
    } else if (choose == "eight") {
      cout << "Your choice is " << 8 << "\n";
    } else if (choose == "nine") {
      cout << "Your choice is " << 9 << "\n";
    } else if (choose == "0" || choose == "1" || choose == "2" || choose == "3" || choose == "4" || choose == "5" || choose == "6" || choose == "7" || choose == "8" || choose == "9"){
      int i = 0;
      for(char c: choose) {
        if (c >= '0' && c <= '9') {
          i = i * 10 + (c - '0');
        }
      }
      cout << "Your choice is " << digits[i] << "\n";
    }
  }
}