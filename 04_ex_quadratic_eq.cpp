#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::sqrt;

double equation(double a, double b, double c, char operators) {
  double x;
  double D = sqrt(b*b-4*(a*c));
  switch (operators) {
  case '+':
    x = (-b+D)/(2*a);
    break;
  case '-':
    x = (-b-D)/(2*a);
  default:
    break;
  }
  return x;
}

int main() {
  double a;
  double b;
  double c;
  double x1;
  double x2;


  cout << "Enter value for a: ";
  cin >> a;

  cout << "Enter value for b: ";
  cin >> b;

  cout << "Enter value for c: ";
  cin >> c;

  x1 = equation(a, b, c, '+');
  x2 = equation(a, b, c, '-');

  cout << "Your quadratic equation is: " << a << "x2 + " << b << "x + " << c << " = 0\n";
  cout << "x1 is: " << x1 << "\n";
  cout << "x2 is: " << x2 << "\n";
}