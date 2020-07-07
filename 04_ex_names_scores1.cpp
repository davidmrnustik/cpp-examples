#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cin;
using std::cout;
using std::string;
using std::getline;

string parseString(string i) {
  string s = "";
  for(char c: i) {
    if (c >= 'a' && c <= 'z') s += c;
  }
  return s;
}

double parseNumber(string i) {
  double d;
  for(char c: i) {
    if (c >= '0' && c <= '9') {
      d = d * 10 + (c - '0');
    };
  }
  return d;
}

int main() {
  string input;
  string name;
  double score;
  vector<string> names;
  vector<double> scores;
  char inputType;

  cout << "Enter name and score: ";

  while(getline(cin, input) && input != "NoName 0") {
    name = parseString(input);
    score = parseNumber(input);

    /*
    input types are:
     - (s) - score, when name is not entered
     - (n) - name, when score is not entered
     - (a) - all, when name and score are entered
    */

    if (name.length() == 0) inputType = 's';
    if (score == 0) inputType = 'n';
    if (score > 0 && name.length() > 0) inputType = 'a';

    switch(inputType) {
      case 'n':
      if (names.size() == 0) {
        cout << "name not found\n";
      } else {
        bool search = false;
        for(int i = 0; i < names.size(); ++i) {
          if (names[i] == name) {
            cout << "The player " << name << " has score " << scores[i] << ".\n";
            search = true;
          }
        }
        if (!search) cout << "name not found\n";
      }
      break;

      case 's':
      if (scores.size() == 0) {
        cout << "score not found\n";
      } else {
        vector<int> search;

        for(int i = 0; i < scores.size(); ++i) {
          if (scores[i] == score) search.push_back(i);
        }

        if (search.size() == 0) {
          cout << "score not found\n";
        } else {
          cout << "Following players have score " << score << ": ";
          for(int i = 0; i < search.size(); ++i) cout << names[search[i]] << ", ";
          cout << "\n";
        }
      }
      break;

      default:
      bool search = false;

      for(string n: names) {
        if (n == name) search = true;
      }

      if (!search) {
        names.push_back(name);
        scores.push_back(score);
      } else {
        cout << "Name is already exist. ";
      }
    }
    cout << "Enter another name and score: ";
  }

  for(int i = 0; i < names.size(); i++) {
    cout << "Name: " << names[i] << ", score: " << scores[i] << ".\n";
  }
}