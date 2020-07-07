#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
  string choose;

  while(cin >> choose) {
    int i = 0;
    for(char c: choose) {
      if (c >= '0' && c <= '9') {
        i = i * 10 + (c - '0');
        cout << i << "\n";
      }
    }
    char c = '2';
    cout << "I is: " << i << "\n";
    cout << "I is: " << c << "\n";
    cout << "I is: " << c - '0' << "\n";
  }
}
