#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
  vector<int> diff = {25, 13, 6, 3, 2, 1};
  int guess = 0;
  char choose;
  int number = 50;
  int index;

  cout << "Is the number 50?\n";
  ++guess;

  while(cin >> choose) {
    if (choose == 'c' || choose == 'l' || choose == 'h') {
      if (choose == 'c') {
        cout << "Great, number was " << number << " in " << guess << " guesses.\n";
        break;
      } else {
        if (choose == 'l') number -= diff[index];
        if (choose == 'h') number += diff[index];
        ++index;
        cout << "Is number lower or higher than " << number << "\n";
        ++guess;
      }
    } else {
    cout << "Please enter (c) for correct, (l) for lower or (h) for higher.\n";
    }
  }
}