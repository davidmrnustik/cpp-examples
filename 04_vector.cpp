#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::cin;

int main() {
  vector<string> disliked{"Soja", "Nata"};
  vector<string> words;

  for(string word; cin >> word;) {
    words.push_back(word);
    cout << word << "\n";
    for(string d: disliked) {
      if (word == d) {
        cout << "BLEEP" << "\n";
      }
    }
  }

}