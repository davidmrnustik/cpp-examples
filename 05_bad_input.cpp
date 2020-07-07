#include "./std_lib_error.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

void myerror(string s) {
  throw runtime_error(s);
}

int main() {
  double d;
  cin >> d;
  // if (!cin) myerror("Something wrong with input.\n");

  try {
    cin >> d;
    if (!cin) myerror("Something wrong with input.\n");
    // program
    return 0;
  } catch(runtime_error& e) {
    cerr << "runtime error: " << e.what() << "\n";
    return 1;
  } catch(...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
  }
}
 