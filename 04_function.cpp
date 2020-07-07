#include <iostream>
#include <string>
using std::string;
using std::cout;

int square(int n) {
  int x = 0;

  for(int i = 0; i < n; ++i) {
    x += n;
  }

  return x;
}
int main () {
  cout << square(4) << "\n"; // 4+4+4+4 = 16

  return 0;
}
