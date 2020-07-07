#include "./std_lib_error.h"
#include <iostream>
using std::cin;
using std::cout;

int main() {
  try {
    int n = 1;
    int m = 2;

    while(n<m) {
      cout << n << "\n";
      int x = n+m;
      n = m;
      m = x;
    }

    cout << "Largest Fibonacci number that fits in an int is " << n << "\n";
  } catch(runtime_error e) {
    cout << e.what() << "\n";
  }
}