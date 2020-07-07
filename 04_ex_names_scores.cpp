#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cin;
using std::cout;
using std::string;

int main() {
  string name;
  double score;
  vector<string> names;
  vector<double> scores;
  bool exist;

  cout << "Enter name and score: ";

  while(cin >> name >> score && !(name == "NoName" && score == 0)) {
    exist = false;
    for(string n: names) {
      if (n == name) {
        cout << "Name is already exist. Please enter different name.\n";
        exist = true;
        break;
      }
    }
    if (!exist) {
      names.push_back(name);
      scores.push_back(score);
      exist = false;
    }
    cout << "Enter another name and score: ";
  }

  for(int i = 0; i < names.size(); i++) {
    cout << "Name: " << names[i] << ", score: " << scores[i] << ".\n";
  }
}