#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
  string previous = " ";
  string current;
  int number_of_words = 0;

  while (cin >> current) {
    ++number_of_words;
    if (previous == current)
      cout << "Number of words: " << number_of_words << ". Current and previous words are the same: " << current << "\n";
    previous = current;
  }
}