#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main() {
  for(int i = 0; i < 26; ++i) {
    cout << char('A' + i) << "\t" << int('A') + i << "\n";

  }
  return 0;
}