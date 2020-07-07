#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main() {
  int i = 0;
  while (i < 26) {
    cout << char('a' + i) << "\t" << int('a') + i << "\n";
    ++i;
  }
  return 0;
}