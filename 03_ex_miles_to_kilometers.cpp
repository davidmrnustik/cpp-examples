#include <iostream>
using std::cout;
using std::cin;

int main() {
  cout << "Enter length in miles: " << "\n";
  double miles;
  cin >> miles;
  double kilometers = miles * 1.609;
  cout << miles << " miles are " << kilometers << "km\n";

  return 0;
}