#include <iostream>
#include <vector>
#include <string>
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

int getIndex(vector<string> v, string choose) {
  int i = 0;
  for(string s: v) {
    ++i;
    if (s == choose) {
      return i - 1;
    }
  }
  return i;
}

int main() {
  vector<string> digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  double sum;
  char operation;
  double n1;
  double n2;
  string choose1;
  string choose2;
  constexpr char add = '+';
  constexpr char subtract = '-';
  constexpr char multiply = '*';
  constexpr char divide = '/';

  while(cin >> choose1 >> choose2 >> operation) {
    n1 = convertToInt(choose1);
    n2 = convertToInt(choose2);

    if (n1 < 0) {
      n1 = getIndex(digits, choose1);
    }

    if (n2 < 0) {
      n2 = getIndex(digits, choose2);
    }

    switch(operation) {
      case add:
        cout << "The sum of " << n1 << " and " << n2 << " is " << n1 + n2 << "\n";
        break;
      case subtract:
        cout << "The subtract of " << n1 << " and " << n2 << " is " << n1 - n2 << "\n";
        break;
      case multiply:
        cout << "The product of " << n1 << " and " << n2 << " is " << n1 * n2 << "\n";
        break;
      case divide:
        cout << "The divide of " << n1 << " and " << n2 << " is " << n1 / n2 << "\n";
        break;
      default:
        cout << "Wrong math operation. Please enter '+', '-', '*' or '/'\n";
    }
  }
}