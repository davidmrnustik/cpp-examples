#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::vector;
using std::string;

vector<string> strings = {"david", "sara", "jan", "valentina", "david", "honza", "carmina", "vlasta", "mirek", "sara", "ondra", "jan", "valentina", "sofia", "sara", "elena", "pablo", "susana"};
string min;
string max;
string mode;

int main() {
  for(string s: strings) {
    if (min.length() == 0) min = s;
    if (max.length() == 0) max = s;
    if (s > max) max = s;
    if (s < min) min = s;
  }

  int modeAmount = 0;
  for(int i = 0; i<strings.size(); ++i) {
    int amount = 0;
    for(int j = 0; j<strings.size(); ++j) {
      if (strings[j] == strings[i]) ++amount;
    }
    if(amount > modeAmount) {
      mode = strings[i];
      modeAmount = amount;
    }
  }

  cout << "Max: " << max << "\n";
  cout << "Min: " << min << "\n";
  cout << "Mode: " << mode << "\n";
}