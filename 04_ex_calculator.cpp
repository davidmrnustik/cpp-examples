#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
  double sum;
  char operation;
  double n1;
  double n2;
  constexpr char add = '+';
  constexpr char subtract = '-';
  constexpr char multiply = '*';
  constexpr char divide = '/';

  while(cin >> n1 >> n2 >> operation) {
    switch(operation) {
      case add:
        cout << "The sum of " << n1 << " and " << n2 << " is " << n1 + n2 << "\n";
        break;
      case subtract:
        cout << "The subtract of " << n1 << " and " << n2 << " is " << n1 - n2 << "\n";
        break;
      case multiply:
        cout << "The product of " << n1 << " and " << n2 << " is " << n1 * n2 << "\n";
        break;
      case divide:
        cout << "The divide of " << n1 << " and " << n2 << " is " << n1 / n2 << "\n";
        break;
      default:
        cout << "Wrong math operation. Please enter '+', '-', '*' or '/'\n";
    }
  }
}