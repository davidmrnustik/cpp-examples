#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
  string a;
  string b;
  string c;
  cout << "Enter three words: " << "\n";
  cin >> a >> b >> c;

  if (a <= b && b <= c) {
    cout << a << " " << b << " " << c << "\n";
    return 0;
  };
  if (a <= c && c <= b) {
    cout << a << " " << c << " " << b << "\n";
    return 0;
  }
  if (b <= c && c <= a) {
    cout << b << " " << c << " " << a << "\n";
    return 0;
  }
  if (b <= a && a <= c) {
    cout << b << " " << a << " " << c << "\n";
    return 0;
  } 
  if (c <= a && a <= b) {
    cout << c << " " << a << " " << b << "\n";
    return 0;
  }
  if (c <= b && b <= a) {
    cout << c << " " << b << " " << a << "\n";
    return 0;
  }
}