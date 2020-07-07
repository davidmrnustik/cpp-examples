#include "./std_lib_error.h"
#include <iostream>
using std::cin;
using std::cout;

int main() {
  try {
    int x1 = narrow_cast<int>(2.9);
    int x2 = narrow_cast<int>(2.0);
    char c1 = narrow_cast<char>(1066);
    char c2 = narrow_cast<char>(85);
    return 0;
  } catch(runtime_error& e) {
    cerr << "runtime error: " << e.what() << "\n";
    return 1;
  } catch(...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
  }
}