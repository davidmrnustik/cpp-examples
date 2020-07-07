#include "./std_lib_error.h"
#include <iostream>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::vector;
using std::sqrt;

double d(double a, double b, double c) {
  double D = b * b - (4 * a * c);
  if (D < 0) error("Equation has no roots.");
  return D;
}

vector<double> quadratic(double a, double b, double c) {
  vector<double> v;

  double x1 = (-b + sqrt(d(a, b, c))) / (2 * a);
  double x2 = (-b - sqrt(d(a, b, c))) / (2 * a);
  v.push_back(x1);
  v.push_back(x2);

  return v;
}

int main() {
  double a;
  double b;
  double c;

  cin >> a >> b >> c;

  try {
    vector<double> v = quadratic(a, b, c);
    double x1 = v[0];
    double x2 = v[1];
    cout << "Roots of quadratic equation " << a << "x2 + " << b << "x + " << c << " = 0 are " << x1 << " and " << x2 << "\n";
  }
  catch(const std::exception& e) {
    cerr << e.what() << '\n';
  }

}