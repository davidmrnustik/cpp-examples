#include "./std_lib_error.h"
#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::cerr;

int main () {
  vector<int> v;
  try {
    for(int x; cin >> x;)
      v.push_back(x);
    for(int i = 0; i<=v.size(); ++i) {
      cout << "v[" << i << "] == " << v[i] << "\n";
    }
  }
  catch(out_of_range) {
    cerr << "Oops! Range error\n";
    return 1;
  } catch(...) {
    cerr << "Exception: something went wring\n";
    return 2;
  }
 
}