#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::vector;

void print_result(int n, int c) {
  cout << "The number should be " << n << "\nNumber of attempts: " << c << "\n";
}

int main() {
  int counter = 0;
  char answer;
  int number;

  cout << "Which number are you thinking about?\n";
  cin >> number;


  ++counter;
  if (number < 50) {
    ++counter;
    if (number <= 25) {
      ++counter;
      if (number <= 12) {
        ++counter;
        if (number <= 6) {
          ++counter;
          if (number <= 3) {
            ++counter;
            if (number%2 == 0) {
              print_result(2, counter);
            } else {
              ++counter;
              if (number != 1) {
                print_result(3, counter);
              } else {
                print_result(1, counter);
              }
            }
          } else {
            ++counter;
            if (number%2 != 0) {
              print_result(5, counter);
            } else {
              ++counter;
              if (number == 4) {
                print_result(4, counter);
              } else {
                print_result(6, counter);
              }
            }
          }
        } else {
          ++counter;
          if (number <= 9) {
            ++counter;
            if (number%2 == 0) {
              print_result(8, counter);
            } else {
              ++counter;
              if (number == 7) {
                print_result(7, counter);
              } else {
                print_result(9, counter);
              }
            }
          } else {
            ++counter;
            if (number%2 != 0) {
              print_result(11, counter);
            } else {
              ++counter;
              if (number == 12) {
                print_result(11, counter);
              } else {
                print_result(10, counter);
              }
            }
          }
        }
      }
    }
  }
  
  
}