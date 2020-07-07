#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
  int i = 1;
  int c = 0;
  int t = 0;

  while(i <= 64) {
    if (i == 1) {
      t = 1;
      
    } else {
      t = t * 2;
    }
    
    cout << "Current position of chess board: " << i << "\n";
    cout << "Current amount of grains: " << c << "\n";
    cout << "Total number of grains: " << t << "\n";
    ++i;
  }
}