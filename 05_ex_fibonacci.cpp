#include "./std_lib_error.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;

int v1 = 1;
int v2 = 1;

int fibonacci() {
  /*
  sum, v1, v2
  */
  int s = v1 + v2;
  if (s <= 0) s = 1;
  v1 = v2;
  v2 = s;

  return s;
}

int main() {
  int s = 0;

  while(v1 <= v2) {
    s = fibonacci();
    if (v1 <= v2) cout << s << " ";
  }
  cout << "\n";
}