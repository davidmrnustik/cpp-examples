#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
  cout << "Enter operator and two operands:\n";
  string operation;
  double op1;
  double op2;
  cin >> operation >> op1 >> op2;
  
  cout << operation << " " << op1 << " " << op2 << " = ";

  if (operation == "+") cout << op1 + op2 << "\n";
  if (operation == "-") cout << op1 - op2 << "\n";
  if (operation == "*") cout << op1 * op2 << "\n";
  if (operation == "/") cout << op1 / op2 << "\n";

  return 0;
}