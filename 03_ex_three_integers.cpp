#include <iostream>
using std::cout;
using std::cin;

int main() {
  int a;
  int b;
  int c;
  cout << "Enter three integers: " << "\n";
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

/*
a, b, c
a < b && b < c

a, c, b
a < c && c < b

b, c, a
b < c && c < a

b, a, c
b < a && a < c

c, a, b
c < a && a < b

c, b, a
c < b && b < a
*/